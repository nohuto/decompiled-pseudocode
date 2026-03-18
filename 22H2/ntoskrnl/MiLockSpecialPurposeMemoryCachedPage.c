/*
 * XREFs of MiLockSpecialPurposeMemoryCachedPage @ 0x1406608C8
 * Callers:
 *     MiLockLeafPage @ 0x140218430 (MiLockLeafPage.c)
 *     MiDeleteSubsectionPages @ 0x140218F10 (MiDeleteSubsectionPages.c)
 *     MiTryLockLeafPage @ 0x140219AE4 (MiTryLockLeafPage.c)
 *     MiResolveTransitionFault @ 0x1402623B0 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiResolveProtoPteFault @ 0x140267DB0 (MiResolveProtoPteFault.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MmPurgeSection @ 0x1402DC8D0 (MmPurgeSection.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiLockTransitionLeafPageEx @ 0x1403477B8 (MiLockTransitionLeafPageEx.c)
 * Callees:
 *     MiReturnFreeZeroPage @ 0x1402E7F74 (MiReturnFreeZeroPage.c)
 *     MiReuseStandbyPage @ 0x140651D2C (MiReuseStandbyPage.c)
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
