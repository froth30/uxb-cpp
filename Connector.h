#ifndef UXB_CONNECTOR_H
#define UXB_CONNECTOR_H


class Connector final {

public:
    enum Type { COMPUTER, PERIPHERAL };
private:
    int index;
    Type type;
//    Connector peer;  //TODO: std::optional<Connector> not compiling?

public:
    Connector(int index, Type type);
    int getIndex();
    Type getType();
//    Connector getPeer();  // TODO: see above

};


#endif //UXB_CONNECTOR_H
