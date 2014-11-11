# Florida board common components
require conf/machine/include/topic-miami.inc

# Extra drivers to load as modules
MACHINE_EXTRA_RRECOMMENDS += "\
	adi-hdmi-load \
	kernel-module-adi-axi-hdmi \
	kernel-module-adv7511 \
	kernel-module-adv7604 \
	kernel-module-axi-hdmi-rx \
	kernel-module-backlight \
	kernel-module-bitblit \
	kernel-module-clk-axi-clkgen \
	kernel-module-drm-kms-helper \
	kernel-module-fpgapower \
	kernel-module-rsi-sdio \
	kernel-module-rsi-91x \
	firmware-rsi-91x \
	kernel-module-snd-hwdep \
	kernel-module-snd-soc-adi-axi-spdif \
	kernel-module-snd-soc-adv7511-hdmi \
	kernel-module-vdmafb \
	kernel-module-videobuf2-core \
	kernel-module-videobuf2-dma-contig \
	kernel-module-videobuf2-memops \
	kernel-module-virtio-ring \
	kernel-module-virtio-rpmsg-bus \
	kernel-module-virtio \
	kernel-module-xilinx-dma \
	kernel-module-xilinx-emacps \
	"