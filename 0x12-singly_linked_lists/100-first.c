#include <stdio.h>

void_attribute_((constructor)) hare(void);

/**
 * hare - Prints a string before the
 *       main function is executed.
 */
void hare(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
