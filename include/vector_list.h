#include <iostream>
#include "all-headers.h"
using namespace std;

#ifndef __VECTOR_LIST_H__
#define __VECTOR_LIST_H__

typedef struct TVnode{
    Vector v;
    TVnode *next;

    TVnode(){
        v = NULL;
        next = NULL;
    }

    TVnode(Vector _v, TVnode *_next){
        v = _v;
        next = _next;
    }

    ~TVnode(){}

}TVnode;

typedef TVnode *VNodeptr;

VNodeptr insertFirstV(VNodeptr n, Vector v);
bool isPresentV(VNodeptr n, string name);
VNodeptr insertV(VNodeptr n, string name);

#endif