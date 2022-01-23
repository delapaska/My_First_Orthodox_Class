//
// Created by andrey on 21.01.2022.
//

#include <iostream>
#include "Fixed.h"
Fixe::Fixe() {
    fixedPoint = 0;
    std::cout << "Default constructor called"<< std::endl;
}
Fixe::Fixe(const Fixe &f) {
    std::cout << "Copy constructor called"<<std::endl;
}
Fixe::~Fixe() {
    std::cout << "Destructor called"<<std::endl;
}

Fixe &Fixe::operator=(const Fixe &f) {
    std:: cout << "Assignation operator called" << std::endl;
    return *this;
}

int Fixe::getRawBits() const {
    std::cout << "getRawBits member function called"<< std::endl;
    return fixedPoint;
}
void Fixe::setRawBits(int const raw) {
    fixedPoint = raw;
}





