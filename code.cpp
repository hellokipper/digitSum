//Me:
int digitSum(int n) {
    int temp = n;
    int sum = 0;
    
    if(temp != 0) {
        for(int i=9; i>=0; i--) {
            int p = (int) (pow(10.0,i) + 0.5);
            sum += temp / p;
            temp = temp % p;
        }
    }
    return sum;
}

//Master
int digitSum(int n) {
  if(n==0)
    return 0;
  else
    return n%10 + digitSum(n/10);
}
