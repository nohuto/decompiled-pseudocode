/*
 * XREFs of RtlDrainNonVolatileFlush @ 0x1405A57C0
 * Callers:
 *     RtlFlushNonVolatileMemory @ 0x1405A57F0 (RtlFlushNonVolatileMemory.c)
 *     RtlFlushNonVolatileMemoryRanges @ 0x1405AD470 (RtlFlushNonVolatileMemoryRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDrainNonVolatileFlush(char a1)
{
  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  if ( RtlpIsDrainRequired )
  {
    if ( (a1 & 2) != 0 )
      _mm_sfence();
  }
  return 0LL;
}
