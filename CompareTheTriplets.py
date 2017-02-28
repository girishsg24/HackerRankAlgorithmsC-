#!/bin/python3

import sys



a1,a2,a3=input().strip().split(' ')
a1,a2,a3=int(a1),int(a2),int(a3)
b1,b2,b3=(input().strip().split(' '))
b1,b2,b3=int(b1),int(b2),int(b3)
print(int(a1>b1)+int(a2>b2)+int(a3>b3),int(a1<b1)+int(a2<b2)+int(a3<b3))
