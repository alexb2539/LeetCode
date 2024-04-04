class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> rtn;
        map<int, int> seen;
        int mid;
        for (int i = 0; i < nums.size(); i++) {
            mid = target - nums[i];
            if (seen.contains(mid)){
                rtn.push_back(seen[mid]);
                rtn.push_back(i);
                return rtn;
            }
            seen.insert ( std::pair<int, int>(nums[i], i) );
        }
        return rtn;
    }
};
