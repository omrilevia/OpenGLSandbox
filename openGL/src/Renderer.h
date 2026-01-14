#pragma once

#include <GL/glew.h>


#define ASSERT(x) if (!(x)) __debugbreak();
#define GLCall(x) GLClearErrors(); x; ASSERT(GLCheckError(#x, __FILE__, __LINE__))

void GLClearErrors(); 

bool GLCheckError(const char* function, const char* file, int line); 