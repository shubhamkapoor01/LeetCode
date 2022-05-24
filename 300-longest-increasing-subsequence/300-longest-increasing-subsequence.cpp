class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> LIS;
        LIS.push_back(nums[0]);
        
        for (int i = 1; i < n; i ++) {
            if (nums[i] > LIS.back()) {
                LIS.push_back(nums[i]);
                continue;
            }
            
            int idx = upper_bound(LIS.begin(), LIS.end(), nums[i]) - LIS.begin();
            
            if (idx < LIS.size()) {
                if (idx == 0 || LIS[idx - 1] < nums[i]) {
                    LIS[idx] = nums[i];
                }
            }
        }
        
        return LIS.size();
    }
};