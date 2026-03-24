/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x140413340
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413180 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_14041334D
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
