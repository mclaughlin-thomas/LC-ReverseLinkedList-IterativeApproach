//.cpp

#include <iostream>
#include <stdio.h>
#include "NodeClass.h"

NodeClass::NodeClass() {
    data=0;
    next = NULL;
}//default
NodeClass::NodeClass(int _data) {
    data=_data;
    next = NULL;
}//default

NodeClass::~NodeClass() {
    std::cout << "Removed " << std::endl;
}

void NodeClass::setData(int _data){
    data=_data;
}
int NodeClass::getData(){
    return data;
}
void NodeClass::setNext(NodeClass* _next) {
    next = _next;
}

NodeClass *NodeClass::getNext() {
    return next;
}