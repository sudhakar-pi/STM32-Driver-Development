################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/src/stm32f407_gpio_drivers.c 

OBJS += \
./Drivers/src/stm32f407_gpio_drivers.o 

C_DEPS += \
./Drivers/src/stm32f407_gpio_drivers.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/src/stm32f407_gpio_drivers.o: ../Drivers/src/stm32f407_gpio_drivers.c Drivers/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -I"C:/Users/sudha/Desktop/Target/GIT_Hub/STM32-Driver-Development/STM32F407_Disc_Drivers/Drivers/src" -I"C:/Users/sudha/Desktop/Target/GIT_Hub/STM32-Driver-Development/STM32F407_Disc_Drivers/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/src/stm32f407_gpio_drivers.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

