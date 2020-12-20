#include <iostream>
#include "List.h"
#include"Monom.h"
#include"Polynom.h"

int main()
{
    TMonom a(new double[1]{ 3 }, 1, 1);
    TMonom b(new double[1]{ 1 }, 1, 1);
    TPolynomial P1;
    P1 += a;
    P1 += b;
    P1.LoadToFile();
    return 0;
}
