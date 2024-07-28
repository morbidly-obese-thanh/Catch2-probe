cmake_minimum_required(VERSION 3.28)
project(Catch2_probe CXX)

set(CMAKE_CXX_STANDARD 26)

include(FetchContent)

FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2
    GIT_TAG v3.6.0
)

FetchContent_MakeAvailable(Catch2)

add_executable(main factorial.cc main.cc)

add_executable(tests factorial.cc tests.cc)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
