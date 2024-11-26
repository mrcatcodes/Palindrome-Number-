class Solution{
    public:
    bool isPalindrome(int x)
    {
        if(x<0)
        {
            return false;
        }
        int rev=0,orig_val=x;
        while(x != 0)
        {
            int num = x%10;
            rev=rev*10+num;
            x/=10;
        }
        return orig_val==rev;
    }
}