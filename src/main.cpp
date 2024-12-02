#include <iostream>
#include <string>
#include "llama.h"

int main(int argc, char* argv[]) {
    if (argc > 1) {
        llama_model_params model_params = llama_model_default_params();
        llama_model * model = llama_load_model_from_file(argv[1], model_params);
        llama_free_model(model);
    } else {
        std::cout << "Usage: myk-llama <path to gguf file>" << std::endl;
    }

    return 0;
}
