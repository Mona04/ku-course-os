/**
 * Basic execl() Usage.
 *
 * By walking through this example you’ll learn:
 * - How to use execl().
 * - What happens to the process that invoked execl().
 *
 */

#include <stdio.h>
#include <unistd.h>

int main3(int argc, char* argv[]){
    printf("%s executing `ls -l`.\n", "Before");

    // HINT: The /bin/ls -l should be executed.
    execl("/bin/ls", "ls", "-l", (char*)0);

    printf("%s executing `ls -l`.\n", "After");
    // not printed , Pid is same

    return 0;
}
