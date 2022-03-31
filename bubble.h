#ifndef _BUBBLE_H_
#define _BUBBLE_H_

class cbubble{
    public:
        cbubble(); // construcotr
        virtual ~cbubble(); // destructor
        void show(int *num);
        void bsort(int *num);
        int size = 10;
};

#endif