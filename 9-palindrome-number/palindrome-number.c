bool isPalindrome(int n) {
    long revnum=0;
    int dup=n;
    while(n>0){
        int lastdigit=n%10;
     revnum=(revnum*10)+lastdigit;
        n=n/10;
    }
    if(dup==revnum)
    {
        return true;
      }  else 
        return false;
    }
