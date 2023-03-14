#include <iostream>
#include "Header.h"

bool check(int* ptrArray, int size)
{
    int flag = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if (ptrArray[i] > ptrArray[i + 1])
        {
            flag++;
        }
    }

    if (flag > 0)
    {
        return false;
    }

    else if (flag == 0)
    {
        return true;
    }
}