#include "../Libraries/awesome_class.h"

#include "gtest/gtest.h"

TEST(AwesomeClassTest, GivenTwoNumbers_WhenSumming_TheCorrectValueReturned) {
  AwesomeClass awesome_class;

  const int expected_result{42};
  const int actual_result = awesome_class.SumNumbers(20, 22);

  EXPECT_EQ(expected_result, actual_result);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}