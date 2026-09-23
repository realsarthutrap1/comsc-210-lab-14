// COMSC-200 | Lab 14
#include <iostream>
using namespace std;

class Color {
private:
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
    return 0;
}
