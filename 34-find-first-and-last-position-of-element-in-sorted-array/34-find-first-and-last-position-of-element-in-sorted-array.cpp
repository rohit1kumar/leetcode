class Solution {
public:
    //for finding first occurance of number
    int firstOcc(vector<int>& nums, int target){
        int s=0,e=nums.size()-1;
        int m=s+(e-s)/2,ans=-1;
        
        while(s<=e){
            if(nums[m]==target){
                ans=m;
                e=m-1;
            }else if(nums[m]>target){
                e=m-1;
            }else{
                s=m+1;
            }
           m=s+(e-s)/2;
        }
        return ans;
    }
    //for finding last occurance of number
    int lastOcc(vector<int>& nums, int target){
        int s=0,e=nums.size()-1;
        int m=s+(e-s)/2,ans=-1;
        while(s<=e){
            if(nums[m]==target){
                ans=m;
                s=m+1;
            }else if(nums[m]>target){
                e=m-1;
            }else{
                s=m+1;
            }
           m=s+(e-s)/2;
        }
        return ans;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr;
        int first=firstOcc(nums,target);
            arr.push_back(first);
        int last=lastOcc(nums,target);
            arr.push_back(last);
        return arr;   
    }
};