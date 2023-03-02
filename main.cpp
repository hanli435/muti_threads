#include <iostream>
#include "./function_pointer/fn_p.h"

int main(int argc,char ** argv) {
    //函数指针声明
    void (*pf)();
//    函数指针赋值
    pf=test_fnp;
//    函数指针两种执行方式
    printf("with *\n");
    (*pf)();
    printf("without *\n");
    pf();
//    测试自动类型推断
    auto pa=test_fnp;
    printf("auto with *\n");
    (*pa)();
    printf("auto without *\n");
    pa();

    auto x;

    return 0;
}
