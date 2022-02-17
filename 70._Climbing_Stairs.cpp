// 70. Climbing Stairs
/*You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step*/


// Cpp Solution
class Solution {
public:
    int climbStairs(int n) {
        int o = 1,t=1;
        for(int k = 0;k < n-1;k++){
            int p = o;
            o = o+t;
            t = p;
        }
        return o;
    }
};

// Python Solution 
class Solution:
    def climbStairs(self, n: int) -> int:
        o ,t = 1,1
        for i in range(n-1):
            p = o
            o = o+t
            t = p
        return o