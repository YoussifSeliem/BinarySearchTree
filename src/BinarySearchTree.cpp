#include <iostream>
#include <queue>
#include "../include/BinarySearchTree.h"
using namespace std;
 
void insertNode(node* &nodePtr,int val)
{
    if (!nodePtr)
    {
        nodePtr= new node;
        nodePtr->data = val;
        nodePtr->left = NULL;
        nodePtr->right = NULL;
    }
    else
    {
        if (nodePtr->data > val)
            insertNode(nodePtr->left, val);
        else
            insertNode(nodePtr->right, val);
    }
}
 
void preOrder(node* nodePtr)
{
    if(!nodePtr)
        return;
    else
    {
        cout<<nodePtr->data<<" ";
        preOrder(nodePtr->left);
        preOrder(nodePtr->right);
    }
}
 
void inOrder(node* nodePtr)
{
    if(!nodePtr)
        return;
    else
    {
        inOrder(nodePtr->left);
        cout<<nodePtr->data<<" ";
        inOrder(nodePtr->right);
    }
}
 
void postOrder(node* nodePtr)
{
    if(!nodePtr)
        return;
    else
    {
        postOrder(nodePtr->left);
        postOrder(nodePtr->right);
        cout<<nodePtr->data<<" ";
    }
}
 
void BFS(node* nodePtr)
{
    if(!nodePtr)
        cout<<"\n";
    else
    {
        queue<node*>Queue;
        Queue.push(nodePtr);
 
        while (!Queue.empty())
        {
            node *queuePtr=Queue.front();
            cout<<queuePtr->data<<endl;
            if (queuePtr->left)
            {
                Queue.push(queuePtr->left);
            }
            if (queuePtr->right)
            {
                Queue.push(queuePtr->right);
            }
            Queue.pop();
        }
    }
}
