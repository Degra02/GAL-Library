#include <iostream>
#include "all-headers.h"
#include <bits/stdc++.h>
using namespace std;

#ifndef __LINEAR_FUNCTION_H__
#define __LINEAR_FUNCTION_H__

typedef struct Tfunction{
    string name;
    setFVectorsPtr b1, b2;
    FMatrix mr;

    Tfunction(){
        name = "";
        b1 = b2 = NULL;
        mr = NULL;
    }

    Tfunction(string _name, setFVectorsPtr _b1, setFVectorsPtr _b2){
        name = _name; b1 = _b1; b2 = _b2;
    }

    Tfunction(string _name, setFVectorsPtr _b1, setFVectorsPtr _b2, FMatrix _mr){
        name = _name;
        b1 = _b1; b2 = _b2; 
        mr = _mr;
    }

    ~Tfunction(){}

}Tfunction;

typedef Tfunction *Function;

Function init_function(string name);
void print_function(Function f);
FMatrix translate_linear_function(int dim1, int dim2);
FVector parse_linear_function_input(vector <string> *fun, int dim);
void collect_linear_function(vector <string> *fun);

setFVectorsPtr Ker(Function f);
setFVectorsPtr Im(Function f);
setFVectorsPtr Counter_Im(Function f, FVector v);

bool function_is_bijective(Function f);
FVector apply_linear_function(Function f, FVector v);

#endif