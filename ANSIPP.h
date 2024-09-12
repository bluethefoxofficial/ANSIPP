//made by bluethefoxofficial at enclica interactive 2024
// This is a simple header-only library for using ANSI escape codes in C++.
// It provides a simple interface for setting text colors, background colors, and text styles.
// The library is designed to be simple and easy to use, and it does not require any external dependencies.
// The library is released under the MIT license, so feel free to use it in your own projects.
// THIS ISNT FULLY TESTED AT ALL. USE AT YOUR OWN RISK. I AM NOT RESPONSIBLE FOR ANY DAMAGE CAUSED BY THIS CODE.
#ifndef ANSIPP_H
#define ANSIPP_H

#include <string>

namespace ANSIPP {

    // Enum for basic colors and extended color range
    enum class Color {
        RESET = 0,
        BLACK = 30,
        RED = 31,
        GREEN = 32,
        YELLOW = 33,
        BLUE = 34,
        MAGENTA = 35,
        CYAN = 36,
        WHITE = 37,
        BRIGHT_BLACK = 90,
        BRIGHT_RED = 91,
        BRIGHT_GREEN = 92,
        BRIGHT_YELLOW = 93,
        BRIGHT_BLUE = 94,
        BRIGHT_MAGENTA = 95,
        BRIGHT_CYAN = 96,
        BRIGHT_WHITE = 97
    };

    enum class Style {
        RESET = 0,
        BOLD = 1,
        UNDERLINE = 4,
        REVERSED = 7,
        BOLD_OFF = 21,
        UNDERLINE_OFF = 24,
        REVERSED_OFF = 27
    };

    class ANSI {
    public:
        // Method for setting the basic 8 foreground colors
        static std::string setForeground(Color color) {
            return "\033[" + std::to_string(static_cast<int>(color)) + "m";
        }

        // Method for setting the basic 8 background colors
        static std::string setBackground(Color color) {
            return "\033[" + std::to_string(static_cast<int>(color) + 10) + "m";
        }

        // Method for setting 256-color foreground (8-bit color)
        static std::string setForeground256(int colorCode) {
            return "\033[38;5;" + std::to_string(colorCode) + "m";
        }

        // Method for setting 256-color background (8-bit color)
        static std::string setBackground256(int colorCode) {
            return "\033[48;5;" + std::to_string(colorCode) + "m";
        }

        // Method for applying text styles (bold, underline, etc.)
        static std::string setStyle(Style style) {
            return "\033[" + std::to_string(static_cast<int>(style)) + "m";
        }

        // Reset all styles and colors
        static std::string reset() {
            return "\033[0m";
        }
    };

} // namespace ANSIPP

#endif // ANSIPP_H
