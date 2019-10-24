test_cases=int(input())
for q in range(test_cases):
    total_bonus=0
    trader=(list(map(int,input().split())))
    risk=(list(map(int,input().split())))
    bonus=(list(map(int,input().split())))
    a=len(trader)
    while(a!=0):
        max_bonus=max(bonus)
        max_index=bonus.index(max_bonus)
        for i in range(len(trader)):
            if trader[i]>=risk[max_index]:
                trader[i]=-1
                a=a-1
                total_bonus+=int(bonus[max_index])
        bonus[max_index]=0
        max_index=bonus.index(max(bonus))
    print(total_bonus)
