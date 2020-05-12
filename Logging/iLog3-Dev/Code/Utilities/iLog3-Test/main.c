// main.c : Defines the entry point for the console application.
//

#ifdef _WIN32
#include "stdafx.h"
#include <vld.h>
#endif

#include "TestCode/TC01_Basic_INFOLOGG.h"
#include "TestCode/TC02_Basic_MultiOutput.h"

int main()
{
    printf( "=============================\n" \
            "TC01_Basic_INFOLOGG\n" \
            "-----------------------------\n");
    TC01_Basic_INFOLOGG();
    printf( "=============================\n\n");

    printf("=============================\n" \
        "TC02_Basic_MultiOutput\n" \
        "-----------------------------\n");
    TC02_Basic_MultiOutput();
    printf("=============================\n\n");

    return 0;
}

