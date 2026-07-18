class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfsh(root)!=-1;
        
    }
    int dfsh(TreeNode* root){
        if(!root) return 0;
        int lh=dfsh(root->left);
        if(lh==-1) return -1;
        int rh=dfsh(root->right);
        if(rh==-1) return -1;
        if(abs(lh-rh)>1) return -1;
        
        return 1+max(lh,rh);
    }
};
