class Solution {
public:
    
    long long int mySqrt(int x) {
       int s=0,e=x;
        long long int mid=s+(e-s)/2;
      long long int sqrt=-1;
        while(s<=e){
              long long int sq=mid*mid;
            if (sq==x){
                sqrt=mid;
            }
         
            if(sq>x){
                e=mid-1;
            }
                else {
                sqrt=mid;
                s=mid+1;
                
            }
            mid=s+(e-s)/2;
            
        }
        return sqrt;
    }
};