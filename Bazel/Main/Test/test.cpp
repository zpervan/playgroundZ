#define ASIO_STANDALONE

#include "Main/Libraries/awesome_class.h"
#include "json.hpp"
#include "include/fmt/core.h"
#include "include/spdlog/spdlog.h"
#include "asio.hpp"
#include "gtest/gtest.h"

TEST(AwesomeClassTest, GivenTwoNumbers_WhenSumming_TheCorrectValueReturned) {
  AwesomeClass awesome_class;

  const int expected_result{42};
  const int actual_result = awesome_class.SumNumbers(20, 22);

  EXPECT_EQ(expected_result, actual_result);
}

TEST(JsonParserTest, InstatiateNlohmannJsonParser)
{
  nlohmann::json json;
  SUCCEED();
}

TEST(FmtFormatTest, InstatiateFmtFormat)
{
    fmt::print("Hello, World!");
    SUCCEED();
}

TEST(AsioTest, InstatiateAsioLib) {
  const auto *ec = new asio::error_code;

  ASSERT_TRUE(ec);
}

TEST(spdlogTest, InstaitateSpdlog)
{
  spdlog::warn("A message seen as a warning!");

  SUCCEED();
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
