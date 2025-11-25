cmake_minimum_required(VERSION 3.16)
include($ENV{IDF_PATH}/tools/cmake/project.cmake)

project(hello_world)

# Tell ESP-IDF about the main component
idf_component_register(
    SRCS "main/main.c"
    INCLUDE_DIRS "main"
)
