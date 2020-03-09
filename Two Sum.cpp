class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int i, x ;
        vector<pair<int,int>>v1;
        for( i = 0 ; i < nums.size() ; i++) v1.push_back({nums[i],i});
        sort(v1.begin(),v1.end());
        nums.clear();
        for( i = 0 ; i < v1.size() ; i++) nums.push_back(v1[i].first);
        for( i = 0 ; i <nums.size() ; i++)
        {
            int baki = target - nums[i] ;
            x = lower_bound(nums.begin()+i+1,nums.end(),baki)-nums.begin();
            if(x<nums.size() && nums[x]==baki) return{v1[i].second,v1[x].second};
        }
        return{v1[i].second,v1[x].second};
    }
};
//https://leetcode.com/problems/two-sum/
