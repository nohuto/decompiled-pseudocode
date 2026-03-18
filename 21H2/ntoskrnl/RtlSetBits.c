/*
 * XREFs of RtlSetBits @ 0x1402E4C80
 * Callers:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     MiReduceMappedFileReadBehind @ 0x140246CCC (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1402482BC (MiReduceMappedFileReadAhead.c)
 *     MiGetPrototypePteRanges @ 0x140250D70 (MiGetPrototypePteRanges.c)
 *     MiFindFreePageFileSpace @ 0x14025F6B0 (MiFindFreePageFileSpace.c)
 *     MiDecayNodeNowEmpty @ 0x1402E4BF0 (MiDecayNodeNowEmpty.c)
 *     MiBuildMdlForMappedFileFault @ 0x140313DE0 (MiBuildMdlForMappedFileFault.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140386D24 (MiStoreSetPageFileRunEvicted.c)
 *     MiSetPageFileAllocationBits @ 0x140389840 (MiSetPageFileAllocationBits.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuProcessDeviceEntries @ 0x140530540 (HalpIommuProcessDeviceEntries.c)
 *     HsaUpdateRemappingTableEntry @ 0x140533520 (HsaUpdateRemappingTableEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x14059B0B0 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x14059BFB0 (MiExtendPagingFileMaximum.c)
 *     SepAddLuidToIndexEntry @ 0x140672348 (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140696750 (SepGetLowBoxNumberEntry.c)
 *     HvpMarkDirty @ 0x14071F430 (HvpMarkDirty.c)
 *     MiLockdownSections @ 0x1407607D8 (MiLockdownSections.c)
 *     MiReserveDriverPtes @ 0x1407621C0 (MiReserveDriverPtes.c)
 *     RtlMarkExceptionHandlingPages @ 0x14079C0D4 (RtlMarkExceptionHandlingPages.c)
 *     HvpRemoveFreeCellHint @ 0x14079C290 (HvpRemoveFreeCellHint.c)
 *     HvpAddFreeCellHint @ 0x14079C578 (HvpAddFreeCellHint.c)
 *     HvCheckBin @ 0x14079C640 (HvCheckBin.c)
 *     CmpMountPreloadedHives @ 0x14083200C (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x1409098C0 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x140909B14 (HalpIrtAllocateIndex.c)
 *     HvpUpdateRecoveryVector @ 0x140925A18 (HvpUpdateRecoveryVector.c)
 *     MiCheckPatchesInSupportedSections @ 0x140972A10 (MiCheckPatchesInSupportedSections.c)
 *     PopSetBootPhaseRange @ 0x140A4F990 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x140A4F9D8 (PopDiscardRange.c)
 *     PopCloneRange @ 0x140A4FAC4 (PopCloneRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x140A50B90 (PopGenerateUnHibernatedMdl.c)
 *     PnprMirrorMarkedPages @ 0x140A6849C (PnprMirrorMarkedPages.c)
 *     ViAllocateContiguousMemory @ 0x140A870B0 (ViAllocateContiguousMemory.c)
 *     MiInitializeTopLevelBitmap @ 0x140B07614 (MiInitializeTopLevelBitmap.c)
 *     MiReserveBootDriverPtes @ 0x140B1AC34 (MiReserveBootDriverPtes.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
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
      v7 = byte_140018DF0[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_140015C40[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140018DF0[v6];
      goto LABEL_4;
    }
  }
}
