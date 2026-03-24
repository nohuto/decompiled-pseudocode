/*
 * XREFs of RtlSetBits @ 0x140358F70
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14023DDD0 (MiBuildMdlForMappedFileFault.c)
 *     RtlFindClearBitsAndSet @ 0x140251160 (RtlFindClearBitsAndSet.c)
 *     MiFindFreePageFileSpace @ 0x14026A714 (MiFindFreePageFileSpace.c)
 *     MiStoreSetPageFileRunEvicted @ 0x1402C3C00 (MiStoreSetPageFileRunEvicted.c)
 *     MiReduceMappedFileReadBehind @ 0x1402C5E1C (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1402C90CC (MiReduceMappedFileReadAhead.c)
 *     MiGetPrototypePteRanges @ 0x1402C9F88 (MiGetPrototypePteRanges.c)
 *     MiSetPageFileAllocationBits @ 0x1402D0BD8 (MiSetPageFileAllocationBits.c)
 *     HalpMmAllocCtxAlloc @ 0x14037CA48 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuProcessDeviceEntries @ 0x1404E17D4 (HalpIommuProcessDeviceEntries.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404E48C0 (HsaUpdateRemappingTableEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x140542AD0 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x140543090 (MiExtendPagingFileMaximum.c)
 *     SepAddLuidToIndexEntry @ 0x140604128 (SepAddLuidToIndexEntry.c)
 *     HvpRemoveFreeCellHint @ 0x140708130 (HvpRemoveFreeCellHint.c)
 *     HvpMarkDirty @ 0x140708560 (HvpMarkDirty.c)
 *     HvpAddFreeCellHint @ 0x1407090E0 (HvpAddFreeCellHint.c)
 *     HvCheckBin @ 0x140709190 (HvCheckBin.c)
 *     SepGetLowBoxNumberEntry @ 0x1407180B8 (SepGetLowBoxNumberEntry.c)
 *     MiLockdownSections @ 0x14075E564 (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x14075E6F0 (RtlMarkExceptionHandlingPages.c)
 *     MiReserveDriverPtes @ 0x14075FEA4 (MiReserveDriverPtes.c)
 *     CmpLoadHiveThread @ 0x14079ED50 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407AABF4 (CmpMountPreloadedHives.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x140865730 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x140865984 (HalpIrtAllocateIndex.c)
 *     HvpUpdateRecoveryVector @ 0x140881DF8 (HvpUpdateRecoveryVector.c)
 *     PopSetBootPhaseRange @ 0x1409969B8 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x1409969FC (PopDiscardRange.c)
 *     PopCloneRange @ 0x140996A18 (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x140996C80 (PopGenerateUnHibernatedMdl.c)
 *     PnprMirrorMarkedPages @ 0x1409AE02C (PnprMirrorMarkedPages.c)
 *     ViAllocateContiguousMemory @ 0x1409CD3AC (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x140A50CF0 (MiInitializeTopLevelBitmap.c)
 *     MiReserveBootDriverPtes @ 0x140A67334 (MiReserveBootDriverPtes.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
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
      v7 = byte_14001E8E0[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_14001B570[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14001E8E0[v6];
      goto LABEL_4;
    }
  }
}
