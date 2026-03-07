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
