class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int num : nums)
        {
            count[num]++;
        }
        vector<vector<int>> freq(nums.size()+1);
        for(const auto& entry:count)
        {
            freq[entry.second].push_back(entry.first);
        }
        vector<int>result;
        for(int i=freq.size()-1;i>0;i--)
        {
            for(int element :freq[i])
            {
                result.push_back(element);
                if(result.size()==k)
                {
                    return result;
                }
                
            }
        }
return result;
    }
};
