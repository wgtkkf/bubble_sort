#include "bubble.h"
#include <iostream>
using namespace std;


// constructor
cbubble::cbubble()
{
    cout << "cbubble object generation:\n" << endl;
}

// destructor
cbubble::~cbubble()
{
    cout << "cbubble object destruction:" << endl;
}

// display
void cbubble::show(int *num)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(i<size-1)
        {
            printf("%d ", *num);
            num++;
        }else if(i==size-1)
        {
            printf("%d end\n\n", *num);
        }
    }
}

void cbubble::bsort(int *num)
{
    int i, j;
    int temp;

    for(i=0;i<size;i++)
    {
        for(j=size-1;j>i;j--)
        {
            if(num[j] < num[i])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    cout << "bubble sort was executed:\n" << endl;    
}