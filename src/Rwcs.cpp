#include <Rcpp.h>
#include <algorithm>
#include <utility>
#include <vector>
#include <wcslib.h>
#include <stdio.h> 
#include <stdlib.h> 
using namespace Rcpp;

// [[Rcpp::export]]
SEXP Cwcs_s2p(Rcpp::NumericVector RA, Rcpp::NumericVector Dec,
              Rcpp::String CTYPE1, Rcpp::String CTYPE2,
              double CRVAL1 = 0, double CRVAL2 = 0,
              double CRPIX1 = 0, double CRPIX2 = 0,
              double CD1_1 = 1, double CD1_2 = 0,
              double CD2_1 = 0, double CD2_2 = 1,
              double PV1 = 0, double PV2 = 0
              ){
  int i;
  const int ncoord = RA.length();
  const int naxis = 2;

  //setup wcs
  struct wcsprm wcs;
  wcs.flag = -1;
  wcsini(1, naxis, &wcs);

  //insert wcs val
  wcs.crval[0] = CRVAL1;
  wcs.crval[1] = CRVAL2;

  //insert wcs pix
  wcs.crpix[0] = CRPIX1;
  wcs.crpix[1] = CRPIX2;

  //insert wcs pix
  wcs.crpix[0] = CRPIX1;
  wcs.crpix[1] = CRPIX2;

  //insert wcs cd matrix
  double m[2][2];
  m[0][0] = CD1_1;
  m[0][1] = CD1_2;
  m[1][0] = CD2_1;
  m[1][1] = CD2_2;
  wcs.pc = *m;

  //insert ctype
  strcpy(wcs.ctype[0], CTYPE1.get_cstring());
  strcpy(wcs.ctype[1], CTYPE2.get_cstring());

  //insert wcs pv
  wcs.npv = 2;
  wcs.pv[0].value = PV1;
  wcs.pv[1].value = PV2;
  
  wcs.lng = 0;
  wcs.lat = 1;
  
  double *world = (double *)calloc(ncoord * naxis, sizeof(double));
  for (i = 0; i < ncoord; i++) {
    world[2 * i] = RA(i);
    world[2 * i + 1] = Dec(i);
  }
  double *phi = (double *)calloc(ncoord, sizeof(double));
  double *theta = (double *)calloc(ncoord, sizeof(double));
  double *img = (double *)calloc(ncoord * naxis, sizeof(double));
  double *pixel = (double *)calloc(ncoord * naxis, sizeof(double));
  int *stat = (int *)calloc(ncoord, sizeof(int));
  
  wcss2p(&wcs, ncoord, naxis, world, phi, theta, img, pixel, stat);
  
  NumericMatrix pixel_matrix(ncoord, naxis);
  
  for (i = 0; i < ncoord; i++) {
    pixel_matrix(i,0) = pixel[2 * i];
    pixel_matrix(i,1) = pixel[2 * i + 1];
  }
  
  return(pixel_matrix);
}

// [[Rcpp::export]]
SEXP Cwcs_p2s(Rcpp::NumericVector x, Rcpp::NumericVector y,
              Rcpp::String CTYPE1, Rcpp::String CTYPE2,
              double CRVAL1 = 0, double CRVAL2 = 0,
              double CRPIX1 = 0, double CRPIX2 = 0,
              double CD1_1 = 1, double CD1_2 = 0,
              double CD2_1 = 0, double CD2_2 = 1,
              double PV1 = 0, double PV2 = 0
              ){
  int i;
  const int ncoord = x.length();
  const int naxis = 2;
  //setup wcs
  struct wcsprm wcs;
  wcs.flag = -1;
  wcsini(1, naxis, &wcs);
  
  //insert wcs val
  wcs.crval[0] = CRVAL1;
  wcs.crval[1] = CRVAL2;
  
  //insert wcs pix
  wcs.crpix[0] = CRPIX1;
  wcs.crpix[1] = CRPIX2;
  
  //insert wcs pix
  wcs.crpix[0] = CRPIX1;
  wcs.crpix[1] = CRPIX2;
  
  //insert wcs cd matrix
  double m[2][2];
  m[0][0] = CD1_1;
  m[0][1] = CD1_2;
  m[1][0] = CD2_1;
  m[1][1] = CD2_2;
  wcs.pc = *m;
  
  //insert ctype
  strcpy(wcs.ctype[0], CTYPE1.get_cstring());
  strcpy(wcs.ctype[1], CTYPE2.get_cstring());
  
  //insert wcs pv
  wcs.npv = 2;
  wcs.pv[0].value = PV1;
  wcs.pv[1].value = PV2;
  
  wcs.lng = 0;
  wcs.lat = 1;
  
  double *pixel = (double *)calloc(ncoord * naxis, sizeof(double));
  for (i = 0; i < ncoord; i++) {
    pixel[2 * i] = x(i);
    pixel[2 * i + 1] = y(i);
  }
  double *phi = (double *)calloc(ncoord, sizeof(double));
  double *theta = (double *)calloc(ncoord, sizeof(double));
  double *img = (double *)calloc(ncoord * naxis, sizeof(double));
  double *world = (double *)calloc(ncoord * naxis, sizeof(double));
  int *stat = (int *)calloc(ncoord, sizeof(int));
  
  wcsp2s(&wcs, ncoord, naxis, pixel, phi, theta, img, world, stat);

  NumericMatrix world_matrix(ncoord, naxis);
  
  for (i = 0; i < ncoord; i++) {
    world_matrix(i,0) = world[2 * i];
    world_matrix(i,1) = world[2 * i + 1];
  }
  
  return(world_matrix);
}
