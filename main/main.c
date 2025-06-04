/*
 * SPDX-FileCopyrightText: 2023-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include "waveshare_rgb_lcd_port.h"
#include "buttons_screen.h"




void app_main()
{
    
    waveshare_esp32_s3_rgb_lcd_init(); // Initialize the Waveshare ESP32-S3 RGB LCD 
    // waveshare_rgb_lcd_bl_on();  // Turn on the screen backlight
    //Initialize touchscreen
    // waveshare_rgb_lcd_bl_off(); // Turn off the screen backlight
    
    
    ESP_LOGI(TAG, "Display LVGL demos");
    if (lvgl_port_lock(-1)) {
        buttons_screen_init();
        lvgl_port_unlock();
    }
}
