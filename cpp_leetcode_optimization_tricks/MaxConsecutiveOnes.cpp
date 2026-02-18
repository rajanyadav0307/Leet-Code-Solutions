class Solution {
public:
    int findMaxConsecutiveOnes(const vector<int>& nums) {
        int localMaxima = 0;
        int globalMaxima = 0;
        for(int const binaryDigit: nums)
        {
            if(binaryDigit == 0)
                localMaxima = 0;
            else
            {
                ++localMaxima;
                globalMaxima = std::max(localMaxima, globalMaxima);
            }
        }
        return globalMaxima;
    }
};