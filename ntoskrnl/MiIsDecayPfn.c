/*
 * XREFs of MiIsDecayPfn @ 0x140319ED0
 * Callers:
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiSkipStandbyEntries @ 0x1402C7100 (MiSkipStandbyEntries.c)
 *     MiWriteStandbyLookasideEntry @ 0x1402C71E0 (MiWriteStandbyLookasideEntry.c)
 *     MiFindSuitableLookasideReplacement @ 0x1402C7240 (MiFindSuitableLookasideReplacement.c)
 *     MiSynchronizeFastPageInsert @ 0x140319210 (MiSynchronizeFastPageInsert.c)
 *     MiMirrorGatherBrownPages @ 0x140624848 (MiMirrorGatherBrownPages.c)
 *     MiMirrorReduceBlackWrites @ 0x140625C30 (MiMirrorReduceBlackWrites.c)
 *     MiGetStandbyPageType @ 0x14064E190 (MiGetStandbyPageType.c)
 *     MiLockStandbyOldestPage @ 0x14064E72C (MiLockStandbyOldestPage.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_140C67DE0 && a1 < qword_140C67DE0 + 2048;
}
