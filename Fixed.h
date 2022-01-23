//
// Created by andrey on 21.01.2022.
//

#ifndef MY_FIRST_ORTHODOX_CLASS_FIXED_H
#define MY_FIRST_ORTHODOX_CLASS_FIXED_H
class Fixe{
private:
    int fixedPoint;
    static const int raw = 8;
public:
    Fixe();
    Fixe(const Fixe &f);
    ~Fixe();
    Fixe & operator = (const Fixe &f);
    int getRawBits() const;
    void setRawBits(int const raw);
};
#endif //MY_FIRST_ORTHODOX_CLASS_FIXED_H
