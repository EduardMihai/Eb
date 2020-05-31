cmake_minimum_required(VERSION 3.0.0)
project(MyProject VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(
    say-hello-static STATIC
    static.cpp
    static.h
)
add_library(
    say-hello-shared SHARED
    shared.cpp
    shared.h
)
add_executable(MyProject main.cpp)

target_link_libraries(MyProject PRIVATE say-hello-static)
target_link_libraries(MyProject PRIVATE say-hello-shared)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
