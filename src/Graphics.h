// Copyright 2018 Krystian Stasiowski

#pragma once
#include <windows.h>
#include <string>
#include <iostream>

namespace graphics
{
  enum class Color
  {
    BLACK = 0,
    BLUE = 1,
    GREEN = 2,
    AQUA = 3,
    RED = 4,
    PURPLE = 5,
    YELLOW = 6,
    WHITE = 7,
    GRAY = 8,
    LIGHT_BLUE = 9,
    LIGHT_GREEN = 10,
    LIGHT_AQUA = 11,
    LIGHT_RED = 12,
    LIGHT_PURPLE = 13,
    LIGHT_YELLOW = 14,
    BRIGHT_WHITE = 15
  };

  void DrawPixelAt(short x, short y, Color color);
}