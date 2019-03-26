
import math


while(True):
    k = float(input("input k:"))
    years = int(input("input years:"))
    sum =0
    cost=0
    cf = 0
    for t in range(1,years):
        if t <= 20:
            cost = cost -900
            if t%3 == 0:
                cf = 800
        elif t%3 == 0: 
                cf = 800
        sum = sum + cf/float(pow((1+k),t))
        cf = 0
    
    npv = sum + cost

    print("your NPV is :",npv)

     
