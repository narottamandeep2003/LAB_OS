#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
int main()
{
    
    int n = mkdir("Rk21wbA19", 0777);
    if (n == -1)
    {
        write(1, "Error or Already created ", 25);
        int n1 = open("./Rk21wbA19/OS1.txt", O_CREAT, 0777);
        if (n1 == -1)
        {
            write(1, "File not created", 16);
        }
        else
        {
            write(1, "File is created", 15);
        }
    }
    else
    {
        write(1, "Directory created ", 18);
        int n1 = open("./Rk21wbA19/OS1.txt", O_CREAT, 0777);
        if (n1 == -1)
        {
            write(1, "File not created", 16);
        }
        else
        {
            write(1, "File is created", 15);
        }
    }
}
