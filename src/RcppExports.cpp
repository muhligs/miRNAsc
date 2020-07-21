// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// signC
double signC(double x);
RcppExport SEXP _miReact_signC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(signC(x));
    return rcpp_result_gen;
END_RCPP
}
// absC
double absC(double x);
RcppExport SEXP _miReact_absC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(absC(x));
    return rcpp_result_gen;
END_RCPP
}
// pmax_arma
arma::vec pmax_arma(arma::vec x, double bound);
RcppExport SEXP _miReact_pmax_arma(SEXP xSEXP, SEXP boundSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type bound(boundSEXP);
    rcpp_result_gen = Rcpp::wrap(pmax_arma(x, bound));
    return rcpp_result_gen;
END_RCPP
}
// wcmod_basic
double wcmod_basic(const arma::vec p, const arma::vec n, const double alpha);
RcppExport SEXP _miReact_wcmod_basic(SEXP pSEXP, SEXP nSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(wcmod_basic(p, n, alpha));
    return rcpp_result_gen;
END_RCPP
}
// wcmod_basic2
arma::vec wcmod_basic2(const arma::uvec idx, const arma::mat p, const arma::mat n, const double alpha);
RcppExport SEXP _miReact_wcmod_basic2(SEXP idxSEXP, SEXP pSEXP, SEXP nSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(wcmod_basic2(idx, p, n, alpha));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_miReact_signC", (DL_FUNC) &_miReact_signC, 1},
    {"_miReact_absC", (DL_FUNC) &_miReact_absC, 1},
    {"_miReact_pmax_arma", (DL_FUNC) &_miReact_pmax_arma, 2},
    {"_miReact_wcmod_basic", (DL_FUNC) &_miReact_wcmod_basic, 3},
    {"_miReact_wcmod_basic2", (DL_FUNC) &_miReact_wcmod_basic2, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_miReact(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
