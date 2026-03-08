/*
 * XREFs of MiLockSpecialPurposeMemoryCachedPage @ 0x14065E278
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140271760 (MiResolveTransitionFault.c)
 *     MmPurgeSection @ 0x1402836F0 (MmPurgeSection.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiTryLockLeafPage @ 0x1402A29B8 (MiTryLockLeafPage.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 *     MiDeleteSubsectionPages @ 0x14034B8E0 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiReturnFreeZeroPage @ 0x14034E5C4 (MiReturnFreeZeroPage.c)
 *     MiReuseStandbyPage @ 0x14064F6CC (MiReuseStandbyPage.c)
 */

ULONG_PTR __fastcall MiLockSpecialPurposeMemoryCachedPage(ULONG_PTR a1, char a2)
{
  if ( (a2 & 2) != 0 )
    return a1;
  MiReuseStandbyPage(a1);
  MiReturnFreeZeroPage(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
