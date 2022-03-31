// execution command: g++ source.cpp cbubble.cpp -o source

#include "bubble.h"
#include <iostream>
using namespace std;

int main(void){
    cbubble obj; // object generation
    int table[obj.size] = {20,6,55,74,3,45,13,87,46,30};
    obj.show(&table[0]);
    obj.bsort(&table[0]);
    obj.show(&table[0]);

    return 0;
}