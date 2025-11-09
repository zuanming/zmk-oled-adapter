#include <zephyr/devicetree.h>
#include <zephyr/sys/util.h>

BUILD_ASSERT(DT_NODE_HAS_STATUS(DT_NODELABEL(oled_128x128), okay), "oled_128x128 is not enabled");
BUILD_ASSERT(DT_REG_ADDR(DT_NODELABEL(oled_128x128)) == 0x3c, "I2C unexpected addr in oled_128x128");
