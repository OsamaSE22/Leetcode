int removeElement(int* nums, int numsSize, int val) {
    int k = 0;  // Counter for valid elements

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];  // Move valid element to the front
            k++;
        }
    }
    
    // Return the number of valid elements (k)
    return k;
}