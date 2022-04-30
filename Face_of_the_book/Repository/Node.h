//
// Created by bogdan on 05.04.2022.
//

#ifndef SDA_PORIECT_SAPT_7_NODE_H
#define SDA_PORIECT_SAPT_7_NODE_H

template<typename T>
class List;

template<class T>
class Node {
private:
    T info;
    Node<T> *next;
public:
    Node(T info, Node<T> *next) : info(info), next(next) {}

    Node(T info) : info(info) { next = nullptr; }

    friend class List<T>;
};

#endif //SDA_PORIECT_SAPT_7_NODE_H