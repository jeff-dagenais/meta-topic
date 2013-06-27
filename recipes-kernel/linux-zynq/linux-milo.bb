DESCRIPTION = "Xilinx Zynq kernel with ADI extensions"
SECTION = "kernel"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"
S = "${WORKDIR}/git"

KBRANCH = "xcomm_zynq"

inherit kernel
require recipes-kernel/linux/linux-dtb.inc

# Using LZO compression in the kernel requires "lzop"
DEPENDS += "lzop-native"

FILESEXTRAPATHS_prepend := "${THISDIR}/linux-milo:"

# If you have a local repository, you can set this variable to point to
# another kernel repo. Or to another kernel entirely.
KERNEL_GIT_REPO ?= "git://github.com/milosoftware/linux.git;protocol=git"

SRC_URI = "\
	${KERNEL_GIT_REPO};branch=${KBRANCH} \
	file://defconfig \
	"

KERNEL_IMAGETYPE = "uImage"
KERNEL_DEVICETREE = "${WORKDIR}/devicetree.dts"
KERNEL_DEVICETREE_zynq-zc702 = "arch/arm/boot/dts/${MACHINE}-adv7511.dts"
KERNEL_DEVICETREE_zedboard = "arch/arm/boot/dts/zynq-zed-adv7511.dts"
# See http://permalink.gmane.org/gmane.linux.kernel.commits.head/371588
KERNEL_EXTRA_ARGS += "LOADADDR=0x00008000"

LINUX_VERSION ?= "3.9"
LINUX_VERSION_EXTENSION ?= "-milo"

SRCREV = "faa149d095e5386ea0faaff4f6f079871206524b"

PR = "r0"
PV = "${LINUX_VERSION}+git${SRCPV}"

COMPATIBLE_MACHINE = "(zynq-zc702|zedboard)"
