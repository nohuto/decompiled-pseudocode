/*
 * XREFs of RtlSetBits @ 0x140363CC0
 * Callers:
 *     MiStoreSetPageFileRunEvicted @ 0x140242180 (MiStoreSetPageFileRunEvicted.c)
 *     MiReduceMappedFileReadBehind @ 0x1402445FC (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1402479AC (MiReduceMappedFileReadAhead.c)
 *     MiGetPrototypePteRanges @ 0x140248878 (MiGetPrototypePteRanges.c)
 *     MiSetPageFileAllocationBits @ 0x14024F068 (MiSetPageFileAllocationBits.c)
 *     MiFindFreePageFileSpace @ 0x1402586B4 (MiFindFreePageFileSpace.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402E2620 (MiBuildMdlForMappedFileFault.c)
 *     RtlFindClearBitsAndSet @ 0x1402F5970 (RtlFindClearBitsAndSet.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuProcessDeviceEntries @ 0x1404E1A14 (HalpIommuProcessDeviceEntries.c)
 *     HsaUpdateRemappingTableEntry @ 0x1404E4B00 (HsaUpdateRemappingTableEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x140542D10 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x1405432D0 (MiExtendPagingFileMaximum.c)
 *     SepGetLowBoxNumberEntry @ 0x1406C6708 (SepGetLowBoxNumberEntry.c)
 *     SepAddLuidToIndexEntry @ 0x1406F3858 (SepAddLuidToIndexEntry.c)
 *     HvpRemoveFreeCellHint @ 0x14071F510 (HvpRemoveFreeCellHint.c)
 *     HvpMarkDirty @ 0x14071F940 (HvpMarkDirty.c)
 *     HvpAddFreeCellHint @ 0x1407204C0 (HvpAddFreeCellHint.c)
 *     HvCheckBin @ 0x140720570 (HvCheckBin.c)
 *     MiLockdownSections @ 0x14075E724 (MiLockdownSections.c)
 *     RtlMarkExceptionHandlingPages @ 0x14075E8B0 (RtlMarkExceptionHandlingPages.c)
 *     MiReserveDriverPtes @ 0x140760064 (MiReserveDriverPtes.c)
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407AADF4 (CmpMountPreloadedHives.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x140865890 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x140865AE4 (HalpIrtAllocateIndex.c)
 *     HvpUpdateRecoveryVector @ 0x140881F58 (HvpUpdateRecoveryVector.c)
 *     PopSetBootPhaseRange @ 0x1409979B8 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x1409979FC (PopDiscardRange.c)
 *     PopCloneRange @ 0x140997A18 (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x140997C80 (PopGenerateUnHibernatedMdl.c)
 *     PnprMirrorMarkedPages @ 0x1409AEF5C (PnprMirrorMarkedPages.c)
 *     ViAllocateContiguousMemory @ 0x1409CE3AC (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x140A51CF0 (MiInitializeTopLevelBitmap.c)
 *     MiReserveBootDriverPtes @ 0x140A68334 (MiReserveBootDriverPtes.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
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
      v7 = byte_14001E890[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_14001B620[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14001E890[v6];
      goto LABEL_4;
    }
  }
}
