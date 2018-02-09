#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED
#include <GL/glew.h>
#include <SDL2/SDL_opengl.h>

static class Color
{
    public:
        GLfloat redValue, greenValue, blueValue, alphaValue;

        Color();
        Color(GLfloat newRedValue, GLfloat newGreenValue, GLfloat newBlueValue, GLfloat newAlphaValue);
        ~Color();
};


#endif // COLOR_H_INCLUDED
