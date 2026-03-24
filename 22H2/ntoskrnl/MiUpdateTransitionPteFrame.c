/*
 * XREFs of MiUpdateTransitionPteFrame @ 0x1403369F0
 * Callers:
 *     MiMigratePfn @ 0x1402185B0 (MiMigratePfn.c)
 *     MiInvalidateCollidedIos @ 0x14032371C (MiInvalidateCollidedIos.c)
 *     MiReplaceTransitionPage @ 0x140336380 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384A30 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSplitDirectMapPage @ 0x14054207C (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x140551310 (MiSwapNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x14055A174 (MiDuplicateCloneLeaf.c)
 *     MiSwapHardFaultPage @ 0x1405636B0 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdateTransitionPteFrame(__int64 a1, __int64 a2)
{
  if ( qword_140C4DF40 )
  {
    if ( (a1 & 0x10) != 0 )
      a1 &= ~0x10uLL;
    else
      a1 &= ~qword_140C4DF40;
  }
  return MiSwizzleInvalidPte((a1 ^ (a2 << 12)) & 0xFFFFFFFFF000LL ^ a1);
}
