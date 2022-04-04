
#include <iostream>

using namespace std;

/**
 * Overloading + operator in order to add complex numbers
 * ex..(3 + 4i) + (4 + 3i) = (7 + 7i)
 */

class Complex {
public:
    int real;
    int img;
    // Default argument constructor
public:
    Complex(int r = 0, int i = 0) {
        real = real;
        this->img = img;
    }

    /**
     * Overload + operator
     * Groups real numbers together & complex numbers together
     *     Returns complex number
     */
    Complex operator+(Complex x) {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;

        return temp;
    }

    //Overloading insertion operator
    friend ostream &operator<<(ostream &out, Complex &c);
};

ostream &operator<<(ostream &out, Complex &c) {
    out << c.real << "+i" << c.img << endl;
    return out;
}

int main() {
    Complex c1, c2, c3;

// First Complex Number
    c1.real = 5;
    c1.img = 3;

// Second Complex Number
    c2.real = 6;
    c2.img = 4;

// Adding Both Complex Numbers
    c3 = c2 + c1;
    cout << c3 << endl;

    return 0;
}
