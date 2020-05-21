px4_add_module(
    MODULE hello_world
    MAIN hello_world
    STACK_MAIN 2000
    SRCS
        hello_world.c
    DEPENDS
    )
