/*
 * XREFs of MiDiscardTransitionPteEx @ 0x140388794
 * Callers:
 *     MiHandleTransitionFault @ 0x140217410 (MiHandleTransitionFault.c)
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiActOnPte @ 0x14023BF60 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x14023CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiCopyDataPageToImagePage @ 0x140284A68 (MiCopyDataPageToImagePage.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MiUnlinkStandbyPfn @ 0x140307F30 (MiUnlinkStandbyPfn.c)
 *     MiFreeSlabEntries @ 0x140312360 (MiFreeSlabEntries.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403326D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConvertStandbyToProto @ 0x1403668C8 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x14036A484 (MiResolveProtoCombine.c)
 *     MiMirrorPerformBrownWrites @ 0x140381BF8 (MiMirrorPerformBrownWrites.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384A30 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x14052CB30 (MiWalkResetCommitPte.c)
 *     MiGetSlabStandbyPage @ 0x14055300C (MiGetSlabStandbyPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnBlink @ 0x1402987B0 (MiSetPfnBlink.c)
 *     MiRestoreTransitionPte @ 0x1402FB620 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiDiscardTransitionPteEx(ULONG_PTR a1, __int16 a2)
{
  MiRestoreTransitionPte(a1, 0);
  MiSetPfnBlink(a1, 0LL, 1);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  return MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x58000000000LL) / 48, a2 | 2u);
}
