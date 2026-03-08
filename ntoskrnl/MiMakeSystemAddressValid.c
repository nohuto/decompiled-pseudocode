/*
 * XREFs of MiMakeSystemAddressValid @ 0x140321770
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14020AAF0 (MiSetReadOnlyOnSectionView.c)
 *     MiSplitPrivatePage @ 0x14021114C (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140211730 (MiCopyToUserVa.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14029F4D8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiLockPagedAddress @ 0x1402A1684 (MiLockPagedAddress.c)
 *     MiFillHyperPtes @ 0x1402DEAE0 (MiFillHyperPtes.c)
 *     MiMakeProtoLeafValid @ 0x1402F70B0 (MiMakeProtoLeafValid.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiCaptureDeleteHierarchy @ 0x140333890 (MiCaptureDeleteHierarchy.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     MiSoftFaultMappedView @ 0x14034A9A0 (MiSoftFaultMappedView.c)
 *     MiInsertViewOfPhysicalSection @ 0x14062E820 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14062EF5C (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x14062F2D4 (MiVadRangeIsIoSpace.c)
 *     MiCommitHotPatchTable @ 0x14063FEB8 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406404D8 (MiPrepareImagePagesForHotPatch.c)
 *     MiAddPagesToEnclave @ 0x14064445C (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140644C84 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140645C9C (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1406465DC (MiWriteEnclavePte.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140646D84 (MiWorkingSetInfoCheckPageTable.c)
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 *     MiLockPageTableRange @ 0x14064AAA8 (MiLockPageTableRange.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 *     MiUpdateForkMaps @ 0x140662E50 (MiUpdateForkMaps.c)
 *     MiMapUserLargePages @ 0x1406667E0 (MiMapUserLargePages.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiLockLowestValidPageTable @ 0x140225DB0 (MiLockLowestValidPageTable.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x140269C50 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiFlushAllFilesystemPages @ 0x140626E68 (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiMakeSystemAddressValid(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        int a5)
{
  char v7; // si
  _KPROCESS *Process; // r13
  char *AnyMultiplexedVm; // r15
  int v10; // ebp
  unsigned __int64 v11; // rbx
  BOOL v12; // r14d
  int v13; // esi
  int v14; // eax
  unsigned __int64 valid; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  ULONG_PTR SharedVm; // rdi
  unsigned __int64 v22; // rdx
  _DWORD v23[28]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v24; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+10h]
  unsigned __int8 v26; // [rsp+F8h] [rbp+20h]

  v26 = a4;
  v25 = a2;
  memset(v23, 0, 0x68uLL);
  v7 = a5;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a5 & 4) != 0 )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  else
    AnyMultiplexedVm = (char *)&Process[1].ActiveProcessors.StaticBitmap[26];
  v10 = v7 & 8;
  if ( (v7 & 8) != 0 )
    LOBYTE(v23[0]) = 8;
  else
    LOBYTE(v23[0]) = 7;
  v23[10] = a3;
  v11 = (__int64)(BugCheckParameter1 << 25) >> 16;
  v12 = v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL;
  v13 = v7 & 1;
  do
  {
    if ( v13 )
    {
      if ( (unsigned __int8)MmIsAddressValidEx(BugCheckParameter1) )
        return 0LL;
    }
    else
    {
      if ( v12 )
      {
        v14 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, (__int64)(BugCheckParameter1 << 25) >> 16, 0);
        if ( v14 )
        {
          if ( v14 == 1 )
            return 0LL;
          v22 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          while ( v14 != 1LL )
            v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v22);
        }
      }
      valid = MiLockLowestValidPageTable((__int64)AnyMultiplexedVm, BugCheckParameter1, &v24);
      if ( valid == ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        return 0LL;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, valid);
    }
    if ( v25 )
      MiFlushTbList(v25);
    if ( v13 )
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v26);
    else
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v26);
    v17 = MmAccessFault(2uLL, BugCheckParameter1, 0, (ULONG_PTR)v23 + 1);
    SharedVm = v17;
    a5 = v17;
    if ( v17 < 0 && !v10 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, SharedVm, (ULONG_PTR)Process, BugCheckParameter1);
    }
    if ( v13 )
    {
      SharedVm = MiGetSharedVm(AnyMultiplexedVm, v18, v19, v20);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      LODWORD(SharedVm) = a5;
    }
    else
    {
      MiLockWorkingSetShared(AnyMultiplexedVm);
    }
  }
  while ( !v10 || (SharedVm & 0x80000000) == 0LL );
  return (unsigned int)SharedVm;
}
