// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2024 AIROHA Inc
 * Author: Lorenzo Bianconi <lorenzo@kernel.org>
 */

#ifndef __DT_BINDINGS_RESET_CONTROLLER_AIROHA_EN7581_H_
#define __DT_BINDINGS_RESET_CONTROLLER_AIROHA_EN7581_H_

/* RST_CTRL2 */
#define EN7581_XPON_PHY_RST		 0
#define EN7581_CPU_TIMER2_RST		 1
#define EN7581_HSUART_RST		 2
#define EN7581_UART4_RST		 3
#define EN7581_UART5_RST		 4
#define EN7581_I2C2_RST			 5
#define EN7581_XSI_MAC_RST		 6
#define EN7581_XSI_PHY_RST		 7
#define EN7581_NPU_RST			 8
#define EN7581_I2S_RST			 9
#define EN7581_TRNG_RST			10
#define EN7581_TRNG_MSTART_RST		11
#define EN7581_DUAL_HSI0_RST		12
#define EN7581_DUAL_HSI1_RST		13
#define EN7581_HSI_RST			14
#define EN7581_DUAL_HSI0_MAC_RST	15
#define EN7581_DUAL_HSI1_MAC_RST	16
#define EN7581_HSI_MAC_RST		17
#define EN7581_WDMA_RST			18
#define EN7581_WOE0_RST			19
#define EN7581_WOE1_RST			20
#define EN7581_HSDMA_RST		21
#define EN7581_TDMA_RST			22
#define EN7581_EMMC_RST			23
#define EN7581_SOE_RST			24
#define EN7581_PCIE2_RST		25
#define EN7581_XFP_MAC_RST		26
#define EN7581_USB_HOST_P1_RST		27
#define EN7581_USB_HOST_P1_U3_PHY_RST	28
/* RST_CTRL1 */
#define EN7581_PCM1_ZSI_ISI_RST		29
#define EN7581_FE_PDMA_RST		30
#define EN7581_FE_QDMA_RST		31
#define EN7581_PCM_SPIWP_RST		32
#define EN7581_CRYPTO_RST		33
#define EN7581_TIMER_RST		34
#define EN7581_PCM1_RST			35
#define EN7581_UART_RST			36
#define EN7581_GPIO_RST			37
#define EN7581_GDMA_RST			38
#define EN7581_I2C_MASTER_RST		39
#define EN7581_PCM2_ZSI_ISI_RST		40
#define EN7581_SFC_RST			41
#define EN7581_UART2_RST		42
#define EN7581_GDMP_RST			43
#define EN7581_FE_RST			44
#define EN7581_USB_HOST_P0_RST		45
#define EN7581_GSW_RST			46
#define EN7581_SFC2_PCM_RST		47
#define EN7581_PCIE0_RST		48
#define EN7581_PCIE1_RST		49
#define EN7581_CPU_TIMER_RST		50
#define EN7581_PCIE_HB_RST		51
#define EN7581_XPON_MAC_RST		52

#endif /* __DT_BINDINGS_RESET_CONTROLLER_AIROHA_EN7581_H_ */