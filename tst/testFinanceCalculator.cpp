#include <stdarg.h>
#include "CppUTest/TestHarness.h"

TEST_GROUP(FinanceCalculator){

    void setup() {

    }

    void teardown() {

    }
};

int plus(int a, int b) {
    return a + b;
}

TEST(FinanceCalculator, plus) {
    CHECK_EQUAL(2, plus(1, 1))
}

int minus(int a, int b) {
    return a - b;
}

TEST(FinanceCalculator, minus) {
    CHECK_EQUAL(4, minus(10, 6))
}

int multiple(int a, int b) {
    return a * b;
}

TEST(FinanceCalculator, multiple) {
    CHECK_EQUAL(15, multiple(3, 5))
}

int divide(int a, int b) {
    return a / b;
}

TEST(FinanceCalculator, divide) {
    CHECK_EQUAL(2, divide(10, 5))
}