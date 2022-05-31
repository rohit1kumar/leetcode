class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int ans;
        int start = 0;
        int end = letters.size()-1;
        while(start < end){
            int mid = start + (end - start)/2;
            if(letters[mid] <= target){
                start = mid+1;
            }else{
                end = mid;
            }
        }
        
        if(letters[start] > target){
            ans=letters[start];
        }else{
            ans=letters[0];
        }
        
        return ans;
         
    }
    
    
};