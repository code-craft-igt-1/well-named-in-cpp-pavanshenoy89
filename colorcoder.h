#pragma once
#include<iostream>
#include <string>

namespace TelCoColorCoder
{
    enum class MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum class MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    extern const char* MajorColorNames[];
    extern int numberOfMajorColors;
    extern const char* MinorColorNames[];
    extern int numberOfMinorColors;

    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            MajorColor getMajor() const;
            MinorColor getMinor() const;
            std::string ToString() const;
    };

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    void PrintReferenceManual();
}
