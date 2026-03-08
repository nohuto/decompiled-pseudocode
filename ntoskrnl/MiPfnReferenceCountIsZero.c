/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x1402879C0
 * Callers:
 *     MiWriteCompletePfn @ 0x140212B10 (MiWriteCompletePfn.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiUnlockImageSection @ 0x140225A90 (MiUnlockImageSection.c)
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140271760 (MiResolveTransitionFault.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiProbeUnlockPage @ 0x14027C720 (MiProbeUnlockPage.c)
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiAddPageToInsertList @ 0x1402848D0 (MiAddPageToInsertList.c)
 *     MiUnlockMdlWritePages @ 0x140284DD0 (MiUnlockMdlWritePages.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiHardFaultPageRelease @ 0x140287C78 (MiHardFaultPageRelease.c)
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiCombineWithStandbyExisting @ 0x14029F020 (MiCombineWithStandbyExisting.c)
 *     MiInsertProtectedStandbyPage @ 0x1402DFCF4 (MiInsertProtectedStandbyPage.c)
 *     MiMirrorPerformBrownWrites @ 0x1406251F8 (MiMirrorPerformBrownWrites.c)
 *     MiMarkFileOnlyPfnGood @ 0x14063BF34 (MiMarkFileOnlyPfnGood.c)
 *     MiPurgeBadFileOnlyPages @ 0x14063C678 (MiPurgeBadFileOnlyPages.c)
 *     MiNoPagesLastChance @ 0x14064E904 (MiNoPagesLastChance.c)
 *     MiSwapHardFaultPage @ 0x14066A398 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetNonResidentPteHeat @ 0x140287A90 (MiSetNonResidentPteHeat.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiReleasePageFileSpace @ 0x14034BE0C (MiReleasePageFileSpace.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPfnReferenceCountIsZero(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v4; // r9
  ULONG_PTR v5; // r10
  char v7; // cl

  v4 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v4 )
    KeBugCheckEx(0x4Eu, 7uLL, a2, v4, 0LL);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v7 = *(_BYTE *)(a1 + 35);
    if ( (v7 & 0x10) != 0 && !_bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
      *(_BYTE *)(a1 + 35) = v7 & 0xEF;
    MiReleasePageFileSpace(
      *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
      *(_QWORD *)(a1 + 16),
      1LL);
    return MiInsertPageInFreeOrZeroedList(a2, 2);
  }
  else
  {
    MiSetNonResidentPteHeat(a1 + 16, 0LL);
    return MiInsertPageInList(v5);
  }
}
