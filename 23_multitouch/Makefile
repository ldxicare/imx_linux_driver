KERNELDIR := /home/lai/linux/kernel/linux_nxp/linux_ldx
CURRENT_PATH := $(shell pwd)

obj-m := ft5x06.o gt9147.o

build: kernel_modules

kernel_modules:
	$(MAKE) -C $(KERNELDIR) M=$(CURRENT_PATH) modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(CURRENT_PATH) clean