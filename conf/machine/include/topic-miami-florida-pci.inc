# Miami board common components
require conf/machine/include/topic-miami.inc

MACHINE_FPGA_BITSTREAM ?= "fpga-image-miami-florida-pci-reference"

# Extra packages to install for the board
BOARD_FPGA_PACKAGES ?= "\
	kernel-module-g-ether \
	kernel-module-g-mass-storage \
	kernel-module-g-ncm \
	kernel-module-gspca-main \
	kernel-module-u-ether \
	kernel-module-pwc \
	kernel-module-usb-f-ecm \
	kernel-module-usb-f-ecm-subset \
	kernel-module-usb-f-mass-storage \
	kernel-module-usb-f-ncm \
	kernel-module-usb-f-rndis \
	kernel-module-usbserial \
	kernel-module-uvcvideo \
	kernel-module-videobuf2-core \
	kernel-module-videobuf2-dma-contig \
	kernel-module-videobuf2-memops \
	kernel-module-videobuf2-vmalloc \
	kernel-module-xilinx-dma \
	kernel-module-macb \
	kernel-module-pps-core \
	kernel-module-ptp \
	"

MACHINE_FEATURES += "usbhost usbgadget ethernet"

DEVICETREE = "uImage-topic-miami-florida-pci.dtb"
