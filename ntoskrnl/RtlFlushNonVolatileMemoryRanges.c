/*
 * XREFs of RtlFlushNonVolatileMemoryRanges @ 0x1405AD470
 * Callers:
 *     <none>
 * Callees:
 *     RtlDrainNonVolatileFlush @ 0x1405A57C0 (RtlDrainNonVolatileFlush.c)
 *     RtlFlushNonVolatileMemory @ 0x1405A57F0 (RtlFlushNonVolatileMemory.c)
 */

__int64 __fastcall RtlFlushNonVolatileMemoryRanges(char a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v5; // rdi

  v5 = a3;
  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  if ( (a1 & 2) != 0 )
  {
    if ( a3 )
    {
      do
      {
        RtlFlushNonVolatileMemory(a1, *a2, a2[1], a4 | 1);
        a2 += 2;
        --v5;
      }
      while ( v5 );
    }
    if ( (a4 & 1) == 0 )
      RtlDrainNonVolatileFlush(a1);
  }
  return 0LL;
}
