#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a map to store the number and its index
        map<int, int> mpp;

        int n = nums.size();

        // Loop through each element in the array
        for (int i = 0; i < n; i++) {
            int current = nums[i];
            int moreNeeded = target - current;

            // Check if the required pair (moreNeeded) already exists in the map
            if (mpp.find(moreNeeded) != mpp.end()) {
                // If found, return the indices of both numbers
                return {mpp[moreNeeded], i};
            }

            // Otherwise, store the current number with its index in the map
            mpp[current] = i;
        }

        // If no pair is found, return {-1, -1} as an indication
        return {-1, -1};
    }
};

int main() {
    Solution sol;
    // Example test case
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    // Additional test cases can be added here
    return 0;
}
