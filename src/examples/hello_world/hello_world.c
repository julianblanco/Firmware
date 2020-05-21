/**
 * @file px4_simple_app.c
 * Minimal application example for PX4 autopilot
 *
 * @author Example User <mail@example.com>
 */

#include <px4_platform_common/log.h>

__EXPORT int hello_word_main(int argc, char *argv[]);

int hello_world_main(int argc, char *argv[])
{
    PX4_INFO("Hello Sky!");
    return OK;
}
