//.h

#include <stdio.h>
#include <iostream>

class NodeClass {
private:
    int data;
    NodeClass* next;
public:
    NodeClass();
    NodeClass(int data);
    ~NodeClass();
    void setData(int _data);
    int getData();
    void setNext(NodeClass* _next);
    NodeClass* getNext();
};
typedef NodeClass* NodeClassPtr;