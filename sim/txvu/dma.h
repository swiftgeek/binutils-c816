/*  Copyright (C) 1998, Cygnus Solutions

    */

#ifndef DMA_H_
#define DMA_H_

#include "sim-main.h"

void dma_attach(SIM_DESC sd);

#define DMA_REGISTER_WINDOW_START 0x10001000

#define DMA_D0_CHCR_ADDR	0x10001000
#define DMA_D0_MADR_ADDR	0x10001010
#define DMA_D0_QWC_ADDR		0x10001020
#define DMA_D0_TADR_ADDR	0x10001030
#define DMA_D0_ASR0_ADDR	0x10001040
#define DMA_D0_ASR1_ADDR	0x10001050

#define DMA_D1_CHCR_ADDR	0x10001100
#define DMA_D1_MADR_ADDR	0x10001110
#define DMA_D1_QWC_ADDR		0x10001120
#define DMA_D1_TADR_ADDR	0x10001130
#define DMA_D1_ASR0_ADDR	0x10001140
#define DMA_D1_ASR1_ADDR	0x10001150

#define DMA_D2_CHCR_ADDR	0x10001200
#define DMA_D2_MADR_ADDR	0x10001210
#define DMA_D2_QWC_ADDR		0x10001220
#define DMA_D2_TADR_ADDR	0x10001230
#define DMA_D2_ASR0_ADDR	0x10001240
#define DMA_D2_ASR1_ADDR	0x10001250

#define DMA_D_CTRL		0x10001c00
#define DMA_D_STAT		0x10001c10
#define DMA_D_PCR		0x10001c20
#define DMA_D_SQWC		0x10001c30
#define DMA_D_RBSR		0x10001c40
#define DMA_D_RBOR		0x10001c50
#define DMA_D_STADR		0x10001c60

#define DMA_REGISTER_WINDOW_END 0x10001c70
#define DMA_REGISTER_WINDOW_SIZE (DMA_REGISTER_WINDOW_END - DMA_REGISTER_WINDOW_START)

#endif
