#include <iostream>
#include <cassert>

int summa(int a, int b) {
    return a + b;
}

double summa(double a, double b) {
    return a + b;
}

int raznost(int a, int b) {
    return a - b;
}

double raznost(double a, double b) {
    return a - b;
}

int umnojit(int a, int b) {
    return a * b;
}

double umnojit(double a, double b) {
    return a * b;
}

int Delitnatselo(int a, int b) {
    return a / b;
}

int ostatok(int a, int b) {
    return a % b;
}

double delitprosto(double a, double b) {
    return a / b;
}

int main() {
    int a = 5;
    int b = 7;
    assert(summa(a, b) == 12);
    assert(raznost(a, b) == -2);
    assert(umnojit(a, b) == 35);
    int c = 5;
    int d = 2;
    assert(Delitnatselo(c, d) == 2);
    assert(ostatok(c, d) == 1);


    double x = 5.0;
    double y = 2.0;

    assert(summa(x, y) == 7.0);
    assert(delitprosto(x, y) == 2.5);

    std::cout << "testi proydeni" << '\n';

    return 0;
}
