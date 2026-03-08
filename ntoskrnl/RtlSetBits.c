/*
 * XREFs of RtlSetBits @ 0x14028BC50
 * Callers:
 *     MiReduceMappedFileReadAhead @ 0x140209EEC (MiReduceMappedFileReadAhead.c)
 *     MiFindFreePageFileSpace @ 0x140209F7C (MiFindFreePageFileSpace.c)
 *     MiBuildMdlForMappedFileFault @ 0x14028B490 (MiBuildMdlForMappedFileFault.c)
 *     MiDecayNodeNowEmpty @ 0x1402D6BC0 (MiDecayNodeNowEmpty.c)
 *     MiReduceMappedFileReadBehind @ 0x1402E6370 (MiReduceMappedFileReadBehind.c)
 *     RtlFindClearBitsAndSet @ 0x14030CEE0 (RtlFindClearBitsAndSet.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuProcessDeviceEntries @ 0x14052BF84 (HalpIommuProcessDeviceEntries.c)
 *     HsaUpdateRemappingTableEntry @ 0x14052EE50 (HsaUpdateRemappingTableEntry.c)
 *     VslpVerifySessionSpace @ 0x14054ABD0 (VslpVerifySessionSpace.c)
 *     MiAttemptPageFileReductionApc @ 0x140635960 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x140636BC4 (MiExtendPagingFileMaximum.c)
 *     MiSetPageFileAllocationBits @ 0x1406391A8 (MiSetPageFileAllocationBits.c)
 *     MiStoreSetPageFileRunEvicted @ 0x14065A3EC (MiStoreSetPageFileRunEvicted.c)
 *     MiGetPrototypePteRanges @ 0x140667260 (MiGetPrototypePteRanges.c)
 *     RtlMarkExceptionHandlingPages @ 0x1406ECFC0 (RtlMarkExceptionHandlingPages.c)
 *     HvCheckBin @ 0x1406ED190 (HvCheckBin.c)
 *     SepAddLuidToIndexEntry @ 0x14070B8C0 (SepAddLuidToIndexEntry.c)
 *     MiLockdownSections @ 0x14072E408 (MiLockdownSections.c)
 *     SepGetLowBoxNumberEntry @ 0x140739A38 (SepGetLowBoxNumberEntry.c)
 *     HvpRemoveFreeCellHint @ 0x1407A6200 (HvpRemoveFreeCellHint.c)
 *     HvpAddFreeCellHint @ 0x1407A6EA4 (HvpAddFreeCellHint.c)
 *     HvpMarkDirty @ 0x1407D25D0 (HvpMarkDirty.c)
 *     MiReserveDriverPtes @ 0x1407F6D70 (MiReserveDriverPtes.c)
 *     HvpUpdateRecoveryVector @ 0x1407F9DF8 (HvpUpdateRecoveryVector.c)
 *     HalpIrtAllocateIndex @ 0x14080BD48 (HalpIrtAllocateIndex.c)
 *     CmpMountPreloadedHives @ 0x140812EF4 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x14085A328 (HalpInitializeInterruptRemappingBspLate.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140973330 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     MiCheckPatchesInSupportedSections @ 0x140A336F0 (MiCheckPatchesInSupportedSections.c)
 *     PnprMirrorMarkedPages @ 0x140A9A0AC (PnprMirrorMarkedPages.c)
 *     PopCloneRange @ 0x140A9EC7C (PopCloneRange.c)
 *     PopDiscardRange @ 0x140A9F68C (PopDiscardRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x140A9F9AC (PopGenerateUnHibernatedMdl.c)
 *     PopSetBootPhaseRange @ 0x140AA2164 (PopSetBootPhaseRange.c)
 *     ViAllocateContiguousMemory @ 0x140AC4A6C (ViAllocateContiguousMemory.c)
 *     MiReserveBootDriverPtes @ 0x140B5EC04 (MiReserveBootDriverPtes.c)
 *     MiInitializeTopLevelBitmap @ 0x140B603C4 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __stdcall RtlSetBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToSet)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToSet )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToSet;
    if ( (unsigned int)v4 + NumberToSet <= 8 )
    {
      v7 = byte_140018DE0[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_1400165E0[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140018DE0[v6];
      goto LABEL_4;
    }
  }
}
