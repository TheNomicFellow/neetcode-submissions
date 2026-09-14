class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> sol;
        for(int i=0;i<size;i++){
            for(int k=i+1;k<size;k++){
                int sum = nums[i]+nums[k];
                if(sum==target){
                    sol.push_back(i);
                    sol.push_back(k);
                    return sol;
                }
            }
        }
        return sol;
    }
};