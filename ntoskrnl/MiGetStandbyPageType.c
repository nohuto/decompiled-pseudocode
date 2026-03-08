/*
 * XREFs of MiGetStandbyPageType @ 0x14064E190
 * Callers:
 *     MiRebuildStandbyLookasideList @ 0x1402C6EB0 (MiRebuildStandbyLookasideList.c)
 *     MiSkipStandbyEntries @ 0x1402C7100 (MiSkipStandbyEntries.c)
 *     MiFindSuitableLookasideReplacement @ 0x1402C7240 (MiFindSuitableLookasideReplacement.c)
 * Callees:
 *     MiIsDecayPfn @ 0x140319ED0 (MiIsDecayPfn.c)
 */

__int64 __fastcall MiGetStandbyPageType(ULONG_PTR a1)
{
  __int64 v1; // rcx

  if ( MiIsDecayPfn(a1) )
    return 1LL;
  else
    return (*(unsigned __int8 *)(48 * v1 - 0x21FFFFFFFFDDLL) >> 2) & 2;
}
