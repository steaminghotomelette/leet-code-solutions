#include <unordered_map>
#include <vector>

// Time complexity: O(n)
// Space complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create hashmap to keep track of complements
        unordered_map<int, int> complements;

        // Iterate over the input array
        for (int i = 0; i < nums.size(); i++) {
            // Find the complement of the current number with respect to the target
            int complement = target - nums[i];

            // Check if we have already found such a complement in the hashmap
            if (complements.find(complement) != complements.end()) {
                return {complements[complement], i};
            } else {
                complements[nums[i]] = i;
            }
        }

        // Return an empty vector if no solution is found
        return {};
    }
};
