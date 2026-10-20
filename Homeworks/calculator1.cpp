#include <iostream>
#include <cassert>
int Summ(int first_number, int second_number) {
  return first_number + second_number;
}

double Summ(double first_number, double second_number) {
  return first_number + second_number;
}

int Subtract(int first_number, int second_number) {
  return first_number - second_number;
}

double Subtract(double first_number, double second_number) {
  return first_number - second_number;
}

int Multiply(int first_number, int second_number) {
  return first_number * second_number;
}

double Multiply(double first_number, double second_number) {
  return first_number * second_number;
}

int DivideInt(int first_number, int second_number) {
  return first_number / second_number;
}

int CountRemainder(int first_number, int second_number) {
  return first_number % second_number;
}

double DivideNormally(double first_number, double second_number) {
  return first_number / second_number;
}

int main() {
  int test_num1 = 5;
  int test_num2 = 7;

  assert(Summ(test_num1, test_num2) == 12);
  assert(Subtract(test_num1, test_num2) == -2);
  assert(Multiply(test_num1, test_num2) == 35);

  int test_dividend = 5;
  int test_divisor = 2;

  assert(DivideInt(test_dividend, test_divisor) == 2);
  assert(CountRemainder(test_dividend, test_divisor) == 1);

  double test_real_num1 = 5.0;
  double test_real_num2 = 2.0;

  assert(Summ(test_real_num1, test_real_num2) == 7.0);
  assert(DivideNormally(test_real_num1, test_real_num2) == 2.5);

  std::cout << "Successfully tested, no mistakes were found!" << '\n';

  return 0;
}
