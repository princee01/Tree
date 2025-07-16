#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;

    node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
int main()
{
    int x;
    queue<node *> q;
    cout << "enter root element: ";
    cin >> x;

    node *root = new node(x);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        int first;
        cout << "enter left element if " << temp->data << ": ";
        cin >> first;
        if (first != -1)
        {
            temp->left = new node(first);
            q.push(temp->left);
        }
        // second
        int second;
        cout << "enter right element of " << temp->data << ": ";
        cin >> second;
        if (second != -1)
        {
            temp->right = new node(second);
            q.push(temp->right);
        }
    }
}