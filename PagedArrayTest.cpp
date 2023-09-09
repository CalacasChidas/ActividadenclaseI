#include <gtest/gtest.h>
#include "paged-sort.cpp" 

TEST(PagedArrayTest, Constructor) {
    
    PagedArray pagedArray("input.txt", 256);
   
    EXPECT_EQ(pagedArray.getSize(), 100); 
}

TEST(PagedArrayTest, AccessOperator) {
    
    PagedArray pagedArray("input.txt", 256);
    
    EXPECT_EQ(pagedArray[0], 5); 
}

