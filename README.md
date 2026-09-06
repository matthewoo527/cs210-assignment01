# cs210-assignment01
_Woo_Matthew_Assignment01_
## Explanation:
twoSumBruteForce() find the two indices of the values that can add up to the target by going through each value and checking it with the values after it. For example, {2, 7, 11, 15} and target = 9, i = 0 and it runs through each one after it to see if they add up to the target.

twoSumHash() find the two indices of the values that can add up to the target by looking at the target and the current value and seeing what it needs. If it is not found, then put the current number as the key and the current index as the value in the map. In the next index, find a new needed by subtracting the target and the current nums[i] value. If needed is in the map, then return the current index and the index stored in the map.

## Test/output evidence:
nums = {15, 4, 18, 8, 19, 22, 24, 59, 59, 20, 18, 12, 36, 42, 9}
Target: 24
twoSumBruteForce Test:
Indices: [0, 14]
Values: [15, 9]
15 + 9 = 24
This is valid

twoSumHash Test:
Indices: [1, 9]
Values: [4, 20]
4 + 20 = 24
This is valid


nums = {2, 7, 11, 15}
Target: 9
twoSumBruteForce Test:
Indices: [0, 1]
Values: [2, 7]
2 + 7 = 9
This is valid

twoSumHash Test:
Indices: [0, 1]
Values: [2, 7]
2 + 7 = 9
This is valid


nums = {1, 4, 6, 7, 11, 60}
Target: 61
twoSumBruteForce Test:
Indices: [0, 5]
Values: [1, 60]
1 + 60 = 61
This is valid

twoSumHash Test:
Indices: [0, 5]
Values: [1, 60]
1 + 60 = 61
This is valid


nums = {2, 4, 6, 10, 20, 24, 26, 50, 30}
Target: 50
twoSumBruteForce Test:
Indices: [4, 8]
Values: [20, 30]
20 + 30 = 50
This is valid

twoSumHash Test:
Indices: [5, 6]
Values: [24, 26]
24 + 26 = 50
This is valid


nums = {1, 12, 10, 11, 13, 17, 18, 20, 29}
Target: 30
twoSumBruteForce Test:
Indices: [0, 8]
Values: [1, 29]
1 + 29 = 30
This is valid

twoSumHash Test:
Indices: [4, 5]
Values: [13, 17]
13 + 17 = 30
This is valid


nums = {0, 10, 80, 60, 50, 30, 90, 100, 20}
Target: 100
twoSumBruteForce Test:
Indices: [0, 7]
Values: [0, 100]
0 + 100 = 100
This is valid

twoSumHash Test:
Indices: [1, 6]
Values: [10, 90]
10 + 90 = 100
This is valid


nums = {2, 7, 11, 15}
Target: 10
twoSumBruteForce Test:
No Solution
This is not valid

twoSumHash Test:
No Solution
This is not valid

## Complexity discussion:
Brute Force version used two forloop, so the worst case is go through every value and solution is at the end. The time complexity is O(n^2) since it is a nested forloop and the space complexity is O(1) since it didn’t take too much extra memory.
Hash version time complexity is O(n) since the time it goes through the vector once. The space complexity is also O(n) because the map can store up to the size of the vector.

## Code:
[Woo_Matthew_Assignment01_2sum.cpp](https://github.com/matthewoo527/cs210-assignment01/blob/main/Woo_Matthew_Assignment01_2sum.cpp)
