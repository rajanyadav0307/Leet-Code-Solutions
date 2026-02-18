class Solution {
public:
    vector<int> getConcatenation(const vector<int>& nums) { // const vector reference avoids unecessary object copy
        const size_t n = nums.size(); // since "n" is const, use of const is preferred
        vector<int> ans(2*n);

        // Instead of using traditional for-loop, use STL algorithms for better efficiency
        copy(nums.begin(), nums.end(), ans.begin());
        copy(nums.begin(), nums.end(), ans.begin() + n);
        return ans;
        
    }
};