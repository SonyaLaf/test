#include "pch.h"
#include <vector>

std::vector<int> function(std::vector<int> vec, int n);

std::vector<int> function(std::vector<int> vec, int n) {
    for (int i = 0; i < vec.size(); i++) {
        vec[i] += n;
    }
    return vec;
}

std::vector<int> vec = { 1, 2, 3, 4, 5 };
std::vector<int> newVec = {2, 3, 4, 5, 6};
int n = 1;

TEST(TestCaseName, TestName) {
  vec = function(vec, n);
  EXPECT_EQ(vec, newVec);
}