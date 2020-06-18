#include <stdio.h> 
#include <stdlib.h> 
  
struct node 
{ 
     int data; 
     struct node* left; 
     struct node* right; 
}; 

struct node* newNode(int data) 
{ 
     struct node* node = (struct node*) malloc(sizeof(struct node)); 
     node->data = data; 
     node->left = NULL; 
     node->right = NULL; 
  
     return(node); 
}
void preorder(struct node* root){
     if(root==NULL)
          return;
     printf("%d\t",root->data);
     preorder(root->left);
     preorder(root->right);
     
} 
void postorder(struct node* root){
     if(root==NULL)
          return;
     postorder(root->left);
     postorder(root->right);
     printf("%d\t",root->data);
}
void inorder(struct node* root){
     if (root==NULL)
          return;
     inorder(root->left);
     printf("%d\t",root->data);
     inorder(root->right);
}
int main() 
{ 
     struct node* root  = newNode(1); 
     root->left= newNode(2); 
     root->right= newNode(3); 
     root->left->left = newNode(4); 
     root->left->right= newNode(5);
     preorder(root);
     printf("\n");
     inorder(root);
     printf("\n");
     postorder(root);
     return 0; 
} 