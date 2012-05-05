/* 
 * File:   Stack.h
 * Author: Bruno
 *
 * Created on 5 de Novembro de 2009, 17:36
 */

#ifndef _STACK_H
#define	_STACK_H
#include <iostream>
using namespace std;
typedef int Node_entry;
struct Node {
    // data members
    Node_entry entry;
    Node *next;
    // constructors
    Node( );
    Node(Node_entry item, Node *add_on = NULL);
};

typedef Node_entry Stack_entry;
class Stack {
    public:
        Stack( );
        ~Stack();
        bool empty( ) const;
        bool push(const Stack_entry &item);
        bool pop( );
        bool top(Stack_entry &item) const;
    protected:
        Node *top_node;
};


#endif	/* _STACK_H */

