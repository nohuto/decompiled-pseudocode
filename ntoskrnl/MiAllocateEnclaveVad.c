__int64 __fastcall MiAllocateEnclaveVad(int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned __int64 v5; // rsi
  struct _KTHREAD *CurrentThread; // r13
  BOOL v9; // ebx
  __int64 Process; // r14
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  _DWORD *Pool; // rax
  __int64 v15; // rdi
  ULONG_PTR v17; // rax
  int inserted; // ebx
  PVOID v19; // rax
  int v20; // eax
  void *v21; // rcx
  __int64 *v22; // rdx
  unsigned __int64 UserReservationHighestAddress; // rax
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rbp
  __int64 v27; // rcx
  __int64 v28[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+20h]

  v30 = a4;
  v29 = 0LL;
  v28[0] = 0LL;
  v5 = a3;
  CurrentThread = KeGetCurrentThread();
  v9 = (unsigned int)(a1 - 16) <= 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a2 >= 0xFFFFFFFFFFFFF000uLL || a2 == 0 )
    return 3221225485LL;
  if ( (unsigned int)(a1 - 16) > 1 )
  {
    v12 = a2 - 1;
    v13 = a2;
    if ( (v12 & a2) != 0 )
      v13 = a2 & ~v12;
    v11 = 0x10000LL;
    if ( v13 >= 0x10000 )
    {
      v11 = v13;
      if ( v13 >= 0x7FFFFFFF0000LL )
        return 3221225485LL;
    }
  }
  else
  {
    v11 = 0x200000LL;
  }
  if ( a2 >= 0x7FFFFFFF0000LL
    || a3 && (a3 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFF0000LL - a3 < a2 || ((v11 - 1) & a3) != 0 || a4) )
  {
    return 3221225485LL;
  }
  Pool = MiAllocatePool(64, 0x88uLL, 0x45646156u);
  v15 = (__int64)Pool;
  if ( !Pool )
    return 3221225626LL;
  if ( !v9 )
  {
    Pool[16] |= 1u;
    v17 = MiReservePtes((__int64)&qword_140C695C0, 1u);
    *(_QWORD *)(v15 + 80) = v17;
    if ( !v17
      || a1 == 2
      && (*(_DWORD *)(v15 + 72) |= 1u,
          v19 = MiAllocatePool(64, 0x1000uLL, 0x6E45694Du),
          (*(_QWORD *)(v15 + 88) = v19) == 0LL) )
    {
      inserted = -1073741670;
LABEL_25:
      if ( (*(_DWORD *)(v15 + 64) & 1) != 0 )
      {
        v21 = *(void **)(v15 + 88);
        if ( v21 )
          ExFreePoolWithTag(v21, 0);
        v22 = *(__int64 **)(v15 + 80);
        if ( v22 )
          MiReleasePtes((__int64)&qword_140C695C0, v22, 1u);
      }
      ExFreePoolWithTag((PVOID)v15, 0);
      return (unsigned int)inserted;
    }
    *(_DWORD *)(v15 + 48) = *(_DWORD *)(v15 + 48) & 0xFFFFFF8F | 0x30;
    *(_QWORD *)(v15 + 120) = 0LL;
  }
  v20 = *(_DWORD *)(v15 + 48);
  *(_QWORD *)(v15 + 40) = 0LL;
  *(_QWORD *)(v15 + 16) = -2LL;
  *(_DWORD *)(v15 + 48) = v20 & 0xFBDFF07F | 0x4200200;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 1124) & 0x20) != 0 )
  {
    inserted = -1073741558;
LABEL_24:
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    goto LABEL_25;
  }
  UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, v30);
  if ( v5 )
  {
    v24 = (v5 + a2 - 1) | 0xFFF;
    if ( !(unsigned int)MiIsVaRangeAvailable(Process, v5, v24 - v5 + 1, 0LL, UserReservationHighestAddress) )
    {
      inserted = -1073741800;
      goto LABEL_24;
    }
  }
  else
  {
    inserted = MiSelectUserAddress(0, 0LL, UserReservationHighestAddress, a2, v11, 0LL, 6, 0, v28, &v29);
    if ( inserted < 0 )
      goto LABEL_24;
    v5 = v29;
    v24 = v29 + a2 - 1;
  }
  v25 = v5 >> 12;
  v26 = v24 >> 12;
  MiUpdateVadStartVpn(v15, v25);
  *(_DWORD *)(v15 + 28) = v26;
  *(_BYTE *)(v15 + 33) = BYTE4(v26);
  inserted = MiInsertVadCharges(v27, (struct _KPROCESS *)Process);
  if ( inserted < 0 )
    goto LABEL_24;
  MiLockVad((__int64)CurrentThread, v15);
  MiInsertVad(v15, Process, 0);
  if ( v28[0] )
    MiAdvanceVadHint(v25, v26, (_QWORD *)v28[0]);
  MiReferenceVad(v15);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
  *a5 = v15;
  return 0LL;
}
