% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/fund-cycles.R
\name{dodgr_sflines_to_poly}
\alias{dodgr_sflines_to_poly}
\title{dodgr_sflines_to_poly}
\usage{
dodgr_sflines_to_poly(sflines, graph_max_size = 10000, expand = 0.05)
}
\arguments{
\item{sflines}{An \pkg{sf} \code{LINESTRING} object representing a network.}

\item{graph_max_size}{Maximum size submitted to the internal C++ routines as
a single chunk. Warning: Increasing this may lead to computer meltdown!}

\item{expand}{For large graphs which must be broken into chunks, this factor
determines the relative overlap between chunks to ensure all cycles are
captured. (This value should only need to be modified in special cases.)}
}
\value{
An \code{sf::sfc} collection of \code{POLYGON} objects.
}
\description{
Convert \pkg{sf} \code{LINESTRING} objects to \code{POLYGON} objects representing all
fundamental cycles within the \code{LINESTRING} objects.
}
