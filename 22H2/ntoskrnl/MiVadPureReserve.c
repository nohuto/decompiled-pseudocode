/*
 * XREFs of MiVadPureReserve @ 0x140277A50
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140215318 (MiSetReadOnlyOnSectionView.c)
 *     MiSplitPrivatePage @ 0x14021CE64 (MiSplitPrivatePage.c)
 *     MiProbeAndLockPrepare @ 0x140234D90 (MiProbeAndLockPrepare.c)
 *     MiQueryAddressState @ 0x140271AE0 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiComputeVadCharges @ 0x140289918 (MiComputeVadCharges.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
 *     MiInPagePageTable @ 0x1402E4D70 (MiInPagePageTable.c)
 *     MiDeleteEmptyPageTables @ 0x1403571A0 (MiDeleteEmptyPageTables.c)
 *     MiCommitPageTablesForVad @ 0x1406F9520 (MiCommitPageTablesForVad.c)
 *     MiReturnVadQuota @ 0x1406FB444 (MiReturnVadQuota.c)
 *     MiReturnPageTablePageCommitment @ 0x140764EA0 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPagefileBackedSection @ 0x1407DC608 (MiCommitPagefileBackedSection.c)
 *     MiAllocateChildVads @ 0x140A483EC (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadPureReserve(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x200000) != 0 )
    return (v1 & 0x70) == 0 && *(int *)(a1 + 52) >= 0;
  if ( (*(_DWORD *)(a1 + 48) & 0xF80) != 0xC00 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)(*(_QWORD *)v3 + 64LL) )
    return 0LL;
  return (*(_DWORD *)(*(_QWORD *)v3 + 56LL) >> 12) & 1;
}
