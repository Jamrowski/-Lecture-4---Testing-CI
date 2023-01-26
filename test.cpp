#define CATCH_CONFIG_MAIN
#include <vector>
#include "catch.hpp"
#include "functions_to_implement.cpp"

//Test Case 1: Product
TEST_CASE ( "Product of the vector",  "[product]") {
    std::vector<int> vecProd = {1,2,3,4};
    REQUIRE( Product(vecProd) == 24);
}

//Test Case 2: Sum
TEST_CASE ( "Sum of the vector", "[sum]") {
    std::vector<int> vecSum = {1,2,3,4};
    REQUIRE( Sum(vecSum) == 10);
}

//Test Case 3: NthFibonacci
TEST_CASE ( "nth term of a fibonacci sequence", "[nthFibonacci]") {
    REQUIRE (NthFibonacci(0) == 1);
    REQUIRE (NthFibonacci(1) == 1);
    REQUIRE (NthFibonacci(2) == 2);
    REQUIRE (NthFibonacci(3) == 3);
}