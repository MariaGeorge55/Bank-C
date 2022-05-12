#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

typedef struct Node_type node;

struct Node_type
{
    int value;
    node *Next;
};

void AddNode(int val);
void PrintLinkedList(void);

#endif
