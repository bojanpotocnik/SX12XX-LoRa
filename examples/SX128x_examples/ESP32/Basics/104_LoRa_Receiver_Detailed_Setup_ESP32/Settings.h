/*******************************************************************************************************
  Programs for Arduino - Copyright of the author Stuart Robinson - 04/04/20

  This program is supplied as is, it is up to the user of the program to decide if the program is
  suitable for the intended purpose and free from errors.
*******************************************************************************************************/

#include <stdint.h>

//*******  Setup hardware pin definitions here ! ***************

#define LORA_DEVICE DEVICE_SX1280 // Semtech SX12XX device model


#ifdef ARDUINO_ADAFRUIT_QTPY_ESP32S2
    #define MISO        37      // MISO_TX (E28-2G4M12S pin 3)
    #define MOSI        35      // MOSI_RX (E28-2G4M12S pin 4)
    #define SCK         36      // SCK_RTSN (E28-2G4M12S pin 5)
    #define NSS         16      // NSS_CTS (E28-2G4M12S pin 6)

    #define NRESET      5       // NRESET (E28-2G4M12S pin 9)
    #define RFBUSY      6       // BUSY (E28-2G4M12S pin 10)
    #define DIO1        7       // DIO1 (E28-2G4M12S pin 11), used for RX and TX done 
    #define DIO2        8       // DIO2 (E28-2G4M12S pin 12)
    #define DIO3        -1      // DIO3 (E28-2G4M12S pin 13), not connected (-1)

    #define RX_EN       -1      // RX enable pin (used on some SX128X devices), not used (-1)
    #define TX_EN       -1      // TX enable pin (used on some SX128X devices), not used (-1)

    #define LED1        -1      // On-board LED, high for ON
    #define BUZZER      -1      // On-board buzzer
    #define VCCPOWER    -1      // Enable power to external devices
#else
    #error "Unsupported board"
#endif /* ARDUINO_${build.board} */



//*******  Setup LoRa Parameters Here ! ***************

//LoRa Modem Parameters
const uint32_t Frequency = 2445000000;           //frequency of transmissions
const int32_t Offset = 0;                        //offset frequency for calibration purposes  
const uint8_t Bandwidth = LORA_BW_0400;          //LoRa bandwidth
const uint8_t SpreadingFactor = LORA_SF7;        //LoRa spreading factor
const uint8_t CodeRate = LORA_CR_4_5;            //LoRa coding rate

const int8_t TXpower = 10;                       //LoRa transmit power in dBm

const uint16_t packet_delay = 1000;             //mS delay between packets

#define RXBUFFER_SIZE 32                        //RX buffer size  



