/*
 * XREFs of MiDiscardTransitionPteEx @ 0x14064E040
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiHandleTransitionFault @ 0x1402720E0 (MiHandleTransitionFault.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiCombineWithStandbyExisting @ 0x14029F020 (MiCombineWithStandbyExisting.c)
 *     MiActOnPte @ 0x1402CF06C (MiActOnPte.c)
 *     MiUnlinkStandbyPfn @ 0x1402D69FC (MiUnlinkStandbyPfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiPurgeSlabEntries @ 0x140300024 (MiPurgeSlabEntries.c)
 *     MiReservePageFileSpaceForPage @ 0x14032ECD0 (MiReservePageFileSpaceForPage.c)
 *     MiResolveProtoCombine @ 0x140345A28 (MiResolveProtoCombine.c)
 *     MiDemoteSlabEntry @ 0x1403C826C (MiDemoteSlabEntry.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x140617300 (MiWalkResetCommitPte.c)
 *     MiMirrorPerformBrownWrites @ 0x1406251F8 (MiMirrorPerformBrownWrites.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14064F264 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x14065488C (MiGetSlabStandbyPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14065DE28 (MiHandleSpecialPurposeMemoryCachedFault.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnBlink @ 0x140289900 (MiSetPfnBlink.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiDiscardTransitionPteEx(ULONG_PTR a1, __int16 a2)
{
  MiRestoreTransitionPte(a1, 0);
  MiSetPfnBlink(a1, 0LL, 1);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  return MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4), a2 | 2u);
}
