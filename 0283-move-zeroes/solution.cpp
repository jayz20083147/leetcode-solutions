class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;

        // Find first zero
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        // No zero found
        if (j == -1)
            return;

        // Move non-zero elements to the left
        for (int i = j + 1; i < nums.size(); i++) {
            if (nums[i] != 0) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;

                j++;
            }
        }
    }
};