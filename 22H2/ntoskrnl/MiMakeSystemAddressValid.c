/*
 * XREFs of MiMakeSystemAddressValid @ 0x14028EA10
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140240500 (MiSetReadOnlyOnSectionView.c)
 *     MiCaptureDeleteHierarchy @ 0x14027EA70 (MiCaptureDeleteHierarchy.c)
 *     MiSplitPrivatePage @ 0x14028D630 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x14028E080 (MiProtectPrivateMemory.c)
 *     MiCopyToUserVa @ 0x14028EBB8 (MiCopyToUserVa.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiSoftFaultMappedView @ 0x1402E3540 (MiSoftFaultMappedView.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402EB224 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiFillHyperPtes @ 0x1403054DC (MiFillHyperPtes.c)
 *     MiMakeProtoLeafValid @ 0x140315C64 (MiMakeProtoLeafValid.c)
 *     MiLockPageTableRange @ 0x1403220FC (MiLockPageTableRange.c)
 *     NtLockVirtualMemory @ 0x140339070 (NtLockVirtualMemory.c)
 *     MiLockPagedAddress @ 0x14036B274 (MiLockPagedAddress.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6798 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052D2D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x14053E800 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EB0C (MiPrepareImagePagesForHotPatch.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140547730 (MiWorkingSetInfoCheckPageTable.c)
 *     MiAddPagesToEnclave @ 0x140549044 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405496C4 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549968 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AA70 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x14054B4DC (MiWriteEnclavePte.c)
 *     MiWriteAwePtes @ 0x14054E1D8 (MiWriteAwePtes.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x14055A9A4 (MiHandleForkTransitionPte.c)
 *     MiUpdateForkMaps @ 0x14055B6E0 (MiUpdateForkMaps.c)
 *     MiMapUserLargePages @ 0x14055E670 (MiMapUserLargePages.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x14020E690 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiLockLowestValidPageTable @ 0x140285C40 (MiLockLowestValidPageTable.c)
 *     MmIsAddressValidEx @ 0x14028CB70 (MmIsAddressValidEx.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiUnlockPageTable @ 0x1403B6600 (MiUnlockPageTable.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140535508 (MiFlushAllFilesystemPages.c)
 */

char __fastcall MiMakeSystemAddressValid(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        char a5)
{
  __int64 v5; // rsi
  char v6; // bp
  __int64 v8; // rbx
  _KPROCESS *Process; // r14
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v11; // rdi
  BOOL v12; // r15d
  int v13; // ebp
  unsigned __int64 valid; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  ULONG_PTR v19; // rsi
  unsigned __int64 v20; // rdx
  LONG *SharedVm; // rsi
  unsigned __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+78h] [rbp+10h]
  unsigned __int8 v25; // [rsp+88h] [rbp+20h]

  v25 = a4;
  v24 = a2;
  v5 = a2;
  v6 = a5;
  v8 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a5 & 4) != 0 )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  else
    AnyMultiplexedVm = (char *)&Process[1].ActiveProcessorsPadding[6];
  v11 = (__int64)(BugCheckParameter1 << 25) >> 16;
  v12 = v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL;
  v13 = v6 & 1;
  while ( v13 )
  {
    LOBYTE(valid) = MmIsAddressValidEx(BugCheckParameter1);
    if ( (_BYTE)valid )
      return valid;
LABEL_13:
    if ( v5 )
      MiFlushTbList(v5);
    if ( v13 )
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v25);
    else
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v25);
    v15 = MmAccessFault((v8 << 57) | 0x100000000000002LL, BugCheckParameter1, 0, 0LL);
    v19 = v15;
    if ( v15 < 0 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v19, (ULONG_PTR)Process, BugCheckParameter1);
    }
    if ( v13 )
    {
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
    }
    else
    {
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v16, v17, v18);
    }
    v5 = v24;
  }
  if ( v12 )
  {
    LODWORD(valid) = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v11, 0);
    if ( (_DWORD)valid )
    {
      if ( (_DWORD)valid == 1 )
        return valid;
      v20 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( (int)valid != 1LL )
        v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiUnlockPageTable(AnyMultiplexedVm, v20);
    }
  }
  valid = MiLockLowestValidPageTable((__int64)AnyMultiplexedVm, BugCheckParameter1, &v23);
  if ( valid != ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    MiUnlockPageTableInternal(AnyMultiplexedVm, valid);
    goto LABEL_13;
  }
  return valid;
}
