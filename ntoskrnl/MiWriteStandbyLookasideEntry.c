/*
 * XREFs of MiWriteStandbyLookasideEntry @ 0x1402C71E0
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiReplaceStandbyLookaside @ 0x1402C6D1C (MiReplaceStandbyLookaside.c)
 *     MiClearEntireStandbyLookasideList @ 0x1402C6E08 (MiClearEntireStandbyLookasideList.c)
 *     MiRebuildStandbyLookasideList @ 0x1402C6EB0 (MiRebuildStandbyLookasideList.c)
 * Callees:
 *     MiPurgingPageFromLookaside @ 0x1402C75C0 (MiPurgingPageFromLookaside.c)
 *     MiSetStandbyLookasideState @ 0x1402C7730 (MiSetStandbyLookasideState.c)
 *     MiIsDecayPfn @ 0x140319ED0 (MiIsDecayPfn.c)
 */

void __fastcall MiWriteStandbyLookasideEntry(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rcx

  v4 = (unsigned int)a2;
  v5 = *a1;
  *a1 = a3;
  if ( v5 != -1 && !(unsigned int)MiIsDecayPfn(v5, a2, v5, (unsigned int)a2) )
    MiPurgingPageFromLookaside((unsigned int)v4, v5);
  if ( a3 != -1 && !(unsigned int)MiIsDecayPfn(a3, a2, v5, v4) )
    MiSetStandbyLookasideState(v6, 1LL);
}
