/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x14042CAC0
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14042C900 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_14042CACD
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
