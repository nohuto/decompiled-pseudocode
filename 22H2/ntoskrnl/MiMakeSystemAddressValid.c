/*
 * XREFs of MiMakeSystemAddressValid @ 0x140277310
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140215318 (MiSetReadOnlyOnSectionView.c)
 *     MiSoftFaultMappedView @ 0x140217EB0 (MiSoftFaultMappedView.c)
 *     MiCopyToUserVa @ 0x14021CBFC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14021CE64 (MiSplitPrivatePage.c)
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiCaptureDeleteHierarchy @ 0x14028AB80 (MiCaptureDeleteHierarchy.c)
 *     MiProtectPrivateMemory @ 0x1402A2760 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
 *     MiLockPagedAddress @ 0x1402ED4F0 (MiLockPagedAddress.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F155C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiFillHyperPtes @ 0x140348F40 (MiFillHyperPtes.c)
 *     MiMakeProtoLeafValid @ 0x140361A64 (MiMakeProtoLeafValid.c)
 *     MiInsertViewOfPhysicalSection @ 0x140630CA0 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1406313EC (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x140631764 (MiVadRangeIsIoSpace.c)
 *     MiCommitHotPatchTable @ 0x140642318 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140642938 (MiPrepareImagePagesForHotPatch.c)
 *     MiAddPagesToEnclave @ 0x140646A80 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1406472A8 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1406482B8 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x140648BF8 (MiWriteEnclavePte.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1406493A0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiWriteAwePtes @ 0x14064C62C (MiWriteAwePtes.c)
 *     MiLockPageTableRange @ 0x14064D0C4 (MiLockPageTableRange.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1406649B8 (MiHandleForkTransitionPte.c)
 *     MiUpdateForkMaps @ 0x1406654A0 (MiUpdateForkMaps.c)
 *     MiMapUserLargePages @ 0x140668E30 (MiMapUserLargePages.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x140237260 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MiLockLowestValidPageTable @ 0x14025A170 (MiLockLowestValidPageTable.c)
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140286D54 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A1D0 (MiUnlockWorkingSetExclusive.c)
 *     MmIsAddressValidEx @ 0x1402E5FB0 (MmIsAddressValidEx.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiFlushAllFilesystemPages @ 0x140629304 (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiMakeSystemAddressValid(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        int a5)
{
  __int64 v7; // r9
  char v8; // si
  _KPROCESS *Process; // r13
  char *AnyMultiplexedVm; // r15
  int v11; // ebp
  unsigned __int64 v12; // rbx
  BOOL v13; // r14d
  int v14; // esi
  int v15; // eax
  unsigned __int64 valid; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  ULONG_PTR SharedVm; // rdi
  unsigned __int64 v23; // rdx
  _DWORD v24[28]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v25; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+E8h] [rbp+10h]
  unsigned __int8 v27; // [rsp+F8h] [rbp+20h]

  v27 = a4;
  v26 = a2;
  memset(v24, 0, 0x68uLL);
  v8 = a5;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a5 & 4) != 0 )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  else
    AnyMultiplexedVm = (char *)&Process[1].ActiveProcessors.StaticBitmap[26];
  v11 = v8 & 8;
  if ( (v8 & 8) != 0 )
    LOBYTE(v24[0]) = 8;
  else
    LOBYTE(v24[0]) = 7;
  v24[10] = a3;
  v12 = (__int64)(BugCheckParameter1 << 25) >> 16;
  v13 = v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL;
  v14 = v8 & 1;
  do
  {
    if ( v14 )
    {
      if ( (unsigned __int8)MmIsAddressValidEx(BugCheckParameter1) )
        return 0LL;
    }
    else
    {
      if ( v13 )
      {
        v15 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, (__int64)(BugCheckParameter1 << 25) >> 16, 0);
        if ( v15 )
        {
          if ( v15 == 1 )
            return 0LL;
          v23 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          while ( v15 != 1LL )
            v23 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiUnlockPageTableInternal(AnyMultiplexedVm, v23);
        }
      }
      valid = MiLockLowestValidPageTable((__int64)AnyMultiplexedVm, BugCheckParameter1, &v25, v7);
      if ( valid == ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        return 0LL;
      MiUnlockPageTableInternal(AnyMultiplexedVm, valid);
    }
    if ( v26 )
      MiFlushTbList(v26);
    if ( v14 )
      MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v27);
    else
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v27);
    v18 = MmAccessFault(2uLL, BugCheckParameter1, 0, (ULONG_PTR)v24 + 1);
    SharedVm = v18;
    a5 = v18;
    if ( v18 < 0 && !v11 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, SharedVm, (ULONG_PTR)Process, BugCheckParameter1);
    }
    if ( v14 )
    {
      SharedVm = MiGetSharedVm(AnyMultiplexedVm, v19, v20, v21);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      LODWORD(SharedVm) = a5;
    }
    else
    {
      MiLockWorkingSetShared(AnyMultiplexedVm);
    }
  }
  while ( !v11 || (SharedVm & 0x80000000) == 0LL );
  return (unsigned int)SharedVm;
}
