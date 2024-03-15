class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1, revm = 1;
        int n = nums.size();
        vector <int> ans (n, 1);
        for (int i = n - 1, j = 0; i >= 0; i--, j++){
            ans[i] *= mul;
            ans[j] *= revm;
            revm *= nums[j];
            mul *= nums[i];
        }
        return ans;
    }
};