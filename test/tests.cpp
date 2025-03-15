// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(CheckPrimeTest, HandlesZeroAndOne) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTest, HandlesSmallPrimes) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
}

TEST(CheckPrimeTest, HandlesNonPrimes) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(9));
  EXPECT_FALSE(checkPrime(15));
}

TEST(NPrimeTest, FindsFirstPrime) {
  EXPECT_EQ(nPrime(1), 2);
}

TEST(NPrimeTest, FindsTenthPrime) {
  EXPECT_EQ(nPrime(10), 29);
}

TEST(NPrimeTest, FindsHundredthPrime) {
  EXPECT_EQ(nPrime(100), 541);
}

TEST(NextPrimeTest, FindsNextAfterTwo) {
  EXPECT_EQ(nextPrime(2), 3);
}

TEST(NextPrimeTest, FindsNextAfterTen) {
  EXPECT_EQ(nextPrime(10), 11);
}

TEST(NextPrimeTest, FindsNextAfterLargeNumber) {
  EXPECT_EQ(nextPrime(1000), 1009);
}

TEST(SumPrimeTest, SumPrimesBelowTen) {
  EXPECT_EQ(sumPrime(10), 17);
}

TEST(SumPrimeTest, SumPrimesBelowTwenty) {
  EXPECT_EQ(sumPrime(20), 77);
}

TEST(SumPrimeTest, SumPrimesBelowHundred) {
  EXPECT_EQ(sumPrime(100), 1060);
}
