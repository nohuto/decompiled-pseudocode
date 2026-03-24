/*
 * XREFs of RtlClearBits @ 0x140206DC0
 * Callers:
 *     MiStoreSetPageFileRunEvicted @ 0x14031CF70 (MiStoreSetPageFileRunEvicted.c)
 *     MiReduceMappedFileReadBehind @ 0x14031F27C (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1403225EC (MiReduceMappedFileReadAhead.c)
 *     MiStoreWriteModifiedPages @ 0x14032F960 (MiStoreWriteModifiedPages.c)
 *     MiTrimWorkingSetBuildup @ 0x1403302C8 (MiTrimWorkingSetBuildup.c)
 *     HvpGrowDirtyVectors @ 0x1403631BC (HvpGrowDirtyVectors.c)
 *     HalpMmAllocCtxFree @ 0x140378ED0 (HalpMmAllocCtxFree.c)
 *     BgpFwFreeMemory @ 0x14039B660 (BgpFwFreeMemory.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x1403BB6AC (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x1404B6FF8 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaReturnToContiguousPool @ 0x1404C7F54 (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x1404CD260 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     ExtEnvClearBits @ 0x1404D52C4 (ExtEnvClearBits.c)
 *     HalpIommuProcessIvhdEntry @ 0x1404E1A20 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404E2000 (HsaAllocateRemappingTableEntry.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404E4800 (HsaUpdateRemappingTableEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x140542A10 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x140543530 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x140587580 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x140588490 (RtlShiftLeftBitMap.c)
 *     CmpCheckValueList @ 0x1405F0460 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x1405F2B70 (HvIsCellAllocated.c)
 *     PspQueryRateControlHistory @ 0x14061623C (PspQueryRateControlHistory.c)
 *     HvpRemoveFreeCellHint @ 0x1406557C0 (HvpRemoveFreeCellHint.c)
 *     SepGetLowBoxNumberEntry @ 0x14070F258 (SepGetLowBoxNumberEntry.c)
 *     HvFreeHivePartial @ 0x14072090C (HvFreeHivePartial.c)
 *     HvpAdjustBitmap @ 0x140722568 (HvpAdjustBitmap.c)
 *     MiFreeInitializationCode @ 0x14075E45C (MiFreeInitializationCode.c)
 *     MiReleaseDriverPtes @ 0x14075F4E0 (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x1407B7A10 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864DE0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtAllocateIndex @ 0x1408659D4 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x140865E68 (HalpIrtFreeIndex.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1408CDB50 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x1408CDBC4 (MiProcessHotPatchUndoTable.c)
 *     MiCreateSessionDriverProtos @ 0x1408DA828 (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x14092DFA8 (SmcStorePlacementGet.c)
 *     PopMirrorPhysicalMemory @ 0x140996170 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x1409AE008 (PnprMarkOrMirrorPages.c)
 *     ViFreeToContiguousMemory @ 0x1409CE660 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x140A50B28 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x140A684D4 (MiAssignSessionRanges.c)
 *     HalpPowerInitDiscard @ 0x140A6949C (HalpPowerInitDiscard.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
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
      v7 = ~(byte_14001E790[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_14001E790[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14001B528[v6];
      goto LABEL_4;
    }
  }
}
