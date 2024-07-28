#include "factorial.hpp"

unsigned int Factorial(const unsigned int number) {
  return number > 1 ? Factorial(number - 1) * number : 1;
}
