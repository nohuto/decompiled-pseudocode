/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x1402AA5C0
 * Callers:
 *     MiCoalesceFreePages @ 0x140235610 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiTradePage @ 0x140281260 (MiTradePage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402995B0 (MiUnlinkNodeLargePageHelper.c)
 *     MiWaitForInPageComplete @ 0x14029B880 (MiWaitForInPageComplete.c)
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     MiSlistGetFreePage @ 0x1402EC520 (MiSlistGetFreePage.c)
 *     MiSwapStackPageNoDpc @ 0x14031FC90 (MiSwapStackPageNoDpc.c)
 *     MiTradeTransitionPage @ 0x1403346F8 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiCreateUltraThreadContextHelper @ 0x1403546C4 (MiCreateUltraThreadContextHelper.c)
 *     MiConvertContiguousPages @ 0x140355124 (MiConvertContiguousPages.c)
 *     MiFinalizeImageHeaderPage @ 0x14035914C (MiFinalizeImageHeaderPage.c)
 *     MiReplacePageTablePage @ 0x1403634C0 (MiReplacePageTablePage.c)
 *     MiReInitializeFreeSlabPfn @ 0x1403761CC (MiReInitializeFreeSlabPfn.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384A30 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403BCC20 (MiFreeLargeInitializationCodePages.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F50CC (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F52A8 (MiConvertEntireLargePageToSmall.c)
 *     MiUnlinkNodeLargePages @ 0x1403F6768 (MiUnlinkNodeLargePages.c)
 *     MiSwitchToTransition @ 0x140539E54 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14053D6AC (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1405480C4 (MiCompleteSecureProcessFault.c)
 *     MiReuseStandbyPage @ 0x1405512A0 (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x140551310 (MiSwapNumaStandbyPage.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x140551EB4 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiSetOriginalPtePfnFromFreeList(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rdx

  if ( *a1 )
  {
    result = *a1 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    *a1 = result;
  }
  else
  {
    result = MiSwizzleInvalidPte(128LL);
    *v2 = result;
  }
  return result;
}
