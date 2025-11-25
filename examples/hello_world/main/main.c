include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_log.h"

static const char *TAG = "HelloWorld";

void app_main(void)
{
    while(1) {
        ESP_LOGI(TAG, "Hello ESP32-S3!");
        vTaskDelay(pdMS_TO_TICKS(2000));
    }
}
