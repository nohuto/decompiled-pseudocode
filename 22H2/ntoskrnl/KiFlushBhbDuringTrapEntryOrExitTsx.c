/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x140434EC0
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_140434ECD
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
