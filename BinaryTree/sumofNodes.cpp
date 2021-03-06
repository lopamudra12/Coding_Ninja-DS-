// Sum of all nodes
// Send Feedback
// Given a binary tree, find and return the sum of all nodes.
// Input format :

// Elements in level order form (separated by space). If any node does 
// not have left or right child, take -1 in its place.

// Sample Input :
// 5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
// Sample Output :
// 35


public class Solution {

/*	Binary Tree Node class
 * 
 * class BinaryTreeNode<T> {
		T data;
		BinaryTreeNode<T> left;
		BinaryTreeNode<T> right;
		
		public BinaryTreeNode(T data) {
			this.data = data;
		}
	}
	*/
  
  int sumofNodes(BinaryTreeNode<int>* root){
        if(root == NULL){
            return 0;
        }
        
        int sum = 0;
        sum += root->data+ sumofNodes(root->right)+ sumofNodes(root->left);
        
        return sum;
  }
