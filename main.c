//
//  main.c
//  tribonaci
//
//  Created by Tong Tingting on 13-12-9.
//  Copyright (c) 2013年 Tong Tingting. All rights reserved.
//

#include <stdio.h>

int main()
{

    int tribonaci(int n);
    int n,tri;
    scanf("%d",&n);
    tri=tribonaci(n);
    printf("tribonaci=%d",tri);
    
}



int tribonaci (int nn)
{
    int m;
    if (nn>=3) {
        m=tribonaci(nn-1)*tribonaci(nn-2)*tribonaci(nn-3);
    }
    else if(nn==2){
        m=2;
    }
    else m=1;
    return m;

}

