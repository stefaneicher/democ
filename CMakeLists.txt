cmake_minimum_required(VERSION 3.17)

project(democ)

set(CMAKE_C_STANDARD 99)

add_library(libA library.c library.h)
add_executable(client client.c)

target_link_libraries(client libA)