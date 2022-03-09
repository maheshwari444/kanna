a = [1,2,3,4,5]
ls = a[0]
for i in range(0,len(a)):
    if a[i] <ls:
        ls = a[i]
    else:
        continue
print("smallest value:",ls)