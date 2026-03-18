/*
 * XREFs of RtlSetBits @ 0x1402E0530
 * Callers:
 *     MiReduceMappedFileReadAhead @ 0x140294524 (MiReduceMappedFileReadAhead.c)
 *     MiFindFreePageFileSpace @ 0x1402945B4 (MiFindFreePageFileSpace.c)
 *     RtlFindClearBitsAndSet @ 0x140295D80 (RtlFindClearBitsAndSet.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402DFD70 (MiBuildMdlForMappedFileFault.c)
 *     MiDecayNodeNowEmpty @ 0x14034A440 (MiDecayNodeNowEmpty.c)
 *     MiReduceMappedFileReadBehind @ 0x140352D10 (MiReduceMappedFileReadBehind.c)
 *     HalpMmAllocCtxAlloc @ 0x14039AB30 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuProcessDeviceEntries @ 0x14052E454 (HalpIommuProcessDeviceEntries.c)
 *     HsaUpdateRemappingTableEntry @ 0x140531320 (HsaUpdateRemappingTableEntry.c)
 *     VslpVerifySessionSpace @ 0x14054D070 (VslpVerifySessionSpace.c)
 *     MiAttemptPageFileReductionApc @ 0x140637DE0 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x140639044 (MiExtendPagingFileMaximum.c)
 *     MiSetPageFileAllocationBits @ 0x14063B628 (MiSetPageFileAllocationBits.c)
 *     MiStoreSetPageFileRunEvicted @ 0x14065CA3C (MiStoreSetPageFileRunEvicted.c)
 *     MiGetPrototypePteRanges @ 0x1406698B0 (MiGetPrototypePteRanges.c)
 *     MiReserveDriverPtes @ 0x140696DF0 (MiReserveDriverPtes.c)
 *     SepAddLuidToIndexEntry @ 0x1406B781C (SepAddLuidToIndexEntry.c)
 *     MiLockdownSections @ 0x1407059B4 (MiLockdownSections.c)
 *     HvpRemoveFreeCellHint @ 0x14070A2D0 (HvpRemoveFreeCellHint.c)
 *     RtlMarkExceptionHandlingPages @ 0x140745AB0 (RtlMarkExceptionHandlingPages.c)
 *     HvCheckBin @ 0x140745C80 (HvCheckBin.c)
 *     HvpAddFreeCellHint @ 0x1407463C4 (HvpAddFreeCellHint.c)
 *     HvpMarkDirty @ 0x140747620 (HvpMarkDirty.c)
 *     SepGetLowBoxNumberEntry @ 0x1407F4F18 (SepGetLowBoxNumberEntry.c)
 *     HvpUpdateRecoveryVector @ 0x1407FEA88 (HvpUpdateRecoveryVector.c)
 *     HalpIrtAllocateIndex @ 0x140820818 (HalpIrtAllocateIndex.c)
 *     CmpLoadHiveThread @ 0x1408283D0 (CmpLoadHiveThread.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x14085E2E8 (HalpInitializeInterruptRemappingBspLate.c)
 *     CmpMountPreloadedHives @ 0x1408632CC (CmpMountPreloadedHives.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x1409763D0 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     MiCheckPatchesInSupportedSections @ 0x140A36420 (MiCheckPatchesInSupportedSections.c)
 *     PnprMirrorMarkedPages @ 0x140A9D1EC (PnprMirrorMarkedPages.c)
 *     PopCloneRange @ 0x140AA1EA4 (PopCloneRange.c)
 *     PopDiscardRange @ 0x140AA28BC (PopDiscardRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x140AA2BDC (PopGenerateUnHibernatedMdl.c)
 *     PopSetBootPhaseRange @ 0x140AA5394 (PopSetBootPhaseRange.c)
 *     ViAllocateContiguousMemory @ 0x140AC8A6C (ViAllocateContiguousMemory.c)
 *     MiReserveBootDriverPtes @ 0x140B613CC (MiReserveBootDriverPtes.c)
 *     MiInitializeTopLevelBitmap @ 0x140B636B4 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
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
      v7 = byte_140018F40[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_140016E48[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140018F40[v6];
      goto LABEL_4;
    }
  }
}
