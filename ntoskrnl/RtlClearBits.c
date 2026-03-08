/*
 * XREFs of RtlClearBits @ 0x14030DE60
 * Callers:
 *     MiReduceMappedFileReadAhead @ 0x140209EEC (MiReduceMappedFileReadAhead.c)
 *     HvpGrowDirtyVectors @ 0x1402B32C4 (HvpGrowDirtyVectors.c)
 *     MiTrimWorkingSetBuildup @ 0x1402E2A60 (MiTrimWorkingSetBuildup.c)
 *     MiReduceMappedFileReadBehind @ 0x1402E6370 (MiReduceMappedFileReadBehind.c)
 *     BgpFwFreeMemory @ 0x140382650 (BgpFwFreeMemory.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14039839C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpDmaReturnToContiguousPool @ 0x14045430C (HalpDmaReturnToContiguousPool.c)
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x1404FD200 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x140513794 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     ExtEnvClearBits @ 0x14051D050 (ExtEnvClearBits.c)
 *     HalpIommuProcessIvhdEntry @ 0x14052C244 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052C890 (HsaAllocateRemappingTableEntry.c)
 *     HsaUpdateRemappingTableEntry @ 0x14052EE50 (HsaUpdateRemappingTableEntry.c)
 *     RtlFindSetBitsAndClear @ 0x1405A60A0 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x1405A6E10 (RtlShiftLeftBitMap.c)
 *     MiAttemptPageFileReductionApc @ 0x140635960 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1406376C8 (MiFinishPageFileExtension.c)
 *     MiStoreSetPageFileRunEvicted @ 0x14065A3EC (MiStoreSetPageFileRunEvicted.c)
 *     MiFreeInitializationCode @ 0x14072A51C (MiFreeInitializationCode.c)
 *     HvFreeHivePartial @ 0x14072DB74 (HvFreeHivePartial.c)
 *     HvpAdjustBitmap @ 0x140730154 (HvpAdjustBitmap.c)
 *     SepGetLowBoxNumberEntry @ 0x140739A38 (SepGetLowBoxNumberEntry.c)
 *     HvpRemoveFreeCellHint @ 0x1407A6200 (HvpRemoveFreeCellHint.c)
 *     HvIsCellAllocated @ 0x1407B0B10 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1407B2930 (CmpCheckValueList.c)
 *     PspQueryRateControlHistory @ 0x1407E8B5C (PspQueryRateControlHistory.c)
 *     MiReleaseDriverPtes @ 0x1407F74BC (MiReleaseDriverPtes.c)
 *     HalpIrtAllocateIndex @ 0x14080BD48 (HalpIrtAllocateIndex.c)
 *     MiCreatePagefile @ 0x140835934 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140930FF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtFreeIndex @ 0x1409319B4 (HalpIrtFreeIndex.c)
 *     SmcStorePlacementGet @ 0x1409D8878 (SmcStorePlacementGet.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x140A38200 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x140A3832C (MiProcessHotPatchUndoTable.c)
 *     MiCreateSessionDriverProtos @ 0x140A4316C (MiCreateSessionDriverProtos.c)
 *     PnprMarkOrMirrorPages @ 0x140A99F48 (PnprMarkOrMirrorPages.c)
 *     PopMirrorPhysicalMemory @ 0x140AA0850 (PopMirrorPhysicalMemory.c)
 *     ViFreeToContiguousMemory @ 0x140AC5D34 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x140B60784 (MiAssignSystemVa.c)
 *     HalpPowerInitDiscard @ 0x140B6204C (HalpPowerInitDiscard.c)
 *     MiAssignSessionRanges @ 0x140B6BF00 (MiAssignSessionRanges.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
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
      v7 = ~(byte_140018DE0[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_140018DE0[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_1400165E0[v6];
      goto LABEL_4;
    }
  }
}
