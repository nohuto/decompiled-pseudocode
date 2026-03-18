/*
 * XREFs of MiWriteStandbyLookasideEntry @ 0x140330F2C
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140266510 (MiUnlinkPageFromListEx.c)
 *     MiReplaceStandbyLookaside @ 0x140330A68 (MiReplaceStandbyLookaside.c)
 *     MiClearEntireStandbyLookasideList @ 0x140330B54 (MiClearEntireStandbyLookasideList.c)
 *     MiRebuildStandbyLookasideList @ 0x140330BFC (MiRebuildStandbyLookasideList.c)
 * Callees:
 *     MiIsDecayPfn @ 0x14026EAB0 (MiIsDecayPfn.c)
 *     MiPurgingPageFromLookaside @ 0x140331310 (MiPurgingPageFromLookaside.c)
 *     MiSetStandbyLookasideState @ 0x140331480 (MiSetStandbyLookasideState.c)
 */

void __fastcall MiWriteStandbyLookasideEntry(ULONG_PTR *a1, __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v4; // r8
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 v7; // rcx

  v4 = *a1;
  *a1 = a3;
  if ( v4 != -1LL && !MiIsDecayPfn(v4) )
    MiPurgingPageFromLookaside(v6, v5);
  if ( a3 != -1LL && !MiIsDecayPfn(a3) )
    MiSetStandbyLookasideState(v7, 1LL);
}
