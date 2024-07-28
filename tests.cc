#include "catch2/catch_test_macros.hpp"

#include "factorial.hpp"

TEST_CASE("Factorials are computed for general cases (positive numbers > 0)",
          "[factorial-positive]") {
  REQUIRE(Factorial(1) == 1);
  REQUIRE(Factorial(2) == 2);
  REQUIRE(Factorial(3) == 6);
  REQUIRE(Factorial(10) == 3628800);
}

TEST_CASE("Factorial is computed for edge case Factorial(0)", "[factorial-0]") {
  REQUIRE(Factorial(0) == 1);
}
