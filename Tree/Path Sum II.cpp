/*
    MY YOUTUBE VIDEO ON THIS Qn : https://www.youtube.com/watch?v=eoyO8hOkPNs&t=3s
    Company Tags                : Bloomberg, LinkedIn, Amazon, Bloomberg, Quora
    Leetcode Link               : https://leetcode.com/problems/path-sum-ii/
*/

class Solution {
public:
vector<vector<int>>& result;
vector<vector<int>> pathSum(TreeNode* root, int target) {
    int sum = 0;
        vector<int> temp;
        fill(root, sum, temp, target);
        return result;
    }
    void fill(TreeNode* root, int sum, vector<int> temp,int target) {
        if(!root)
            return;
        sum += root->val;
        temp.push_back(root->val);
        if(root->left == NULL && root->right == NULL) {
            if(sum == target){
            result.push_back(temp);
            }
            return;
        }
        
        fill(root->left, sum, temp, target);
        fill(root->right,sum, temp, target);
    }
};
