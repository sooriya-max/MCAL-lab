#include <stdio.h>
#include <stdint.h>

char pins[4] = {0};

void write_channel(uint8_t id, uint8_t level)
{
    if(id >= 4)
    {
        printf("This is Beyond the accepted Range : Error : 0x0A\n");
        return;
    }
    pins[id] = level;
    printf("Writing Channel %d with %d\n", id, level);
}


int main()
{
    write_channel(2, 1);
    write_channel(99, 1);
    return 0;
}