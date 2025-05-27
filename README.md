# 🎯 Two Sum Problem

## 📋 Overview

The **Two Sum** problem is a classic and widely asked coding interview question. Given an array of integers and a target value, the goal is to find two indices of elements that add up to the target. 🔍

## 📝 Problem Statement

🔗 **LeetCode Problem**: [Two Sum](https://leetcode.com/problems/two-sum/description/)

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice. ⚡

## 💡 Example

```
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]
Explanation: Because nums[0] + nums[1] == 2 + 7 == 9, we return [0, 1].
```

## 🚀 Solution Approach

This solution uses an **optimal hash map approach** that solves the problem in a single pass:

### 🔄 Algorithm

1. **Use a map** 🗺️ (hash table) to **store each number and its index** while iterating through the array
2. For every number, check if the **complement (target - current number)** already exists in the map 🔎
3. If the complement exists, we've found our answer and return the indices ✅
4. If not, store the current number and its index in the map and continue 📊

### 🤔 Why This Works

- **Single Pass**: We only need to iterate through the array once 🏃‍♂️
- **Constant Lookup**: Hash map provides O(1) average lookup time ⚡
- **Space-Time Tradeoff**: We use extra space to achieve optimal time complexity 📈

## 📊 Complexity Analysis

| Metric | Complexity | Explanation |
|--------|------------|-------------|
| **⏰ Time** | **O(n)** | Single pass through the array |
| **💾 Space** | **O(n)** | Hash map stores up to n elements |

## 📝 Alternative Approaches

### 🐌 Brute Force Approach
- **Time Complexity**: O(n²) ⏳
- **Space Complexity**: O(1) 💾
- Check every pair of elements using nested loops 🔄
- **Not optimal** for large inputs ❌

✅ **Our hash map solution is optimal** compared to the brute force approach, reducing time complexity from O(n²) to O(n). 🎉

## 🔑 Key Insights

- **Hash maps are powerful** 💪 for problems requiring fast lookups
- **Single pass algorithms** are often more efficient than nested loops 🏎️
- **Space-time tradeoffs** can lead to significant performance improvements 📈
- This pattern applies to many similar "find pair" problems 🔗

## 👨‍💻 Author

**Shaik Khasim Khaleel Basha**

- 🐙 **GitHub**: [Khaleel-tech](https://github.com/Khaleel-tech)
- 💼 **LinkedIn**: [Shaik Khasim Khaleel Basha](https://www.linkedin.com/in/shaik-khasim-khaleel-basha-89b877278/)
- 📧 **Email**: shaikkhaleel1425@gmail.com

## 📄 License

This solution is provided for educational purposes. Feel free to use and modify as needed. 📚

---

*🌟 This README demonstrates an optimal solution to the classic Two Sum problem using hash map optimization.*
