#include "gtest/gtest.h"

#include "GameObjects_test.hpp"
#include "BoardManager_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}