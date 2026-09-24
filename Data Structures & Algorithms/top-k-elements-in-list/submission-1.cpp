class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> sol;
        for(int i:nums){
            mp[i]++;
        }
        priority_queue<pair<int, int>> pq;
        for (auto x : mp) {
            pq.push({x.second, x.first});
        }

        for(int i = 0; i < k; i++){
            sol.push_back(pq.top().second);
            pq.pop();
        }
        return sol;
    }
};
