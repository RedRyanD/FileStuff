cmake_minimum_required(VERSION 3.16.0)  
project(project)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC inc)
target_sources(${PROJECT_NAME} PUBLIC src/src.cpp)
