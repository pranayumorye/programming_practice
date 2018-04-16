import java.util.Scanner;
import java.io.*;


class TestClass
{
    public static void main(String args[] ) throws Exception
    {
     
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        //System.out.print(str);
        int len = str.length();
        int cnt = 0;
        for(int i = 0; i < len; i++)
        {
            if(str.charAt(i) == '(')
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        
        System.out.print(cnt);
        
    }
}
