
#ifndef GRAPH_H
#define GRAPH_H

#include <stdbool.h>

//Define a type for value of a vertex name

typedef int vertex_name ;


typedef struct neighbour_t {
    vertex_name dest;
    int weight;  
    struct neighbour_t *next;
} neighbour;

//Define a type for a vertex 

typedef struct vertex {
    vertex_name name ;
    neighbour *adj_list ;
} vertex ;

//Define a type for a  graph

typedef struct graph_t {
   bool oriented ;
   bool weighted ;
   int nb_vertex ;
   vertex  *vectrices ;
} graph ;


void graph_new (bool oriented , bool weighted , int nb_vertex , vertex * vectrices) ;

void graph_new_file (FILE file) ;

void graph_nb_vertex (graph* g) ;
#endif