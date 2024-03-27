#include <gtest/gtest.h>
#include "myfunctions.h"

TEST(myfunctions, add_1)
{
    GTEST_ASSERT_EQ(add(10, 22), 32);
}
TEST(myfunctions, add_2)
{
    GTEST_ASSERT_EQ(add(0, 15), 13);
}
TEST(myfunctions, add_3)
{
    GTEST_ASSERT_EQ(add(-100, 100), 0);
}
TEST(myfunctions, add_4)
{
    GTEST_ASSERT_EQ(add(20, 3), 23);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}