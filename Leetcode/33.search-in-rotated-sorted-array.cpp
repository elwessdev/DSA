/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target) return mid;
            // check in the left half
            if(nums[mid]>=nums[l]){
                if(target>=nums[l]&&target<=nums[mid]) r=mid-1;
                else l=mid+1;
            } 
            // Otherwise check in the right half
            else {
                if(target<=nums[r]&&target>=nums[mid]) l=mid+1;
                else r=mid-1;
            }
        }
        return -1;
    }
};
// @lc code=end

