
#ifndef __CRC16_H_
#define __CRC16_H_

#include <stdint.h>
#include <stdbool.h>

//*************************************************************************************************
// Расчет контрольной суммы по готовой таблице
// Для использования рассчитываемой таблицы - необходимо закоментировать оределение
// и для построения таблицы вызывать MakeCRC16Table();
//*************************************************************************************************
#define MODE_CALC_FROM_TABLE

//*************************************************************************************************

#ifndef MODE_CALC_FROM_TABLE
void MakeCRC16Table( void );
#endif

uint16_t CalcCRC16( uint8_t *buf, uint16_t len );
    
#endif

