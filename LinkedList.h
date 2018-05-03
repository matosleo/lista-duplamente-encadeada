//
//  LinkedList.h
//
//  Created by Eiji Adachi Medeiros Barbosa
//

#ifndef __LinkedList__LinkedList__
#define __LinkedList__LinkedList__

#include "Node.h"
#include <string>

typedef enum {
    OK ,
    HeadNull,
    TailNull,
    HeadPrevious,
    HeadNextNull,
    TailNext,
    TailPreviousNull,
    HeadTail,
    IncorrectLink
} ListStatus ;

class LinkedList {
private:
    Node<std::string>* head;
    Node<std::string>* tail;
    int quantity;
    
public:
    LinkedList(void);
    ~LinkedList(void);

    Node<std::string>* getHead(void);
    Node<std::string>* getTail(void);
    
    std::string get(int);
    int search(std::string);
    
    void insertAfter(Node<std::string> *n, Node<std::string> *aux);
    Node<std::string>* unlink(Node<std::string> *aux);

    bool insertEnd(std::string);
    bool insertBegin(std::string);
    bool insert(int, std::string);

    std::string removeEnd(void);
    std::string removeBegin(void);
    std::string remove(int);
    
    ListStatus checkConsistency(void);
    
    void print(void);
    
    bool isEmpty(void);
    int getQuantity(void);
};

#endif /* defined(__LinkedList__LinkedList__) */
