﻿//#include <iostream>
//using namespace std;
//class point
//{
//private:
//    int xpos, ypos;
//public :
//    point(int x=0, int y=0) :xpos(x), ypos(y)
//    {
//
//    }
//    void showposition() const
//    {
//        cout << '[' << xpos << ", " << ypos << ']'<<endl;
//    }
//    point operator+ (const point& ref)
//    {
//        point pos ((xpos + ref.xpos), (ypos + ref.ypos));
//        return pos;
//    }
//};
//int main()
//{
//    point pos1(3, 4);
//    point pos2(10, 20);
//    point pos3 = pos1.operator+(pos2); //동일하다
//    point pos4 = pos1 + pos2; //동일하다
//
//    pos1.showposition();
//    pos2.showposition();
//    pos3.showposition();
//    pos4.showposition();
//
//    return 0;
//}