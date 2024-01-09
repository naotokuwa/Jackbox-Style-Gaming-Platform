#include <gtest/gtest.h>

TEST(HelloTest, BasicAssertions) {
  EXPECT_STRNE("hello", "world");
  EXPECT_EQ(7 * 6, 42);
}

TEST(HelloTest, BasicFailedAssertions) {
  EXPECT_EQ(7 * 6, 43);
}