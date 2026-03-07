__int64 __fastcall MiAllocateNewSubAllocatedRegion(int a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v3; // rbp
  __int64 Process; // rdi
  _DWORD *Pool; // rax
  __int64 v6; // rbx
  int v7; // ecx
  int UserReservationHighestAddress; // eax
  __int64 v9; // r15
  unsigned int v10; // ecx
  unsigned __int64 v11; // r13
  int VadEventBitmap; // esi
  int v13; // r13d
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  int v19; // edx
  _QWORD *v20; // r15
  int v21; // edx
  int v22; // r8d
  void *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v27; // [rsp+50h] [rbp-68h]
  int v28; // [rsp+58h] [rbp-60h]
  __int64 v29; // [rsp+58h] [rbp-60h]
  __int64 v30; // [rsp+60h] [rbp-58h]
  unsigned __int64 v32; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v33; // [rsp+D0h] [rbp+18h]
  __int64 v34; // [rsp+D8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 512LL;
  v32 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v30 = *(_QWORD *)(Process + 1680);
  if ( a2 > 0x10 )
    return 3221225495LL;
  Pool = MiAllocatePool(64, 0x40uLL, 0x53646156u);
  v6 = (__int64)Pool;
  if ( !Pool )
    return 3221225495LL;
  v7 = Pool[12];
  *((_QWORD *)Pool + 5) = 0LL;
  *((_QWORD *)Pool + 2) = -2LL;
  Pool[12] = v7 & 0xFFDFF07F | 0x200200;
  UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, 0LL);
  v28 = UserReservationHighestAddress;
  v9 = 0x200000LL;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v6 + 48);
    v34 = 0LL;
    v11 = v3;
    v33 = v3;
    v27 = v9;
    VadEventBitmap = MiSelectUserAddress(
                       0,
                       0,
                       UserReservationHighestAddress,
                       (_DWORD)v3 << 12,
                       v9,
                       0LL,
                       (v10 >> 7) & 0x1F,
                       0x80000000,
                       (__int64)&v34,
                       (__int64)&v32);
    if ( VadEventBitmap >= 0 )
      break;
    if ( v9 != 0x10000 )
      v9 = 0x10000LL;
    v3 >>= 1;
    UserReservationHighestAddress = v28;
    if ( v27 != 0x10000 )
      v3 = v11;
    if ( v3 < 0x10 )
      goto LABEL_24;
  }
  v13 = v32;
  v14 = v32 >> 12;
  v15 = v32 >> 12;
  v32 = (v3 << 12) + v32 - 1;
  MiUpdateVadStartVpn(v6, v15);
  v16 = v33;
  v18 = v17 >> 12;
  *(_DWORD *)(v6 + 28) = v17 >> 12;
  *(_BYTE *)(v6 + 33) = v17 >> 44;
  VadEventBitmap = MiCreateVadEventBitmap(Process, v6, v16, 64LL);
  if ( VadEventBitmap < 0 )
  {
LABEL_24:
    ExFreePoolWithTag((PVOID)v6, 0);
    return (unsigned int)VadEventBitmap;
  }
  v29 = MiLocateVadEvent() + 8;
  v20 = (_QWORD *)(v29 + 16);
  v21 = (unsigned int)ExGenRandom(v19 - 63) % v33;
  *(_DWORD *)(v29 + 44) = v33;
  v22 = v32;
  *(_QWORD *)(v29 + 32) = v6;
  *(_DWORD *)(v29 + 48) = a1 & 3 ^ (4 * v21);
  *(_QWORD *)(v29 + 16) = 0LL;
  *(_QWORD *)(v29 + 24) = 0LL;
  *(_DWORD *)(v29 + 40) = 0;
  v23 = (void *)MiAddSecureEntry(v6, v13, v22, -2147483647, 0);
  if ( !v23 )
  {
    VadEventBitmap = -1073741670;
    goto LABEL_20;
  }
  VadEventBitmap = MiInsertVadCharges(v6, Process);
  if ( VadEventBitmap < 0 )
  {
LABEL_20:
    if ( v29 )
      MiFreeVadEventBitmap(Process, v6, 64LL);
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    goto LABEL_24;
  }
  MiLockVad((__int64)CurrentThread, v6);
  MiInsertVad(v6, Process, 0);
  MiUnlockVad((__int64)CurrentThread, v6);
  if ( v34 )
    MiAdvanceVadHint(v14, v18);
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  v24 = 16LL * a1 + v30 + 312;
  v25 = *(_QWORD *)v24;
  if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
    __fastfail(3u);
  *(_QWORD *)(v29 + 24) = v24;
  *v20 = v25;
  *(_QWORD *)(v25 + 8) = v20;
  *(_QWORD *)v24 = v20;
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  return (unsigned int)VadEventBitmap;
}
