class Solution {
public:
    int reverse(int n) {
     
      int result = 0;
      while(n != 0)
      {
          int tail = n%10;
          int newResult = result*10 + tail;
          result = newResult;
          n = n/10;
      }
      return result;
    }
};