/*************************************************************************
    > File Name: test.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: Tue 28 Mar 2017 09:55:57 AM EDT
 ************************************************************************/

#include "get_config.h"
 
int main()
{
    map<string, string> m;
    ReadConfig("test.cfg", m);
    PrintConfig(m);
     
    return 0;
}
