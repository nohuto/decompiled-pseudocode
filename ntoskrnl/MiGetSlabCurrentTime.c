/*
 * XREFs of MiGetSlabCurrentTime @ 0x14065475C
 * Callers:
 *     MiAllocateDriverPage @ 0x1407290FC (MiAllocateDriverPage.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 MiGetSlabCurrentTime()
{
  __int64 result; // rax
  __int64 v1; // r11

  result = KiQueryUnbiasedInterruptTime();
  if ( !result )
    return v1;
  return result;
}
