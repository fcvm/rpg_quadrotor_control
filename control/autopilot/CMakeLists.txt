cmake_minimum_required(VERSION 2.8.3)
project(autopilot)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)
add_compile_options(-O3)

find_package(catkin_simple REQUIRED)
catkin_simple(ALL_DEPS_REQUIRED)

#set(GUROBI_INCLUDE_DIRECTORY "/opt/gurobi950/linux64/include")
#include_directories(${GUROBI_INCLUDE_DIRECTORY})
#set(GUROBI_LIB_DIRECTORY "/opt/gurobi950/linux64/lib")
#link_directories(${GUROBI_LIB_DIRECTORY})

cs_add_executable(autopilot
    src/autopilot_node.cpp
)

cs_add_library(autopilot_helper
    src/autopilot_helper.cpp
)

#target_link_libraries(autopilot gurobi_c++ gurobi95)
#target_link_libraries(autopilot_helper gurobi_c++ gurobi95)

cs_install()
cs_export()
