SRCBRANCH = "u-boot-compulab_v2023.04-d1d8_d2d4"
SRCREV = "aefee683df124a6c9ffac2ff66933863e0d3de9d"

SRC_URI:append = " \
	file://10000-compulab-imx8m-plus-evnironment-Update-for-the-Bale.patch \
	file://20000-balena-Use-pylibfdt-setup.py-from-2021.04.patch \
	file://20001-balena-Fix-env-mmc.c-build-issue.patch \
	file://env_size.cfg \
"
