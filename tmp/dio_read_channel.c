#include <stdio.h>
#include <stdint.h>

const char pins[4] = {0, 1, 1, 0};

int8_t read_channel(uint8_t id)
{
    if(id >= 4)
    {
        printf("\nerror : 0x0A\n");
        return -1;
    }
    return pins[id];
}

int main()
{
    printf("The Returned Value for 2 is %d\n", read_channel(2));
    printf("The Returned Value for 99 is %d\n", read_channel(99));

    return 0;
}