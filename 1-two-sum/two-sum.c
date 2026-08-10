/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
# include <stdio.h>
#include <stdlib.h>
int*twoSum(int* nums, int size, int target, int* returnSize) {
    *returnSize=2;
 int *returna =(int*)malloc(2*(sizeof(int)));

    for(int i = 0; i < size; i++) 
    {
        for(int j = i + 1; j < size; j++) 
        {
            if(nums[i] + nums[j] == target) {
            
                returna[0]=i;
                returna[1]=j;
            }
        }
    }
return returna;
}