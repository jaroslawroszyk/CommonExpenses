cmake_minimum_required(VERSION 3.22)
project(CommonExpenses)

set(CMAKE_CXX_STANDARD 20)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories(src)

add_subdirectory(src)
add_subdirectory(uts)
