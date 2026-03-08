/*
 * XREFs of MiInsertVadCharges @ 0x1407D6A70
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
 *     MiInsertProcessVads @ 0x140729774 (MiInsertProcessVads.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140756084 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateSplitVads @ 0x14076003C (MiAllocateSplitVads.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x140A2E020 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140A3A010 (MiAllocateEnclaveVad.c)
 *     MiInsertChildVads @ 0x140A4642C (MiInsertChildVads.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14031F9D4 (MiGetProcessPartition.c)
 *     MiChargeResident @ 0x140348DE8 (MiChargeResident.c)
 *     MiComputeVadCharges @ 0x14034CBC4 (MiComputeVadCharges.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14034CCC0 (PsChargeProcessNonPagedPoolQuota.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14034CCF4 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14034CD5C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCommitPageTablesForVad @ 0x1407C74B0 (MiCommitPageTablesForVad.c)
 *     MiSetVadBits @ 0x1407D6BE0 (MiSetVadBits.c)
 *     PsChargeProcessPagedPoolQuota @ 0x1407D6CF0 (PsChargeProcessPagedPoolQuota.c)
 *     MiReturnVadCharges @ 0x140A39830 (MiReturnVadCharges.c)
 */

__int64 __fastcall MiInsertVadCharges(__int64 a1, struct _KPROCESS *a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  int v8; // esi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // rbx
  void *ProcessPartition; // rax
  unsigned __int64 v14; // r9
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+30h] [rbp-28h]

  v2 = *(unsigned __int8 *)(a1 + 32);
  v3 = *(unsigned __int8 *)(a1 + 33);
  v16 = 0LL;
  v6 = (*(unsigned int *)(a1 + 24) | (unsigned __int64)(v2 << 32)) << 12;
  v7 = ((*(unsigned int *)(a1 + 28) | (unsigned __int64)(v3 << 32)) << 12) | 0xFFF;
  v15 = 0LL;
  MiComputeVadCharges(a1, (__int64)&v15);
  if ( v16 && (v8 = PsChargeProcessNonPagedPoolQuota(a2, v16), v8 < 0) )
  {
    v16 = 0LL;
    v15 = 0uLL;
  }
  else if ( *((_QWORD *)&v15 + 1) && (v8 = PsChargeProcessPagedPoolQuota(a2, *((_QWORD *)&v15 + 1)), v8 < 0) )
  {
    v15 = 0uLL;
  }
  else if ( !(_QWORD)v15
         || (ProcessPartition = (void *)MiGetProcessPartition((__int64)a2),
             (unsigned int)MiChargeResident(ProcessPartition, v14, 128LL)) )
  {
    v9 = *(unsigned int *)(a1 + 52);
    LODWORD(v9) = v9 & 0x7FFFFFFF;
    v10 = v9 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
    if ( v10 >= 0x7FFFFFFFDLL && v10 != 0x7FFFFFFFELL
      || (CurrentThread = KeGetCurrentThread(),
          LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
          v8 = MiCommitPageTablesForVad(a1, v6, v7),
          UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)a2),
          v8 >= 0) )
    {
      MiSetVadBits(a1);
      return 0LL;
    }
  }
  else
  {
    v8 = -1073741670;
    *(_QWORD *)&v15 = 0LL;
  }
  MiReturnVadCharges(&v15);
  return (unsigned int)v8;
}
