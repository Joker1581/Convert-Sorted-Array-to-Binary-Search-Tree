#include <stdio.h>
#include <stdlib.h>
struct Node
{
    /* data */
    int val;
    struct Node *left;
    struct Node *right;
};
struct Node* ConvToBST(int *nums, int beg, int end)
{
    /* data */
    if (end < beg)
        return NULL;
    int mid = (beg + end) / 2;
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    root->val = nums[mid];
    root->left = ConvToBST(nums, beg, mid - 1);
    root->right = ConvToBST(nums, mid + 1, end);
    return root;
};
struct Node* sorted(int* nums, int numsSize)
{
    /* data */
    if(numsSize <= 0)
        return NULL;
    else
        return ConvToBST(nums, 0, numsSize-1);
};

