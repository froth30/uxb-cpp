#include "Connector.h"

Connector::Connector(int index, Type type) {
    this->index = index;
    this->type = type;
}

int Connector::getIndex() {
    return index;
}

Type Connector::getType() {
    return type;
}

//Connector Connector::getPeer() {
//    return peer;
//}
