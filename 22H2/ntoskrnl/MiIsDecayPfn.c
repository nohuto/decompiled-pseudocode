/*
 * XREFs of MiIsDecayPfn @ 0x14031034C
 * Callers:
 *     MiReplaceTransitionPage @ 0x140336380 (MiReplaceTransitionPage.c)
 *     MiMirrorGatherBrownPages @ 0x140382408 (MiMirrorGatherBrownPages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384A30 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorReduceBlackWrites @ 0x140385580 (MiMirrorReduceBlackWrites.c)
 *     MiSwapNumaStandbyPage @ 0x140551310 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_140C4E9A0 && a1 < qword_140C4E9A0 + 2048;
}
