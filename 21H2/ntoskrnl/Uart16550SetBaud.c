/*
 * XREFs of Uart16550SetBaud @ 0x1405CB290
 * Callers:
 *     Uart16550InitializePortCommon @ 0x1405CAFC4 (Uart16550InitializePortCommon.c)
 * Callees:
 *     Uart16550SetBaudCommon @ 0x1405CB2B0 (Uart16550SetBaudCommon.c)
 */

char __fastcall Uart16550SetBaud(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
    return 0;
  else
    return Uart16550SetBaudCommon();
}
