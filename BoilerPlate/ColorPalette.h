#ifndef COLORPALETTE_H_INCLUDED
#define COLORPALETTE_H_INCLUDED
#include "Color.h"

static class ColorPalette
{
public:
        const Color red = Color(1.0f, 0.0f, 0.0f, 0.0f);
        const Color yellow = Color(1.0f, 1.0f, 0.0f, 0.0f);
        const Color cyan = Color(0.0f, 1.0f, 1.0f, 0.0f);
        const Color gray = Color(0.5f, 0.5f, 0.5f, 0.5f);
        const Color Orange = Color(1.0f, 0.5f, 0.0f, 0.0f);

        ColorPalette();
        ~ColorPalette();
}

#endif // COLORPALETTE_H_INCLUDED
