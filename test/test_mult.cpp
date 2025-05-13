#include <gtest/gtest.h>
#include "mult.h"

TEST(MultTest, HandlesPositiveInput)
{
    int result = sub(4, 5);

    EXPECT_EQ(result, 20);
}