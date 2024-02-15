class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    int mintargetsum,cursum,dist = INT_MAX;int n = size(nums)-2;//current sum and nums size declare 
    sort(nums.begin(), nums.end());//sorting the vector from 1st endex till end 
    for (int i = 0; i < n; i++) {//iterating till nums length
        if (i && nums[i - 1] == nums[i])continue;//nums 
        cursum = nums[i] + nums[i + 1] + nums[i + 2];//Nums sum calculation
        if (cursum >= target) {//calculating sum to the target sum 
            if (cursum - target < dist) {mintargetsum = cursum;dist = cursum - target;}break;}
        cursum = nums[i] + nums[n] + nums[n +1];//current sum to nums's size
        if (cursum <= target) {//current sum and target sum 
            if (target - cursum < dist) {mintargetsum = cursum;dist = target - cursum;}
            continue;}
        int l = i + 1, r = n + 1;//left and right pointers declare
        while (l < r) {//iteraitng both left and right pointer
            cursum = nums[i] + nums[r] + nums[l];//current sum caluclation with left tand right sum 
            if (cursum == target) {return target;}//printing target when current sum and target both equal
            if (cursum < target) {l++;}//incrementing left pointer 
            else {r--;}//right pointer decrement
            if (abs(cursum - target) < dist) {mintargetsum = cursum;dist = abs(cursum - target);}//cacluclating estimated value of diffenrence (sum and target) 
        }}return mintargetsum;}};//printing the resultant sum
