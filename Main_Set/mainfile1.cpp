#include <iostream>
#include <string>
#include "D:\dhk_Repository\example1\Class_Set\Person_Class.h"
using namespace std;

int main()
{
    Person person("Wang",17,male,"Beijing",528);
    Teacher teacher("Wang",18,male,"Beijing",528,"assistant");
    Cadre cadre("Wang",18,male,"Beijing",528,"chairman");
    Teacher_Cadre tc("Wang",18,male,"Beijing",528,"assistant","chairman",54321.6); 
    Something *p[4];
    p[0] = &person;
    p[1] = &teacher;
    p[2] = &cadre;
    p[3] = &tc;
    for(int i=0;i<4;i++) p[i]->show();
    return 0;
}