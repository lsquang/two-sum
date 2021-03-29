// two-sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i != nums.size(); ++i) {
        for (int j = i + 1; j != nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return { i,j };
            }
        }
    }
    return {};
}int main()
{
    vector<int> numbers = { 2,7,11,15 };
    vector<int> output = twoSum(numbers, 9);
    cout << output[0] << endl;
    cout << output[1] << endl;
}

