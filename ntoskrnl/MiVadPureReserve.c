/*
 * XREFs of MiVadPureReserve @ 0x140321EB0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14020AAF0 (MiSetReadOnlyOnSectionView.c)
 *     MiSplitPrivatePage @ 0x14021114C (MiSplitPrivatePage.c)
 *     MiProbeAndLockPrepare @ 0x14026B160 (MiProbeAndLockPrepare.c)
 *     MiDeleteEmptyPageTables @ 0x1402EB5E0 (MiDeleteEmptyPageTables.c)
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 *     MiComputeVadCharges @ 0x14034CBC4 (MiComputeVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x1406B6AF0 (MiReturnPageTablePageCommitment.c)
 *     MiReturnVadQuota @ 0x140704558 (MiReturnVadQuota.c)
 *     MiCommitPagefileBackedSection @ 0x14078D374 (MiCommitPagefileBackedSection.c)
 *     MiCommitPageTablesForVad @ 0x1407C74B0 (MiCommitPageTablesForVad.c)
 *     MiAllocateChildVads @ 0x140A4571C (MiAllocateChildVads.c)
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
