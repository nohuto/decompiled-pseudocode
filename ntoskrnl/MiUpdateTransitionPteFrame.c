/*
 * XREFs of MiUpdateTransitionPteFrame @ 0x1402C6CD0
 * Callers:
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiInvalidateCollidedIos @ 0x1402C6204 (MiInvalidateCollidedIos.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiSplitDirectMapPage @ 0x14063CE6C (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x14064F7E0 (MiSwapNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x140661AA8 (MiDuplicateCloneLeaf.c)
 *     MiSwapHardFaultPage @ 0x14066A398 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdateTransitionPteFrame(__int64 a1, __int64 a2)
{
  if ( qword_140C657C0 )
  {
    if ( (a1 & 0x10) != 0 )
      a1 &= ~0x10uLL;
    else
      a1 &= ~qword_140C657C0;
  }
  return MiSwizzleInvalidPte((a1 ^ (a2 << 12)) & 0xFFFFFFFFFF000LL ^ a1);
}
