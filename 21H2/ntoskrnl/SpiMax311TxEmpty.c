/*
 * XREFs of SpiMax311TxEmpty @ 0x1405CB7D4
 * Callers:
 *     SpiMax311PutByte @ 0x1405CB590 (SpiMax311PutByte.c)
 * Callees:
 *     SpiMax311BufferRxData @ 0x1405CB474 (SpiMax311BufferRxData.c)
 *     SpiSend16 @ 0x1405CB80C (SpiSend16.c)
 */

bool __fastcall SpiMax311TxEmpty(__int64 a1)
{
  __int16 v2; // cx

  while ( 1 )
  {
    v2 = SpiSend16(a1, 0LL);
    if ( v2 >= 0 )
      break;
    SpiMax311BufferRxData(v2);
  }
  return (v2 & 0x4000) != 0;
}
