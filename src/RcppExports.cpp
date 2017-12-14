// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_contract_graph
Rcpp::List rcpp_contract_graph(const Rcpp::DataFrame& graph, Rcpp::Nullable <Rcpp::StringVector>& vertlist_in);
RcppExport SEXP _dodgr_rcpp_contract_graph(SEXP graphSEXP, SEXP vertlist_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable <Rcpp::StringVector>& >::type vertlist_in(vertlist_inSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_contract_graph(graph, vertlist_in));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_merge_flows
Rcpp::NumericVector rcpp_merge_flows(Rcpp::DataFrame graph);
RcppExport SEXP _dodgr_rcpp_merge_flows(SEXP graphSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type graph(graphSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_merge_flows(graph));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_component_vector
Rcpp::List rcpp_get_component_vector(const Rcpp::DataFrame& graph);
RcppExport SEXP _dodgr_rcpp_get_component_vector(SEXP graphSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type graph(graphSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_component_vector(graph));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sample_graph
Rcpp::StringVector rcpp_sample_graph(Rcpp::DataFrame graph, unsigned int nverts_to_sample);
RcppExport SEXP _dodgr_rcpp_sample_graph(SEXP graphSEXP, SEXP nverts_to_sampleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nverts_to_sample(nverts_to_sampleSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sample_graph(graph, nverts_to_sample));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_sp_dists_par
Rcpp::NumericMatrix rcpp_get_sp_dists_par(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi, const std::string& heap_type);
RcppExport SEXP _dodgr_rcpp_get_sp_dists_par(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toiSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi(toiSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_sp_dists_par(graph, vert_map_in, fromi, toi, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_sp_dists
Rcpp::NumericMatrix rcpp_get_sp_dists(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi, const std::string& heap_type);
RcppExport SEXP _dodgr_rcpp_get_sp_dists(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toiSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi(toiSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_sp_dists(graph, vert_map_in, fromi, toi, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_paths
Rcpp::List rcpp_get_paths(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi, const std::string& heap_type);
RcppExport SEXP _dodgr_rcpp_get_paths(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toiSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi(toiSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_paths(graph, vert_map_in, fromi, toi, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_flows_aggregate
Rcpp::NumericVector rcpp_flows_aggregate(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi, Rcpp::NumericMatrix flows, std::string heap_type);
RcppExport SEXP _dodgr_rcpp_flows_aggregate(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toiSEXP, SEXP flowsSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi(toiSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type flows(flowsSEXP);
    Rcpp::traits::input_parameter< std::string >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_flows_aggregate(graph, vert_map_in, fromi, toi, flows, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_flows_disperse
Rcpp::NumericVector rcpp_flows_disperse(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, double k, Rcpp::NumericMatrix flows, std::string heap_type);
RcppExport SEXP _dodgr_rcpp_flows_disperse(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP kSEXP, SEXP flowsSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type flows(flowsSEXP);
    Rcpp::traits::input_parameter< std::string >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_flows_disperse(graph, vert_map_in, fromi, k, flows, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_spatial_interaction
Rcpp::NumericMatrix rcpp_spatial_interaction(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector nodes, double k, Rcpp::NumericVector dens, std::string heap_type);
RcppExport SEXP _dodgr_rcpp_spatial_interaction(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP nodesSEXP, SEXP kSEXP, SEXP densSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dens(densSEXP);
    Rcpp::traits::input_parameter< std::string >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_spatial_interaction(graph, vert_map_in, nodes, k, dens, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_one_spatial_interaction
Rcpp::NumericVector rcpp_one_spatial_interaction(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector nodes, double k, size_t i, Rcpp::NumericVector dens, std::string heap_type);
RcppExport SEXP _dodgr_rcpp_one_spatial_interaction(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP nodesSEXP, SEXP kSEXP, SEXP iSEXP, SEXP densSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< size_t >::type i(iSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dens(densSEXP);
    Rcpp::traits::input_parameter< std::string >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_one_spatial_interaction(graph, vert_map_in, nodes, k, i, dens, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sf_as_network
Rcpp::List rcpp_sf_as_network(const Rcpp::List& sf_lines, const Rcpp::DataFrame& pr);
RcppExport SEXP _dodgr_rcpp_sf_as_network(SEXP sf_linesSEXP, SEXP prSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sf_lines(sf_linesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type pr(prSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sf_as_network(sf_lines, pr));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_points_index
Rcpp::IntegerVector rcpp_points_index(const Rcpp::DataFrame& xy, Rcpp::DataFrame& pts);
RcppExport SEXP _dodgr_rcpp_points_index(SEXP xySEXP, SEXP ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type xy(xySEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type pts(ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_points_index(xy, pts));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_points_index_par
Rcpp::IntegerVector rcpp_points_index_par(const Rcpp::DataFrame& xy, Rcpp::DataFrame& pts);
RcppExport SEXP _dodgr_rcpp_points_index_par(SEXP xySEXP, SEXP ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type xy(xySEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type pts(ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_points_index_par(xy, pts));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_aggregate_to_sf
Rcpp::List rcpp_aggregate_to_sf(const Rcpp::DataFrame& graph_full, const Rcpp::DataFrame& graph_contr, const Rcpp::DataFrame& edge_map);
RcppExport SEXP _dodgr_rcpp_aggregate_to_sf(SEXP graph_fullSEXP, SEXP graph_contrSEXP, SEXP edge_mapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type graph_full(graph_fullSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type graph_contr(graph_contrSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type edge_map(edge_mapSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_aggregate_to_sf(graph_full, graph_contr, edge_map));
    return rcpp_result_gen;
END_RCPP
}
