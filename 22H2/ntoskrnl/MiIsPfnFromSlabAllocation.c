/*
 * XREFs of MiIsPfnFromSlabAllocation @ 0x140283570
 * Callers:
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiFreeSmallPageFromMdl @ 0x140280524 (MiFreeSmallPageFromMdl.c)
 *     MiDeleteClusterSection @ 0x140280A60 (MiDeleteClusterSection.c)
 *     MiTradePage @ 0x140281260 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x140282D80 (MiActivePageClaimCandidate.c)
 *     MiUnlinkStandbyBatch @ 0x140283260 (MiUnlinkStandbyBatch.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     MiLockStealSystemVm @ 0x1402EB854 (MiLockStealSystemVm.c)
 *     MiFreeSlabEntries @ 0x140312360 (MiFreeSlabEntries.c)
 *     MiLockStealUserVm @ 0x140333FE4 (MiLockStealUserVm.c)
 *     MiTradeTransitionPage @ 0x1403346F8 (MiTradeTransitionPage.c)
 *     MiReplaceTransitionPage @ 0x140336380 (MiReplaceTransitionPage.c)
 *     MiMakeDriverPagesPrivate @ 0x140358454 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x14035914C (MiFinalizeImageHeaderPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384A30 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403BCC20 (MiFreeLargeInitializationCodePages.c)
 *     MiCheckContiguityTradeEligible @ 0x140546B04 (MiCheckContiguityTradeEligible.c)
 *     MiCompleteSecureProcessFault @ 0x1405480C4 (MiCompleteSecureProcessFault.c)
 *     MiIsFreeSlabPage @ 0x140553278 (MiIsFreeSlabPage.c)
 *     MmFreeSecureKernelPages @ 0x140553644 (MmFreeSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x14063D030 (MiPfPrepareReadList.c)
 *     MmFreeIndependentPages @ 0x140763BF0 (MmFreeIndependentPages.c)
 *     MiHandleBootImage @ 0x140A4FB14 (MiHandleBootImage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A65FFC (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFromSlabAllocation(__int64 a1)
{
  return byte_140C5205E
      && _bittest64((const signed __int64 *)qword_140C52588, (unsigned __int64)((a1 + 0x58000000000LL) / 48) >> 9);
}
