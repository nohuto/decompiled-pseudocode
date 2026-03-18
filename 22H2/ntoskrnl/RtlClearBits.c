/*
 * XREFs of RtlClearBits @ 0x14022DA20
 * Callers:
 *     MiReduceMappedFileReadAhead @ 0x140294524 (MiReduceMappedFileReadAhead.c)
 *     HvpGrowDirtyVectors @ 0x1402F5B28 (HvpGrowDirtyVectors.c)
 *     MiTrimWorkingSetBuildup @ 0x14034F7C0 (MiTrimWorkingSetBuildup.c)
 *     MiReduceMappedFileReadBehind @ 0x140352D10 (MiReduceMappedFileReadBehind.c)
 *     BgpFwFreeMemory @ 0x1403852A0 (BgpFwFreeMemory.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14039BF9C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpMmAllocCtxFree @ 0x1403A4F60 (HalpMmAllocCtxFree.c)
 *     HalpDmaReturnToContiguousPool @ 0x14045C2AC (HalpDmaReturnToContiguousPool.c)
 *     MiStoreWriteModifiedPages @ 0x14046D44A (MiStoreWriteModifiedPages.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x1404FF2E0 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x140515CC4 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     ExtEnvClearBits @ 0x14051F580 (ExtEnvClearBits.c)
 *     HalpIommuProcessIvhdEntry @ 0x14052E714 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052ED60 (HsaAllocateRemappingTableEntry.c)
 *     HsaUpdateRemappingTableEntry @ 0x140531320 (HsaUpdateRemappingTableEntry.c)
 *     RtlFindSetBitsAndClear @ 0x1405A8530 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x1405A92A0 (RtlShiftLeftBitMap.c)
 *     MiAttemptPageFileReductionApc @ 0x140637DE0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x140639B48 (MiFinishPageFileExtension.c)
 *     MiStoreSetPageFileRunEvicted @ 0x14065CA3C (MiStoreSetPageFileRunEvicted.c)
 *     MiReleaseDriverPtes @ 0x140697280 (MiReleaseDriverPtes.c)
 *     HvIsCellAllocated @ 0x1406DD400 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1406DE570 (CmpCheckValueList.c)
 *     MiFreeInitializationCode @ 0x140703BAC (MiFreeInitializationCode.c)
 *     PspQueryRateControlHistory @ 0x140706EFC (PspQueryRateControlHistory.c)
 *     HvFreeHivePartial @ 0x140707258 (HvFreeHivePartial.c)
 *     HvpRemoveFreeCellHint @ 0x14070A2D0 (HvpRemoveFreeCellHint.c)
 *     HvpAdjustBitmap @ 0x140750420 (HvpAdjustBitmap.c)
 *     SepGetLowBoxNumberEntry @ 0x1407F4F18 (SepGetLowBoxNumberEntry.c)
 *     HalpIrtAllocateIndex @ 0x140820818 (HalpIrtAllocateIndex.c)
 *     MiCreatePagefile @ 0x1408355E4 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140934000 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtFreeIndex @ 0x1409349C4 (HalpIrtFreeIndex.c)
 *     SmcStorePlacementGet @ 0x1409DB718 (SmcStorePlacementGet.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x140A3AEE0 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x140A3B00C (MiProcessHotPatchUndoTable.c)
 *     MiCreateSessionDriverProtos @ 0x140A45E40 (MiCreateSessionDriverProtos.c)
 *     PnprMarkOrMirrorPages @ 0x140A9D088 (PnprMarkOrMirrorPages.c)
 *     PopMirrorPhysicalMemory @ 0x140AA3A80 (PopMirrorPhysicalMemory.c)
 *     ViFreeToContiguousMemory @ 0x140AC9D34 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x140B63A74 (MiAssignSystemVa.c)
 *     HalpPowerInitDiscard @ 0x140B65990 (HalpPowerInitDiscard.c)
 *     MiAssignSessionRanges @ 0x140B701BC (MiAssignSessionRanges.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

void __stdcall RtlClearBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToClear )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToClear;
    if ( (unsigned int)v4 + NumberToClear <= 8 )
    {
      v7 = ~(byte_140018F40[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_140018F40[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140016E48[v6];
      goto LABEL_4;
    }
  }
}
