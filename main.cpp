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
    void setRed(int value);
    void setGreen(int value);
    void setBlue(int value);
    int getRed() const;
    int getGreen() const;
    int getBlue() const;
    void print() const;
};

int main() {
    // make three Color objects
    Color crimson;
    crimson.setRed(220);
    crimson.setGreen(20);
    crimson.setBlue(60);

    Color forest;
    forest.setRed(34);
    forest.setGreen(139);
    forest.setBlue(34);

    Color ocean;
    ocean.setRed(30);
    ocean.setGreen(144);
    ocean.setBlue(255);

    // print each object in a small rgb table
    cout << left << setw(12) << "Color"
         << right << setw(5) << "Red" << setw(7) << "Green"
         << setw(6) << "Blue" << endl;
    cout << "------------------------------" << endl;

    cout << left << setw(12) << "Crimson" << right;
    crimson.print();
    cout << left << setw(12) << "Forest" << right;
    forest.print();
    cout << left << setw(12) << "Ocean" << right;
    ocean.print();

    return 0;
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
