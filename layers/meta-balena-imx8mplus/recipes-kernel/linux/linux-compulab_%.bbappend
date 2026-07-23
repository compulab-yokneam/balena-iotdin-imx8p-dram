FILESEXTRAPATHS:prepend := "${THISDIR}/linux-compulab:"

inherit kernel-resin kernel-balena

DEPENDS += "rsync-native"

SRC_URI:append = "file://balena.cfg"

KERNEL_PACKAGE_NAME="kernel"

SCMVERSION="n"

SRCBRANCH = "linux-compulab_v6.6.52"
SRCREV = "149db5cb1e05bca99a266c0326d01e00e307144c"
PV = "6.6.52"
