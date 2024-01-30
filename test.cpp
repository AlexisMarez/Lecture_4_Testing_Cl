#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <iostream>
#include <vector>

using namespace std;

TEST_CASE("adding all the numbers in a given vector", "[add]") {
    vector<int> zero {0,0,0,0};
    vector<int> empty;
    vector<int> neg {-1,-2,4,5};
    
    REQUIRE(Sum(zero) == 0);
    REQUIRE(Sum(empty) == 0);
    REQUIRE(Sum(neg) == 6);

}

TEST_CASE("multiplying all the numbers in a given vector", "[mult]") {
    vector<int> zero {0,0,0,0};
    vector<int> empty;
    vector<int> vect1 {1,2,4,5};
    vector<int> vect2 {1,2,0,5};


    REQUIRE(Product(zero) == 0);
    REQUIRE(Product(empty) == -1);
    REQUIRE(Product(vect1) == 40);
    REQUIRE(Product(vect2) == 0);


}

TEST_CASE("adding an integer to each element of a vector", "[addAll]") {
    vector<int> zero {0,0,0,0};
    vector<int> empty;
    vector<int> neg {-1,-2,4,5};
    vector<int> vect1 {0,1,2,3,4};

    vector<int> result1{-1,-1,-1,-1};
    vector<int> result2{};
    vector<int> result3{3,2,8,9};
    vector<int> result4{7,8,9,10,11};

    REQUIRE(VectorPlusN(zero,-1) == result1);
    REQUIRE(VectorPlusN(empty,100) == result2);
    REQUIRE(VectorPlusN(neg,4) == result3);
    REQUIRE(VectorPlusN(vect1, 7) == result4);
}