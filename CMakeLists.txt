# Set the minimum CMake version
cmake_minimum_required(VERSION 3.16)

# Define the project
project(myk-llama)

# Add the main executable
add_executable(myk-llama src/main.cpp)

# Add the llama.cpp subdirectory and link the library (if it generates one)
add_subdirectory(llama.cpp)

# Optionally link any library built by llamacpp to the main executable
# (Assuming the llamacpp CMakeLists.txt generates a target named `llamacpp-lib`)
# target_link_libraries(myk-llama PRIVATE llamacpp-lib)
target_link_libraries(myk-llama PRIVATE llama ${CMAKE_THREAD_LIBS_INIT})
