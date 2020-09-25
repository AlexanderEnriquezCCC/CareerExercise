// RectStruct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <sstream>
/*      
    + - - - +
    | 0 0 0 |
    + - - - +
minX/minY maxX/maxY
*/
//did the best I could

struct Rect 
{
    float minX;
    float maxX;//width?
    float minY;
    float maxY;//height?
};

float distToRect(float x, float y, Rect& rect)
{
    //point P = (x,y)
    float pX = (abs(x - rect.minX) - rect.maxX/2,0); //find location & dist of point P
    float pY = (abs(y - rect.minY) - rect.maxY/2,0);

    return (pX * pX+pY*pY);
}

int main()
{
    Rect rectangle;
    rectangle.minX = 1;
    rectangle.minY = 6;
    rectangle.maxX = 3;
    rectangle.maxY = 5;
    distToRect(2, 2, rectangle);
    std::cout << distToRect << std::endl; //prints hex val... not good. the hard math does not agree with this either.
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
