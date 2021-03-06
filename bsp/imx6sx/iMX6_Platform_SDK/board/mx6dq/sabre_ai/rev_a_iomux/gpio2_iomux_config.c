/*
 * Copyright (c) 2012, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// File: gpio2_iomux_config.c

/* ------------------------------------------------------------------------------
 * <auto-generated>
 *     This code was generated by a tool.
 *     Runtime Version:3.4.0.0
 *
 *     Changes to this file may cause incorrect behavior and will be lost if
 *     the code is regenerated.
 * </auto-generated>
 * ------------------------------------------------------------------------------
*/

#include "iomux_config.h"
#include "registers/regsiomuxc.h"

// Function to configure IOMUXC for gpio2 module.
void gpio2_iomux_config(void)
{
    // Config gpio2.GPIO2_IO11 to pad SD4_DATA3(A20)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD4_DATA3_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA3_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD4_DATA3(0x020E0328)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT1 (1) - Select instance: usdhc4 signal: SD4_DATA3
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO11
    HW_IOMUXC_SW_MUX_CTL_PAD_SD4_DATA3_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD4_DATA3_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD4_DATA3_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD4_DATA3(0x020E0710)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     TBD (0) - TBD
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA3_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA3_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA3_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA3_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA3_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA3_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA3_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA3_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA3_SRE_V(SLOW));

    // Config gpio2.GPIO2_IO12 to pad SD4_DATA4(E18)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD4_DATA4_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA4_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD4_DATA4(0x020E032C)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT1 (1) - Select instance: usdhc4 signal: SD4_DATA4
    //     ALT2 (2) - Select instance: uart2 signal: UART2_RX_DATA
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO12
    HW_IOMUXC_SW_MUX_CTL_PAD_SD4_DATA4_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD4_DATA4_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD4_DATA4_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD4_DATA4(0x020E0714)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     TBD (0) - TBD
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA4_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA4_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA4_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA4_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA4_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA4_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA4_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA4_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA4_SRE_V(SLOW));

    // Config gpio2.GPIO2_IO15 to pad SD4_DATA7(D19)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD4_DATA7_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA7_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD4_DATA7(0x020E0338)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT1 (1) - Select instance: usdhc4 signal: SD4_DATA7
    //     ALT2 (2) - Select instance: uart2 signal: UART2_TX_DATA
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO15
    HW_IOMUXC_SW_MUX_CTL_PAD_SD4_DATA7_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD4_DATA7_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD4_DATA7_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD4_DATA7(0x020E0720)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     TBD (0) - TBD
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA7_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA7_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA7_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA7_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA7_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA7_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA7_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA7_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD4_DATA7_SRE_V(SLOW));

    // Config gpio2.GPIO2_IO24 to pad EIM_CS1(J23)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_CS1_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_WR(0x0000B0B1);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_CS1(0x020E00FC)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT0
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_CS1
    //     ALT1 (1) - Select instance: ipu1 signal: IPU1_DI1_PIN06
    //     ALT2 (2) - Select instance: ecspi2 signal: ECSPI2_MOSI
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO24
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_CS1_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_CS1_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_CS1_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_CS1(0x020E0410)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     TBD (0) - TBD
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: FAST
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_HYS_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_SRE_V(FAST));

    // Config gpio2.GPIO2_IO27 to pad EIM_LBA(K22)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_LBA_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_LBA_WR(0x0000B0B1);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_LBA(0x020E0108)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT0
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_LBA
    //     ALT1 (1) - Select instance: ipu1 signal: IPU1_DI1_PIN17
    //     ALT2 (2) - Select instance: ecspi2 signal: ECSPI2_SS1
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO27
    //     ALT7 (7) - Select instance: src signal: SRC_BOOT_CFG26
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_LBA_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_LBA_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_LBA_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_LBA(0x020E041C)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     TBD (0) - TBD
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: FAST
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_LBA_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_LBA_HYS_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_LBA_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_LBA_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_LBA_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_LBA_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_LBA_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_LBA_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_LBA_SRE_V(FAST));

    // Config gpio2.GPIO2_IO28 to pad EIM_EB0(K21)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_EB0_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_EB0_WR(0x0000B0B1);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_EB0(0x020E010C)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT0
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_EB0
    //     ALT1 (1) - Select instance: ipu1 signal: IPU1_DISP1_DATA11
    //     ALT2 (2) - Select instance: ipu2 signal: IPU2_CSI1_DATA11
    //     ALT4 (4) - Select instance: ccm signal: CCM_PMIC_READY
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO28
    //     ALT7 (7) - Select instance: src signal: SRC_BOOT_CFG27
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_EB0_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_EB0_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_EB0_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_EB0(0x020E0420)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     TBD (0) - TBD
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: FAST
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_EB0_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB0_HYS_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB0_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB0_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB0_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB0_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB0_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB0_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB0_SRE_V(FAST));

    // Config gpio2.GPIO2_IO29 to pad EIM_EB1(K23)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_EB1_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_EB1_WR(0x0000B0B1);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_EB1(0x020E0110)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT0
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_EB1
    //     ALT1 (1) - Select instance: ipu1 signal: IPU1_DISP1_DATA10
    //     ALT2 (2) - Select instance: ipu2 signal: IPU2_CSI1_DATA10
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO29
    //     ALT7 (7) - Select instance: src signal: SRC_BOOT_CFG28
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_EB1_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_EB1_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_EB1_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_EB1(0x020E0424)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     TBD (0) - TBD
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: FAST
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_EB1_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB1_HYS_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB1_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB1_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB1_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB1_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB1_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB1_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB1_SRE_V(FAST));
}
