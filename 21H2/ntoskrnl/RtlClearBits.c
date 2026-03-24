/*
 * XREFs of RtlClearBits @ 0x140206E00
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140266950 (MiStoreWriteModifiedPages.c)
 *     MiTrimWorkingSetBuildup @ 0x1402672B8 (MiTrimWorkingSetBuildup.c)
 *     MiStoreSetPageFileRunEvicted @ 0x1402C3C00 (MiStoreSetPageFileRunEvicted.c)
 *     MiReduceMappedFileReadBehind @ 0x1402C5E1C (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1402C90CC (MiReduceMappedFileReadAhead.c)
 *     HvpGrowDirtyVectors @ 0x140363AEC (HvpGrowDirtyVectors.c)
 *     HalpMmAllocCtxFree @ 0x140379460 (HalpMmAllocCtxFree.c)
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x1403BBD0C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x1404B70A8 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaReturnToContiguousPool @ 0x1404C8014 (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x1404CD320 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     ExtEnvClearBits @ 0x1404D5384 (ExtEnvClearBits.c)
 *     HalpIommuProcessIvhdEntry @ 0x1404E1AE0 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x1404E20C0 (HsaAllocateRemappingTableEntry.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404E48C0 (HsaUpdateRemappingTableEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x140542AD0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1405435F0 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x140587640 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x140588550 (RtlShiftLeftBitMap.c)
 *     CmpCheckValueList @ 0x1405F0460 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x1405F2B70 (HvIsCellAllocated.c)
 *     PspQueryRateControlHistory @ 0x140615DDC (PspQueryRateControlHistory.c)
 *     HvpRemoveFreeCellHint @ 0x140708130 (HvpRemoveFreeCellHint.c)
 *     SepGetLowBoxNumberEntry @ 0x1407180B8 (SepGetLowBoxNumberEntry.c)
 *     HvFreeHivePartial @ 0x14072153C (HvFreeHivePartial.c)
 *     HvpAdjustBitmap @ 0x140723198 (HvpAdjustBitmap.c)
 *     MiFreeInitializationCode @ 0x14075EC6C (MiFreeInitializationCode.c)
 *     MiReleaseDriverPtes @ 0x14075FCF0 (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x1407B7250 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864D90 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtAllocateIndex @ 0x140865984 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x140865E18 (HalpIrtFreeIndex.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1408CDB00 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x1408CDB74 (MiProcessHotPatchUndoTable.c)
 *     MiCreateSessionDriverProtos @ 0x1408DA7D8 (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x14092DF58 (SmcStorePlacementGet.c)
 *     PopMirrorPhysicalMemory @ 0x140996180 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x1409ADEC8 (PnprMarkOrMirrorPages.c)
 *     ViFreeToContiguousMemory @ 0x1409CE650 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x140A50B28 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x140A684D4 (MiAssignSessionRanges.c)
 *     HalpPowerInitDiscard @ 0x140A6949C (HalpPowerInitDiscard.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
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
      v7 = ~(byte_14001E8E0[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_14001E8E0[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14001B570[v6];
      goto LABEL_4;
    }
  }
}
