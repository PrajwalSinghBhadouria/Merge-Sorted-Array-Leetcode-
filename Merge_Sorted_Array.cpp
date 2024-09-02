class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s1 = nums1.size();
        int i=0,j=0;
        vector<int> v;
        int count=0;
        while(i<m && j<n){
           if(nums1[i]<=nums2[j]){
            v.push_back(nums1[i]);
            i++;count++;
           }
           else{
            v.push_back(nums2[j]);
            j++;count++;
           }
        }
        while(i<m){
            v.push_back(nums1[i]);
            i++;count++;
        }
        while(j<n){
            v.push_back(nums2[j]);
            j++;count++;
        }
        for(int i=0; i<s1; i++){
            nums1[i]=v[i];
        }
        return;
    }
};
