/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012,2013,2014 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 */


#pragma once

// ensure the MCU series is correct
#ifndef STM32PLUS_F4
#error This class can only be used with the STM32F4 series
#endif


namespace stm32plus {
  namespace net {


    /**
     * MacDefaultPinPackage favours the lower ports and matches the STM32F107 pin-for-pin
     * in MII mode. RMII mode moves TXEN/TXD0/TXD1 to port G
     */

    struct MacRemapPinPackage {

      enum {
        Mac_Peripheral = PeripheralName::PERIPHERAL_MAC_REMAP,
      };

      // MII ports/pins

      typedef gpio::PC3 MII_TXCLK;
      typedef gpio::PB12 MII_TXD0;
      typedef gpio::PB13 MII_TXD1;
      typedef gpio::PC2 MII_TXD2;
      typedef gpio::PB8 MII_TXD3;
      typedef gpio::PB11 MII_TXEN;
      typedef gpio::PA1 MII_RXCLK;
      typedef gpio::PD9 MII_RXD0;
      typedef gpio::PD10 MII_RXD1;
      typedef gpio::PD11 MII_RXD2;
      typedef gpio::PD12 MII_RXD3;
      typedef gpio::PB10 MII_RXER;
      typedef gpio::PD8 MII_RXDV;
      typedef gpio::PA0 MII_CRS;
      typedef gpio::PA3 MII_COL;

      // RMII ports/pins

      typedef gpio::PA1 RMII_REFCLK;
      typedef gpio::PA7 RMII_CRSDV;
      typedef gpio::PC4 RMII_RXD0;
      typedef gpio::PC5 RMII_RXD1;
      typedef gpio::PG11 RMII_TXEN;
      typedef gpio::PG13 RMII_TXD0;
      typedef gpio::PG14 RMII_TXD1;

      // PHY ports/pins

      typedef gpio::PC1 MDC;
      typedef gpio::PA2 MDIO;
    };
  }
}
