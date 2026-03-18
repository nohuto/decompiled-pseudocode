/*
 * XREFs of MiUpdateTransitionPteFrame @ 0x140330A1C
 * Callers:
 *     MiMigratePfn @ 0x140262FC0 (MiMigratePfn.c)
 *     MiInvalidateCollidedIos @ 0x14032FF50 (MiInvalidateCollidedIos.c)
 *     MiReplaceTransitionPage @ 0x1403304D0 (MiReplaceTransitionPage.c)
 *     MiSplitDirectMapPage @ 0x14063F2D4 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x140651E40 (MiSwapNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x1406640F8 (MiDuplicateCloneLeaf.c)
 *     MiSwapHardFaultPage @ 0x14066C9E8 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdateTransitionPteFrame(__int64 a1, __int64 a2)
{
  if ( qword_140C65C40 )
  {
    if ( (a1 & 0x10) != 0 )
      a1 &= ~0x10uLL;
    else
      a1 &= ~qword_140C65C40;
  }
  return MiSwizzleInvalidPte((a1 ^ (a2 << 12)) & 0xFFFFFFFFFF000LL ^ a1);
}
