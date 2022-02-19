cmake_minimum_required(VERSION 3.10.0)

project(cmake_tutorials)

add_subdirectory(Adder)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC ${PROJECT_NAME}_Adder)

target_include_directories(${PROJECT_NAME} PUBLIC Adder)

target_link_directories(${PROJECT_NAME} PUBLIC Adder)