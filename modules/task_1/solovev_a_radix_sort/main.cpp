// Copyright 2021 Solovev Aleksandr
#include <numeric>
#include <utility>
#include <algorithm>
#include "gtest/gtest.h"
#include "../../../modules/task_1/solovev_a_radix_sort/radix_sort.h"


TEST(Senquential, Test_Only_Positive) {
    const int length = 1000;
    int status = 0;

    std::vector<int> buffer1(length);
    status = generateRandomArray(buffer1.data(), length, 0.0, 1000.0);
    status = RadixSort(buffer1);

    status = SortingCheck(buffer1);

    ASSERT_EQ(status, 0);
}


TEST(Senquential, Test_Only_Negative) {
    const int length = 1000;
    int status = 0;
    std::vector<int> buffer1(length);
    status = generateRandomArray(buffer1.data(), length, -1000.0, -1.0);

    status = RadixSort(buffer1);
    status = SortingCheck(buffer1);

    ASSERT_EQ(status, 0);
}

TEST(Senquential, Test_Small_length) {
    const int length = 100;
    int status = 0;
    std::vector<int> buffer1(length);
    status = generateRandomArray(buffer1.data(), length, -1000.0, 1000.0);

    status = RadixSort(buffer1);

    status = SortingCheck(buffer1);


    ASSERT_EQ(status, 0);
}

TEST(Senquential, Test_Medium_Length) {
    const int length = 1000;
    int status = 0;
    std::vector<int> buffer1(length);
    status = generateRandomArray(buffer1.data(), length,  -1000.0, 1000.0);

    status = RadixSort(buffer1);

    status = SortingCheck(buffer1);


    ASSERT_EQ(status, 0);
}

TEST(Senquential, Test_Large_Length) {
    const int length = 15000;
    int status = 0;
    std::vector<int> buffer1(length);
    status = generateRandomArray(buffer1.data(), length,  -1000.0, 1000.0);

    status = RadixSort(buffer1);

    status = SortingCheck(buffer1);

    ASSERT_EQ(status, 0);
}

TEST(Senquential, Test_Very_Large_Length) {
    const int length = 100000;
    int status = 0;
    std::vector<int> buffer1(length);
    status = generateRandomArray(buffer1.data(), length,  -5000.0, 5000.0);

    status = RadixSort(buffer1);

    status = SortingCheck(buffer1);


    ASSERT_EQ(status, 0);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
