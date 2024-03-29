#ifndef _02INVPILHA_
#define _02INVPILHA_

#include <iostream>
using std::cout;
using std::endl;

template <class T>
struct node {
	node<T> * next;
	T* data;
}; 
template <class T>
struct lista {
    struct node<T>* begin;
    struct node<T>* end;   
};

template<class T>
void push_back(lista<T> &list,T* num){
    node<T>* newnode = new node<T>;
    newnode->data = num;
    newnode->next = NULL;
    
    if (list.begin == NULL){
        list.begin = newnode; 
        list.end = newnode;  
    }
    else {
        (list.end->next) = newnode;
        list.end = list.end->next;
    }

}
template <class T>
void push_front(lista<T> &list,T* element){
    node<T> * newnode = new node<T>;
    newnode->data = element;
    newnode->next = list.begin;
    list.begin = newnode;
    if (list.end == NULL){
        list.end = newnode;
    }
}

template <class T>
void pop_front(lista<T> &list){
    if (list.begin != NULL){
    node<T> * aux;
    aux = list.begin->next;
    delete(list.begin);
    list.begin = aux;
    }
}

template <class T>
void imprime (const lista<T> &l){
 	node<T>* p; 
	cout << "= ";
	for (p = l.begin; p != NULL; p = p->next){
		cout << *(p->data) << " ";
	}
	cout << endl;
}

#endif
