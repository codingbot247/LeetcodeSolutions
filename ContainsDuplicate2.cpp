bool containsDuplicate(vector<int>& nums) {
       int s=nums.size();
       sort(nums.begin(), nums.end());
        for(int i=0; i<s-1; i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
          }
         return false;
        }
