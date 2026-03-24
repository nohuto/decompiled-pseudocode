/*
 * XREFs of xxxSleepThread @ 0x1C01D2F40
 * Callers:
 *     xxxIsDragging @ 0x1C02487D8 (xxxIsDragging.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C00586B0 (xxxSleepThread2.c)
 */

__int64 __fastcall xxxSleepThread(unsigned int a1, unsigned int a2, int a3, int a4)
{
  return xxxSleepThread2(a1, a2, a3, a4, 0LL);
}
