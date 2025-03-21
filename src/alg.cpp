// Copyright 2025 UNN-CS
#include <cstdint>
#include "alg.h"
#include <cmath>
#include <vector>

bool checkPrime(uint64_t value) {
  if (value < 2) return false;
  for (uint64_t i = 2; i <= std::sqrt(value); ++i) {
    if (value % i == 0) return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t count = 0;
  uint64_t num = 2;
  while (count < n) {
    if (checkPrime(num)) {
      ++count;
    }
    ++num;
  }
  return num - 1;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t num = value + 1;
  while (!checkPrime(num)) {
    ++num;
  }
  return num;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; ++i) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}
