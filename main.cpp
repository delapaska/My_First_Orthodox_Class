#include <iostream>
#include "Fixed.h"
int main() {
    Fixe A;
    Fixe B(A);
    Fixe C;

    C = B;

    std::cout << A.getRawBits() << std::endl;
    std::cout << B.getRawBits() << std::endl;
    std::cout << C.getRawBits() << std::endl;
}
