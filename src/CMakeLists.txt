# Project.
project(Build-Lisp C)
cmake_minimum_required(VERSION 3.14)

# CMake options.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

add_executable(LispBaby main.c)
target_link_libraries(LispBaby readline)
