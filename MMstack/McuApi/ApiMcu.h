
/*!
 * \file      Mcu  objets
 *
 * \brief     Template class for Mcu abstract layer
 *
 * \copyright Revised BSD License, see section \ref LICENSE.
 *
 * \code
  __  __ _       _                                 
 |  \/  (_)     (_)                                
 | \  / |_ _ __  _ _ __ ___   ___  _   _ ___  ___  
 | |\/| | | '_ \| | '_ ` _ \ / _ \| | | / __|/ _ \
 | |  | | | | | | | | | | | | (_) | |_| \__ \  __/ 
 |_|  |_|_|_| |_|_|_| |_| |_|\___/ \__,_|___/\___| 
                                                   
                                                   
 * \endcode

Maintainer        : Fabien Holin (SEMTECH)
*/

#ifndef MCUXX_H
#define MCUXX_H

#include "Define.h"
#include "ClassSTM32L4.h"
#include <string.h>
template < class R >
    class McuXX : public R{
public :    
    McuXX ( PinName mosi, PinName miso, PinName sclk ):R (mosi,miso,sclk){};
    ~McuXX ( ){};
};

extern McuXX<McuSTM32L4> mcu;
#endif
