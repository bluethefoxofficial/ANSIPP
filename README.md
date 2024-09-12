
# ANSIPP

ANSIPP is a lightweight C++ library that provides support for ANSI escape codes, enabling easy control over terminal text colors and styles. It includes full support for the 256-color ANSI spectrum.

## Features

- Supports basic 8-color and 16-color ANSI text styling
- Full 256-color ANSI foreground and background support
- Supports text styles such as bold, underline, and reversed
- Easy to integrate and use in terminal-based C++ applications

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
  - [Basic Colors](#basic-colors)
  - [256-Color Spectrum](#256-color-spectrum)
  - [Text Styles](#text-styles)
- [Examples](#examples)

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/bluethefoxofficial/ANSIPP.git
   ```

2. Include the `ANSIPP.h` header file in your C++ project.

3. Compile your project with any standard C++ compiler.

## Usage

### Basic Colors

To apply basic 8-color or 16-color ANSI codes, use the `setForeground` and `setBackground` functions. These functions support the standard color enums.

```cpp
#include "ANSIPP.h"

// Set text to bold red
std::cout << ANSIPP::ANSI::setStyle(ANSIPP::Style::BOLD)
          << ANSIPP::ANSI::setForeground(ANSIPP::Color::RED)
          << "Bold red text" << ANSIPP::ANSI::reset() << std::endl;
```

### 256-Color Spectrum

To apply any of the 256 ANSI colors, use `setForeground256` and `setBackground256` and pass the color code.

```cpp
// Set foreground to blue (color code 21) and background to green (color code 46)
std::cout << ANSIPP::ANSI::setForeground256(21)
          << ANSIPP::ANSI::setBackground256(46)
          << "Blue text on a green background!" << ANSIPP::ANSI::reset() << std::endl;
```

### Text Styles

Apply various text styles like bold, underline, or reversed.

```cpp
// Apply bold text
std::cout << ANSIPP::ANSI::setStyle(ANSIPP::Style::BOLD)
          << "Bold text!" << ANSIPP::ANSI::reset() << std::endl;

// Apply underlined text
std::cout << ANSIPP::ANSI::setStyle(ANSIPP::Style::UNDERLINE)
          << "Underlined text!" << ANSIPP::ANSI::reset() << std::endl;
```

## Examples

### Basic Color Example

```cpp
#include "ANSIPP.h"
#include <iostream>

int main() {
    std::cout << ANSIPP::ANSI::setForeground(ANSIPP::Color::RED)
              << "This is red text." << ANSIPP::ANSI::reset() << std::endl;

    std::cout << ANSIPP::ANSI::setBackground(ANSIPP::Color::YELLOW)
              << ANSIPP::setForeground(ANSIPP::Color::BLUE)
              << "This is blue text on a yellow background." << ANSIPP::ANSI::reset() << std::endl;

    return 0;
}
```

### 256-Color Spectrum Example

```cpp
#include "ANSIPP.h"
#include <iostream>

int main() {
    std::cout << ANSIPP::ANSI::setForeground256(196)  // Bright red
              << "This is bright red text (color code 196)." << ANSIPP::ANSI::reset() << std::endl;

    std::cout << ANSIPP::ANSI::setForeground256(82)   // Bright green
              << "This is bright green text (color code 82)." << ANSIPP::ANSI::reset() << std::endl;

    std::cout << ANSIPP::ANSI::setBackground256(240)  // Dark gray
              << "Text with a dark gray background (color code 240)." << ANSIPP::ANSI::reset() << std::endl;

    return 0;
}
```

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
