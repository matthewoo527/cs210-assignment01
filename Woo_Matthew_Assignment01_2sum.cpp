// Name: Matthew Woo
// Date: Sep 5, 2026
// Class: CS 210
// Professor Dabish

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

pair<int,int> twoSumBruteForce(const vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        for(int j = 0; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {-1, -1}; // no solution found and -1 means can't find it
}

pair<int, int> twoSumHash(const vector<int>& nums, int target) {
    unordered_map<int, int> index;
    for (int i = 0; i < nums.size(); ++i) {
        int needed = target - nums[i];
        if (index.count(needed)) { // count() check if the key exist, if yes return the indices
            return {index[needed], i}; //return two indices from map and current index
        }
        index[nums[i]] = i; // if it is not in the map, put the current key in the current index in the map
    }

    return{-1, -1}; // no solution found

}

//Function to test cases
void test(const vector<int>& nums, int target) { // void don't return anything
    //print the nums and target
    cout << "nums = {";
    for (int i = 0; i < nums.size(); ++i) {
        cout << nums[i];
        if (i < nums.size() - 1) {
            cout << ", ";
        }
    }
    cout << "}\n";
    cout << "Target: " << target << "\n";
    //Test twoSumBruteForce Function from test cases
    cout << "twoSumBruteForce Test:\n";
    //variables that help us easier to read
    pair<int, int> answerBruteForce = twoSumBruteForce(nums, target);
    int bruteForceIndex1 = answerBruteForce.first;
    int bruteForceIndex2 = answerBruteForce.second;
    int bruteForceValue1 = nums[bruteForceIndex1];
    int bruteForceValue2 = nums[bruteForceIndex2];
    //Print the indices and values in that indices
    if(bruteForceIndex1 != -1 && bruteForceIndex2 != -1) {
        cout << "Indices: [" << bruteForceIndex1
             << ", " << bruteForceIndex2 << "]\n";
        cout << "Values: [" << bruteForceValue1
             << ", " << bruteForceValue2 << "]\n";
    }else{
        cout << "No Solution\n";
    }
    //Check if it is valid
    cout << bruteForceValue1 << " + "
         << bruteForceValue2 << " = "
         << target;
    if(bruteForceValue1 != bruteForceValue2 && bruteForceValue1 + bruteForceValue2 == target) {
        cout << "\nThis is valid";
    }else{
        cout << "This is not valid";
    }
    
    cout << "\n\n";
    
    //Test twoSumHash Function from test cases
    cout << "twoSumHash Test:\n";
    //variables that help us easier to read
    pair<int, int> answerHash = twoSumHash(nums, target);
    int hashIndex1 = answerHash.first;
    int hashIndex2 = answerHash.second;
    int hashValue1 = nums[hashIndex1];
    int hashValue2 = nums[hashIndex2];
    //Print the indices and values in that indices
    if(hashIndex1 != -1 && hashIndex2 != -1) {
        cout << "Indices: [" << hashIndex1
             << ", " << hashIndex2 << "]\n";
        cout << "Values: [" << hashValue1
             << ", " << hashValue2 << "]\n";
    }else{
        cout << "No Solution\n";
    }
    //Check if it is valid
    cout << hashValue1 << " + "
         << hashValue2 << " = "
         << target;
    if(hashValue1 != hashValue2 && hashValue1 + hashValue2 == target) {
        cout << "\nThis is valid";
    }else{
        cout << "This is not valid";
    }
    cout << "\n\n\n";
}

//Call function "test" in the main
int main() {
    //Required Test Case
    test({15, 4, 18, 8, 19, 22, 24, 59, 59, 20, 18, 12, 36, 42, 9}, 24);
    //Additional Test Case 1
    test({2, 7, 11, 15}, 9);
    //Additional Test Case 2
    test({1, 4, 6, 7, 11, 60}, 61);
    //Additional Test Case 3
    test({2, 4, 6, 10, 20, 24, 26, 50, 30}, 50);
    //Additional Test Case 4
    test({1, 12, 10, 11, 13, 17, 18, 20, 29}, 30);
    //Additional Test Case 5
    test({0, 10, 80, 60, 50, 30, 90, 100, 20}, 100);
}