class BinaryTreeNode<T> {
		T data;
		BinaryTreeNode<T> left;
		BinaryTreeNode<T> right;

		public BinaryTreeNode(T data) {
			this.data = data;
}

//using recursion
bool findNode(BinaryTreeNode<int>* root, int x){
	if(root == NULL){
		return FALSE;
	}
	if(root == x){
		return TRUE;
	}
	bool ans = FALSE;
	
	ans = findNode(root->right, x);
		if(ans)
			return true;
	ans = findNode(root->left, x);
	return ans;
}
