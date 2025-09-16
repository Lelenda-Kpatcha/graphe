cmake_minimum_required(VERSION 3.0)

project(C)


set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -Wall ")

### library tsp
add_library(graph graph.c)

### main
add_executable(main main.c)
target_link_libraries(main graph)

