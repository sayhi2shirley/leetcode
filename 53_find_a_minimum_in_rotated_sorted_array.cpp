class Solution {
public:
    int findMin(vector<int>& nums) {       
        if (nums.size() < 1 || nums.size() > 5000) {
            return 0;
        }
        
        int end = nums.size()-1;
        for (int i = 0; i < end; i++) {
            if (nums[i] < -5000 || nums[i] > 5000) {
                return 0;
            }
        }
        
        int start = 0;
        int mid = 0;
        while (start < end) {
           if (nums[start] < nums[end]) {
               //cout << "return start " << start  << " end " << end<< endl;
               return nums[start];
           }
           mid = (end + start)/2;
           int midEle = nums[mid];
           //cout << "midEle " << midEle << endl;
           if (nums[mid] < nums[end]) {
               end = mid;
           } else {
               start = mid+1;
           }
             
           //cout << "loop start " << start  << " end " << end<< endl;
        }
        return nums[start];
    }
};
