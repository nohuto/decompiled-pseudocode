/*
 * XREFs of MiIsDecayPfn @ 0x14026EAB0
 * Callers:
 *     MiSynchronizeFastPageInsert @ 0x14026DDF0 (MiSynchronizeFastPageInsert.c)
 *     MiReplaceTransitionPage @ 0x1403304D0 (MiReplaceTransitionPage.c)
 *     MiSkipStandbyEntries @ 0x140330E4C (MiSkipStandbyEntries.c)
 *     MiWriteStandbyLookasideEntry @ 0x140330F2C (MiWriteStandbyLookasideEntry.c)
 *     MiFindSuitableLookasideReplacement @ 0x140330F90 (MiFindSuitableLookasideReplacement.c)
 *     MiMirrorGatherBrownPages @ 0x140626CE8 (MiMirrorGatherBrownPages.c)
 *     MiMirrorReduceBlackWrites @ 0x1406280D0 (MiMirrorReduceBlackWrites.c)
 *     MiGetStandbyPageType @ 0x1406507E4 (MiGetStandbyPageType.c)
 *     MiLockStandbyOldestPage @ 0x140650D8C (MiLockStandbyOldestPage.c)
 *     MiSwapNumaStandbyPage @ 0x140651E40 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_140C68260 && a1 < qword_140C68260 + 2048;
}
