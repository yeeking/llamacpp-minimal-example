# Minimal example of using llama cpp from a cpp file

I am working on a C++ project that integrates llamacpp as a runtime for language models. 

I wanted an absolutely minimal example of a CMake project that links against llamacpp and loads a model from a GGUF file.

This is it!

To use it:

```
# clone this project
git clone git@github.com:yeeking/llamacpp-minimal-example.git

# cd into the project folder
git clone git@github.com:ggerganov/llama.cpp.git

# generate the project
cmake -B build .

# build
cmake --build --config Debug build  -j 10 # number of threads to use

# run
./build/myk-llama

```


