// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_hello_world
int rcpp_hello_world();
RcppExport SEXP _Rwcs_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// Cwcs_s2p
SEXP Cwcs_s2p(Rcpp::NumericVector RA, Rcpp::NumericVector Dec, Rcpp::String CTYPE1, Rcpp::String CTYPE2, double CRVAL1, double CRVAL2, double CRPIX1, double CRPIX2, double CD1_1, double CD1_2, double CD2_1, double CD2_2, double PV1, double PV2);
RcppExport SEXP _Rwcs_Cwcs_s2p(SEXP RASEXP, SEXP DecSEXP, SEXP CTYPE1SEXP, SEXP CTYPE2SEXP, SEXP CRVAL1SEXP, SEXP CRVAL2SEXP, SEXP CRPIX1SEXP, SEXP CRPIX2SEXP, SEXP CD1_1SEXP, SEXP CD1_2SEXP, SEXP CD2_1SEXP, SEXP CD2_2SEXP, SEXP PV1SEXP, SEXP PV2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type RA(RASEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Dec(DecSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type CTYPE1(CTYPE1SEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type CTYPE2(CTYPE2SEXP);
    Rcpp::traits::input_parameter< double >::type CRVAL1(CRVAL1SEXP);
    Rcpp::traits::input_parameter< double >::type CRVAL2(CRVAL2SEXP);
    Rcpp::traits::input_parameter< double >::type CRPIX1(CRPIX1SEXP);
    Rcpp::traits::input_parameter< double >::type CRPIX2(CRPIX2SEXP);
    Rcpp::traits::input_parameter< double >::type CD1_1(CD1_1SEXP);
    Rcpp::traits::input_parameter< double >::type CD1_2(CD1_2SEXP);
    Rcpp::traits::input_parameter< double >::type CD2_1(CD2_1SEXP);
    Rcpp::traits::input_parameter< double >::type CD2_2(CD2_2SEXP);
    Rcpp::traits::input_parameter< double >::type PV1(PV1SEXP);
    Rcpp::traits::input_parameter< double >::type PV2(PV2SEXP);
    rcpp_result_gen = Rcpp::wrap(Cwcs_s2p(RA, Dec, CTYPE1, CTYPE2, CRVAL1, CRVAL2, CRPIX1, CRPIX2, CD1_1, CD1_2, CD2_1, CD2_2, PV1, PV2));
    return rcpp_result_gen;
END_RCPP
}
// Cwcs_p2s
SEXP Cwcs_p2s(Rcpp::NumericVector x, Rcpp::NumericVector y, Rcpp::String CTYPE1, Rcpp::String CTYPE2, double CRVAL1, double CRVAL2, double CRPIX1, double CRPIX2, double CD1_1, double CD1_2, double CD2_1, double CD2_2, double PV1, double PV2);
RcppExport SEXP _Rwcs_Cwcs_p2s(SEXP xSEXP, SEXP ySEXP, SEXP CTYPE1SEXP, SEXP CTYPE2SEXP, SEXP CRVAL1SEXP, SEXP CRVAL2SEXP, SEXP CRPIX1SEXP, SEXP CRPIX2SEXP, SEXP CD1_1SEXP, SEXP CD1_2SEXP, SEXP CD2_1SEXP, SEXP CD2_2SEXP, SEXP PV1SEXP, SEXP PV2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type CTYPE1(CTYPE1SEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type CTYPE2(CTYPE2SEXP);
    Rcpp::traits::input_parameter< double >::type CRVAL1(CRVAL1SEXP);
    Rcpp::traits::input_parameter< double >::type CRVAL2(CRVAL2SEXP);
    Rcpp::traits::input_parameter< double >::type CRPIX1(CRPIX1SEXP);
    Rcpp::traits::input_parameter< double >::type CRPIX2(CRPIX2SEXP);
    Rcpp::traits::input_parameter< double >::type CD1_1(CD1_1SEXP);
    Rcpp::traits::input_parameter< double >::type CD1_2(CD1_2SEXP);
    Rcpp::traits::input_parameter< double >::type CD2_1(CD2_1SEXP);
    Rcpp::traits::input_parameter< double >::type CD2_2(CD2_2SEXP);
    Rcpp::traits::input_parameter< double >::type PV1(PV1SEXP);
    Rcpp::traits::input_parameter< double >::type PV2(PV2SEXP);
    rcpp_result_gen = Rcpp::wrap(Cwcs_p2s(x, y, CTYPE1, CTYPE2, CRVAL1, CRVAL2, CRPIX1, CRPIX2, CD1_1, CD1_2, CD2_1, CD2_2, PV1, PV2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Rwcs_rcpp_hello_world", (DL_FUNC) &_Rwcs_rcpp_hello_world, 0},
    {"_Rwcs_Cwcs_s2p", (DL_FUNC) &_Rwcs_Cwcs_s2p, 14},
    {"_Rwcs_Cwcs_p2s", (DL_FUNC) &_Rwcs_Cwcs_p2s, 14},
    {NULL, NULL, 0}
};

RcppExport void R_init_Rwcs(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
