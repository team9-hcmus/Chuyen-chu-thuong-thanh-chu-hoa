using System;
public class Program
{
    public static void Main()
    {
        string str;
        Console.WriteLine("Nhap mot chuoi in thuong:");
        str = Console.ReadLine();
        Console.WriteLine("Chuoi in hoa la: {0}", str.ToUpper());
        Console.ReadLine();
    }
}
