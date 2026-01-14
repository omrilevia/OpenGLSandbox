#include "Renderer.h"
#include <iostream>

void GLClearErrors() {
    while (glGetError() != GL_NO_ERROR);
}

bool GLCheckError(const char* function, const char* file, int line) {
    while (GLenum error = glGetError()) {
        std::cout << "GL error: " << error << " " << file << ": " << line << std::endl;
        return false;
    }

    return true;
}