/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x14032E710
 * Callers:
 *     MiProbeLockFrame @ 0x140268ED0 (MiProbeLockFrame.c)
 *     MiMappingHasIoReferences @ 0x14029B1A0 (MiMappingHasIoReferences.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     MiMappingHasIoTracker @ 0x14029B344 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x14029B3BC (MiZeroAndFlushPtes.c)
 *     MiCountSystemImageCommitment @ 0x1402B0C2C (MiCountSystemImageCommitment.c)
 *     MmProtectDriverSection @ 0x140302930 (MmProtectDriverSection.c)
 *     MiGetPhysicalAddress @ 0x14030C890 (MiGetPhysicalAddress.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MiDbgReleaseAddress @ 0x140387814 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1403878D8 (MiDbgWriteCheck.c)
 *     MiPfnRangeIsZero @ 0x14038B144 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038B664 (MiDemoteValidLargePageOneLevel.c)
 *     MmSetPageProtection @ 0x1403BCCE0 (MmSetPageProtection.c)
 *     MmProtectMdlSystemAddress @ 0x14061C990 (MmProtectMdlSystemAddress.c)
 *     MiReplaceImportEntry @ 0x14062A2A0 (MiReplaceImportEntry.c)
 *     MiAddTriageDumpPtes @ 0x14062D454 (MiAddTriageDumpPtes.c)
 *     MiUpdateForkMaps @ 0x140662E50 (MiUpdateForkMaps.c)
 *     MiHandleDriverNonPagedSections @ 0x140726FEC (MiHandleDriverNonPagedSections.c)
 *     MmPageEntireDriver @ 0x140729DE0 (MmPageEntireDriver.c)
 *     MiFreeDriverInitialization @ 0x140729EFC (MiFreeDriverInitialization.c)
 *     MiDisablePagingOfDriver @ 0x140729FA4 (MiDisablePagingOfDriver.c)
 *     MiFreeInitializationCode @ 0x14072A51C (MiFreeInitializationCode.c)
 *     MiImagePagable @ 0x14072A7E0 (MiImagePagable.c)
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MmChangeImageProtection @ 0x1407D1E10 (MmChangeImageProtection.c)
 *     MmLockPagableDataSection @ 0x1407EBF70 (MmLockPagableDataSection.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiProtectSystemImage @ 0x14080A600 (MiProtectSystemImage.c)
 *     MiInitializeShadowPageTable @ 0x14080B974 (MiInitializeShadowPageTable.c)
 *     MiUnlockDriverCode @ 0x14084EDE0 (MiUnlockDriverCode.c)
 *     MiBackSystemImageWithPagefile @ 0x14086FAA8 (MiBackSystemImageWithPagefile.c)
 *     MiPrepareDriverPatchState @ 0x140A28934 (MiPrepareDriverPatchState.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A323A8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiCheckLargePageOk @ 0x140B38B30 (MiCheckLargePageOk.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140B38DFC (MiInitializeBootLoadedDriverPfns.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140B3A948 (MiApplyImportOptimizationToBootDrivers.c)
 *     MiApplyFunctionOverrideToBootDrivers @ 0x140B3AAB0 (MiApplyFunctionOverrideToBootDrivers.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B3ACB4 (MiApplyBootLoadedDriversFixups.c)
 *     MiInitializeDriverImages @ 0x140B3B090 (MiInitializeDriverImages.c)
 *     MiHandleBootImage @ 0x140B3BA98 (MiHandleBootImage.c)
 *     MiFreeBootDriverPages @ 0x140B3C044 (MiFreeBootDriverPages.c)
 *     MiInitializeDriverPtes @ 0x140B5E7C8 (MiInitializeDriverPtes.c)
 *     MiInitializeNonPagedPool @ 0x140B5EDA4 (MiInitializeNonPagedPool.c)
 *     MmDiscardDriverSection @ 0x140B71424 (MmDiscardDriverSection.c)
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
      && (MiFlags & 0x600000) != 0
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
