// COMSC-200 | Lab 14
#include <iostream>
#include <iomanip>
using namespace std;

class Color {
private:
    // rgb values for one color
    int red;
    int green;
    int blue;

public:
    Color();
    Color(int redValue, int greenValue, int blueValue);
    Color(int redValue, int greenValue);
    void setRed(int value);
    void setGreen(int value);
    void setBlue(int value);
    int getRed() const;
    int getGreen() const;
    int getBlue() const;
    void print() const;
};

int main() {
    // make Color objects with each constructor type
    Color defaultColor;
    Color crimson(220, 20, 60);
    Color forest(34, 139);

    // print each object in a small rgb table
    cout << left << setw(12) << "Color"
         << right << setw(5) << "Red" << setw(7) << "Green"
         << setw(6) << "Blue" << endl;
    cout << "------------------------------" << endl;

    cout << left << setw(12) << "Default" << right;
    defaultColor.print();
    cout << left << setw(12) << "Full rgb" << right;
    crimson.print();
    cout << left << setw(12) << "Partial rg" << right;
    forest.print();

    return 0;
}

Color::Color() {
    red = 0;
    green = 0;
    blue = 0;
}

Color::Color(int redValue, int greenValue, int blueValue) {
    red = redValue;
    green = greenValue;
    blue = blueValue;
}

Color::Color(int redValue, int greenValue) {
    red = redValue;
    green = greenValue;
    blue = 0;
}

void Color::setRed(int value) {
    red = value;
}

void Color::setGreen(int value) {
    green = value;
}

void Color::setBlue(int value) {
    blue = value;
}

int Color::getRed() const {
    return red;
}

int Color::getGreen() const {
    return green;
}

int Color::getBlue() const {
    return blue;
}

void Color::print() const {
    // print one color's rgb values in columns
    cout << setw(5) << getRed()
         << setw(7) << getGreen()
         << setw(6) << getBlue() << endl;
}
