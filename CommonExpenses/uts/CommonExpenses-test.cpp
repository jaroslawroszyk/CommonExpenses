#include "gtest/gtest.h"
#include "../include/CommonExpenses.h"

TEST(blaTest, test1) {
    EXPECT_EQ (Formula::bla (0),  0);
    EXPECT_EQ (Formula::bla (10), 20);
    EXPECT_EQ (Formula::bla (50), 100);
    EXPECT_EQ (Formula::bla (50), 100);
}