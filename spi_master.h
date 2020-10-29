/* (C) 2018 Microchip Technology Inc. and its subsidiaries.
 * Subject to your compliance with these terms, you may use Microchip software
 *  and any derivatives exclusively with Microchip products. It is your 
 * responsibility to comply with third party license terms applicable to your
 *  use of third party software (including open source software) that may 
 * accompany Microchip software.
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE.
 * 
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, 
 * IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 */ 

#ifndef _SPI_MASTER_H
#define	_SPI_MASTER_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#define SPI_SERCOM_PINS_PORT_GROUP	0
#define SPI_MISO_PORT_PMUX			PORT_PMUX_PMUXE_C_Val
#define SPI_SERCOM_MISO_PIN			PORT_PA19C_SERCOM1_PAD3
#define SPI_SCK_MOSI_PORT_PMUX		PORT_PMUX_PMUXE_C_Val
#define SPI_SERCOM_MOSI_PIN			PORT_PA16C_SERCOM1_PAD0
#define SPI_SERCOM_SCK_PIN			PORT_PA17C_SERCOM1_PAD1
#define SPI_SERCOM_SS_PIN           PORT_PA18C_SERCOM1_PAD2

#define SPI_SERCOM_CLK_GEN			0
#define SPI_SERCOM_NUM				1
#define SPI_SERCOM					SERCOM1
#define SPI_CLK_FREQ				8000000
#define SPI_BAUD					4000000
#define cyclesLoop                  6


void SPI_init(void);
uint8_t spiXfer(uint8_t data);

#ifdef	__cplusplus
}
#endif
#endif