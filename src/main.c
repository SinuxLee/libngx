#include <stdio.h>

#include <ngx_config.h>
#include <ngx_core.h>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    ngx_str_t hello = ngx_string("Hello World");

    u_char *var = ngx_alloc(hello.len,NULL);

    ngx_sprintf(var,"hello str: %V",&hello);

    printf("%s\n",var);

    return 0;
}
