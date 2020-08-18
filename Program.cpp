class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        stack<int> s;
        s.push(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(s.top()!=nums[i])
                s.push(nums[i]);
        }
        nums.clear();
        while(!s.empty()){
            int x=s.top();
            s.pop();
            nums.push_back(x);
        }
        reverse(nums.begin(), nums.end());
        return nums.size();
    }
};
