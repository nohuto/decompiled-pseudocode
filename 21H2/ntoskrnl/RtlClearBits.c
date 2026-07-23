/*
 * XREFs of RtlClearBits @ 0x1402AB730
 * Callers:
 *     MiStoreSetPageFileRunEvicted @ 0x140242180 (MiStoreSetPageFileRunEvicted.c)
 *     MiReduceMappedFileReadBehind @ 0x1402445FC (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1402479AC (MiReduceMappedFileReadAhead.c)
 *     MiStoreWriteModifiedPages @ 0x1402548F0 (MiStoreWriteModifiedPages.c)
 *     MiTrimWorkingSetBuildup @ 0x140255258 (MiTrimWorkingSetBuildup.c)
 *     HvpGrowDirtyVectors @ 0x1402F8E1C (HvpGrowDirtyVectors.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x1403BBE7C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x1404B72E8 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaReturnToContiguousPool @ 0x1404C8254 (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x1404CD560 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     ExtEnvClearBits @ 0x1404D55C4 (ExtEnvClearBits.c)
 *     HalpIommuProcessIvhdEntry @ 0x1404E1D20 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404E2300 (HsaAllocateRemappingTableEntry.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404E4B00 (HsaUpdateRemappingTableEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x140542D10 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x140543830 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x140587870 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x140588780 (RtlShiftLeftBitMap.c)
 *     PspQueryRateControlHistory @ 0x14067FA3C (PspQueryRateControlHistory.c)
 *     SepGetLowBoxNumberEntry @ 0x1406C6708 (SepGetLowBoxNumberEntry.c)
 *     CmpCheckValueList @ 0x1406DFBC0 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x1406E22D0 (HvIsCellAllocated.c)
 *     HvFreeHivePartial @ 0x1406F8D94 (HvFreeHivePartial.c)
 *     HvpAdjustBitmap @ 0x1406FB1C4 (HvpAdjustBitmap.c)
 *     HvpRemoveFreeCellHint @ 0x14071F510 (HvpRemoveFreeCellHint.c)
 *     MiFreeInitializationCode @ 0x14075EE2C (MiFreeInitializationCode.c)
 *     MiReleaseDriverPtes @ 0x14075FEB0 (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x1407B7770 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864EF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtAllocateIndex @ 0x140865AE4 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x140865F78 (HalpIrtFreeIndex.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1408CDC60 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x1408CDCD4 (MiProcessHotPatchUndoTable.c)
 *     MiCreateSessionDriverProtos @ 0x1408DA938 (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x14092E0B8 (SmcStorePlacementGet.c)
 *     PopMirrorPhysicalMemory @ 0x140997180 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x1409AEDF8 (PnprMarkOrMirrorPages.c)
 *     ViFreeToContiguousMemory @ 0x1409CF650 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x140A51B28 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x140A694D4 (MiAssignSessionRanges.c)
 *     HalpPowerInitDiscard @ 0x140A6A49C (HalpPowerInitDiscard.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
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
      v7 = ~(byte_14001E890[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_14001E890[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14001B620[v6];
      goto LABEL_4;
    }
  }
}
