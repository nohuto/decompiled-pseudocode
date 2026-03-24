/*
 * XREFs of RtlSetBits @ 0x1402D9750
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14023D740 (MiBuildMdlForMappedFileFault.c)
 *     RtlFindClearBitsAndSet @ 0x1402509C0 (RtlFindClearBitsAndSet.c)
 *     MiStoreSetPageFileRunEvicted @ 0x14031CF70 (MiStoreSetPageFileRunEvicted.c)
 *     MiReduceMappedFileReadBehind @ 0x14031F27C (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1403225EC (MiReduceMappedFileReadAhead.c)
 *     MiGetPrototypePteRanges @ 0x1403234A8 (MiGetPrototypePteRanges.c)
 *     MiSetPageFileAllocationBits @ 0x140329EE8 (MiSetPageFileAllocationBits.c)
 *     MiFindFreePageFileSpace @ 0x140333724 (MiFindFreePageFileSpace.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C4B8 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuProcessDeviceEntries @ 0x1404E1714 (HalpIommuProcessDeviceEntries.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404E4800 (HsaUpdateRemappingTableEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x140542A10 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x140542FD0 (MiExtendPagingFileMaximum.c)
 *     SepAddLuidToIndexEntry @ 0x140603C6C (SepAddLuidToIndexEntry.c)
 *     HvpRemoveFreeCellHint @ 0x1406557C0 (HvpRemoveFreeCellHint.c)
 *     HvpMarkDirty @ 0x140655BF0 (HvpMarkDirty.c)
 *     HvpAddFreeCellHint @ 0x140656770 (HvpAddFreeCellHint.c)
 *     HvCheckBin @ 0x140656820 (HvCheckBin.c)
 *     SepGetLowBoxNumberEntry @ 0x14070F258 (SepGetLowBoxNumberEntry.c)
 *     MiLockdownSections @ 0x14075DD54 (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x14075DEE0 (RtlMarkExceptionHandlingPages.c)
 *     MiReserveDriverPtes @ 0x14075F694 (MiReserveDriverPtes.c)
 *     CmpLoadHiveThread @ 0x14079F180 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407AB024 (CmpMountPreloadedHives.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x140865780 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x1408659D4 (HalpIrtAllocateIndex.c)
 *     HvpUpdateRecoveryVector @ 0x140881E48 (HvpUpdateRecoveryVector.c)
 *     PopSetBootPhaseRange @ 0x1409969A8 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x1409969EC (PopDiscardRange.c)
 *     PopCloneRange @ 0x140996A08 (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x140996C70 (PopGenerateUnHibernatedMdl.c)
 *     PnprMirrorMarkedPages @ 0x1409AE16C (PnprMirrorMarkedPages.c)
 *     ViAllocateContiguousMemory @ 0x1409CD3BC (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x140A50CF0 (MiInitializeTopLevelBitmap.c)
 *     MiReserveBootDriverPtes @ 0x140A67334 (MiReserveBootDriverPtes.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
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
      v7 = byte_14001E790[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_14001B528[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14001E790[v6];
      goto LABEL_4;
    }
  }
}
