struct node
{
    int data;
    node* left;
    node* right;
};
 
node *root = NULL;
 
void insertNode(node* &nodePtr,int val);
void preOrder(node* nodePtr);
void inOrder(node* nodePtr);
void postOrder(node* nodePtr);
void BFS(node* nodePtr);
