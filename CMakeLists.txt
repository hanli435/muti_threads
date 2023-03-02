cmake_minimum_required(VERSION 3.23)
project(muti_threads)

set(CMAKE_CXX_STANDARD 14)

add_executable(muti_threads main.cpp function_pointer/fn_p.cpp function_pointer/fn_p.h multi_thread/MT.h multi_thread/MT.cpp)
