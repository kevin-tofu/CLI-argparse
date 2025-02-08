cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
    CLI11
    GIT_REPOSITORY https://github.com/CLIUtils/CLI11.git
    GIT_TAG        v2.3.2
)
FetchContent_MakeAvailable(CLI11)

add_executable(my_project src/main.cpp)
target_link_libraries(my_project PRIVATE CLI11)