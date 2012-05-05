#include "Stack.h"

Node :: Node( )
{
    next = NULL;
}

Node :: Node(Node_entry item, Node *add_on)
{
    entry = item;
    next = add_on;
}

Stack:: Stack(){
    top_node = NULL;
}

Stack::~Stack(){
    while(!empty())
        pop();
}

bool Stack:: empty() const
{
    return (top_node==NULL);
}

bool Stack:: top(Stack_entry &item) const
{
    if(empty()) return false;
    item = top_node->entry;
    return true;
}

bool Stack :: push(const Stack_entry &item)
{
    Node *new_top = new Node(item, top_node);
    if (new_top == NULL) return false;
    top_node = new_top;
    return true;
}

bool Stack :: pop( )
{
    Node *old_top = top_node;
    if (top_node == NULL) return false;
    top_node = old_top->next;
    delete old_top;
    return true;
}
