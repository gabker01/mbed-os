/* mbed Microcontroller Library
 * Copyright (c) 2017-2019 Arm Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Note: Due to a HW limitation, GPIO in Musca-B1 is Secure only, so secure
 *       service should be used for GPIO in NS domain.
 */

#include <stddef.h>
#include "gpio_irq_api.h"
#include "objects.h"
#include "mbed_error.h"

int gpio_irq_init(gpio_irq_t *obj, PinName pin, gpio_irq_handler handler,
                  uint32_t id)
{
    return 0;
}

void gpio_irq_free(gpio_irq_t *obj)
{
}

void gpio_irq_set(gpio_irq_t *obj, gpio_irq_event event, uint32_t enable)
{
}

void gpio_irq_enable(gpio_irq_t *obj)
{
}

void gpio_irq_disable(gpio_irq_t *obj)
{
}
