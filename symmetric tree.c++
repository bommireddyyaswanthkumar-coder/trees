class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root==nullptr||ifsym(root->left,root->right);
        
    }
    bool ifsym(TreeNode* left,TreeNode* right){
        if(left==nullptr||right==nullptr){
            return left==right;
        }
        if(left->val!=right->val) return false;
        
        return ifsym(left->left,right->right)&&ifsym(left->right,right->left);
    }
};
