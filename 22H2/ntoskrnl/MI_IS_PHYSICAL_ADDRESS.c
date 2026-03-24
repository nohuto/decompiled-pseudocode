/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x14029D260
 * Callers:
 *     MiProbeLockFrame @ 0x14020AC90 (MiProbeLockFrame.c)
 *     MiLockPagableImageSection @ 0x14029CB80 (MiLockPagableImageSection.c)
 *     MiMappingHasIoTracker @ 0x14029D1D0 (MiMappingHasIoTracker.c)
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     MiMappingHasIoReferences @ 0x1402E8FE4 (MiMappingHasIoReferences.c)
 *     MmUnmapIoSpace @ 0x1402EA680 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1402EA790 (MiZeroAndFlushPtes.c)
 *     MiGetPhysicalAddress @ 0x140301054 (MiGetPhysicalAddress.c)
 *     MiSetSystemCodeProtection @ 0x140357D78 (MiSetSystemCodeProtection.c)
 *     MmSetPageProtection @ 0x1403796F0 (MmSetPageProtection.c)
 *     MiCountSystemImageCommitment @ 0x14039E594 (MiCountSystemImageCommitment.c)
 *     MiPfnRangeIsZero @ 0x1403B9588 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B9BC8 (MiDemoteValidLargePageOneLevel.c)
 *     MmProtectMdlSystemAddress @ 0x1405320F0 (MmProtectMdlSystemAddress.c)
 *     MmReplaceImportEntry @ 0x14053585C (MmReplaceImportEntry.c)
 *     MiAddTriageDumpPtes @ 0x1405381AC (MiAddTriageDumpPtes.c)
 *     MiDbgReleaseAddress @ 0x140545FFC (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1405465FC (MiDbgWriteCheck.c)
 *     MiUpdateForkMaps @ 0x14055B6E0 (MiUpdateForkMaps.c)
 *     MiImagePagable @ 0x1406FE41C (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1406FE4F0 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1406FE5A0 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406FE6A0 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MiHandleDriverNonPagedSections @ 0x14075C100 (MiHandleDriverNonPagedSections.c)
 *     MiFinalizeImageRetpolineState @ 0x14075C478 (MiFinalizeImageRetpolineState.c)
 *     MiFreeDriverInitialization @ 0x14075E3A4 (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x14075E45C (MiFreeInitializationCode.c)
 *     MiDisablePagingOfDriver @ 0x14075E690 (MiDisablePagingOfDriver.c)
 *     MiUnlockDriverCode @ 0x140771384 (MiUnlockDriverCode.c)
 *     MiBackSystemImageWithPagefile @ 0x1407809E8 (MiBackSystemImageWithPagefile.c)
 *     MiInitializeShadowPageTable @ 0x1407A0798 (MiInitializeShadowPageTable.c)
 *     MiProtectSystemImage @ 0x1407A1ABC (MiProtectSystemImage.c)
 *     MiPrepareDriverPatchState @ 0x1408C4D8C (MiPrepareDriverPatchState.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C9248 (MiApplyHotPatchToLoadedDriver.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4F9F0 (MiReloadBootLoadedDrivers.c)
 *     MiHandleBootImage @ 0x140A4FB14 (MiHandleBootImage.c)
 *     MiFreeBootDriverPages @ 0x140A50050 (MiFreeBootDriverPages.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140A506C4 (MiApplyImportOptimizationToBootDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A65FFC (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeDriverPtes @ 0x140A66EF8 (MiInitializeDriverPtes.c)
 *     MiCheckLargePageOk @ 0x140A67C78 (MiCheckLargePageOk.c)
 *     MmDiscardDriverSection @ 0x140A92E70 (MmDiscardDriverSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PHYSICAL_ADDRESS(unsigned __int64 a1)
{
  unsigned int v1; // r10d
  __int64 v2; // rdx
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v7; // rax
  char v8; // r9
  __int64 v9; // [rsp+0h] [rbp-30h]
  unsigned __int64 v10; // [rsp+8h] [rbp-28h]
  unsigned __int64 v11; // [rsp+10h] [rbp-20h]
  unsigned __int64 v12; // [rsp+18h] [rbp-18h]
  __int64 v13; // [rsp+20h] [rbp-10h]

  v1 = 4;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 4LL;
  while ( 1 )
  {
    v3 = *(&v9 + v2--);
    --v1;
    v4 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL
      && v3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
    {
      if ( (v4 & 1) == 0 )
        return 0LL;
      if ( (v4 & 0x20) == 0 || (v4 & 0x42) == 0 )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v7 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
          v8 = v4 | 0x20;
          if ( (v7 & 0x20) == 0 )
            v8 = v4;
          LOBYTE(v4) = v8;
          if ( (v7 & 0x42) != 0 )
            LOBYTE(v4) = v8 | 0x42;
        }
      }
    }
    if ( (v4 & 1) == 0 )
      return 0LL;
    if ( (v4 & 0x80u) != 0LL )
      break;
    if ( v2 == 1 )
      return 0LL;
  }
  return v1;
}
