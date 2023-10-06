// test_calculator.cpp

#include <gtest/gtest.h>
#include "calculator.cpp" // include the implementation file for testing

TEST(CalculatorTest, Add) {
    Calculator calc;
    EXPECT_EQ(calc.add(2, 3), 5); // 2 + 3 should be 5
    EXPECT_EQ(calc.add(-1, 1), 0); // -1 + 1 should be 0
    EXPECT_EQ(calc.add(0, 0), 0); // 0 + 0 should be 0
}

TEST(CalculatorTest, Subtract) {
    Calculator calc;
    EXPECT_EQ(calc.subtract(5, 3), 2); // 5 - 3 should be 2
    EXPECT_EQ(calc.subtract(-1, -1), 0); // -1 - (-1) should be 0
    EXPECT_EQ(calc.subtract(0, 0), 0); // 0 - 0 should be 0
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
