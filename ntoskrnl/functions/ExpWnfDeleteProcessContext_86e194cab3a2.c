void __fastcall ExpWnfDeleteProcessContext(unsigned __int64 *P, int a2)
{
  unsigned __int64 *v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  struct _EX_RUNDOWN_REF **v7; // r14
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rbp
  volatile signed __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbp
  struct _EX_RUNDOWN_REF **v15; // r14
  struct _EX_RUNDOWN_REF *v16; // rax
  __int64 v17; // rax
  signed __int8 v18; // cf
  __int64 v19; // rdi
  unsigned __int64 **v20; // r8
  PVOID *v21; // rdx
  void *v22; // rcx
  struct _EX_RUNDOWN_REF *v23; // rbp
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rbp

  v2 = P + 10;
  v5 = KeAbPreAcquire((__int64)(P + 10), 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (__int64)v2);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v7 = (struct _EX_RUNDOWN_REF **)(P + 11);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (struct _EX_RUNDOWN_REF *)v7 )
      break;
    v9 = v8 - 3;
    ExAcquireRundownProtection_0(v8 - 2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    KeAbPostRelease((ULONG_PTR)v2);
    ExpWnfDeleteSubscription(v9);
    v10 = KeAbPreAcquire((__int64)v2, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v2, v10, (__int64)v2);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  v12 = (volatile signed __int64 *)(P + 7);
  v13 = KeAbPreAcquire((__int64)(P + 7), 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)P + 14, 0LL) )
    ExfAcquirePushLockExclusiveEx(P + 7, v13, (__int64)(P + 7));
  if ( v14 )
    *(_BYTE *)(v14 + 18) = 1;
  v15 = (struct _EX_RUNDOWN_REF **)(P + 8);
  while ( 1 )
  {
    v16 = *v15;
    if ( *v15 == (struct _EX_RUNDOWN_REF *)v15 )
      break;
    v23 = v16 - 17;
    ExAcquireRundownProtection_0(v16 - 16);
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 7);
    KeAbPostRelease((ULONG_PTR)(P + 7));
    ExpWnfNotifyNameSubscribers(v23, 16LL, 0LL);
    LOBYTE(v24) = 1;
    ExpWnfDeleteNameInstance(v23[6].Count, v23, v24);
    v25 = KeAbPreAcquire((__int64)(P + 7), 0LL);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(P + 7, v25, (__int64)(P + 7));
    if ( v26 )
      *(_BYTE *)(v26 + 18) = 1;
  }
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 7);
  KeAbPostRelease((ULONG_PTR)(P + 7));
  if ( a2 )
  {
    v17 = KeAbPreAcquire((__int64)&ExpWnfProcessesListLock, 0LL);
    v18 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v19 = v17;
    if ( v18 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v17, (__int64)&ExpWnfProcessesListLock);
    if ( v19 )
      *(_BYTE *)(v19 + 18) = 1;
    v20 = (unsigned __int64 **)P[2];
    if ( v20[1] != P + 2 || (v21 = (PVOID *)P[3], *v21 != P + 2) )
      __fastfail(3u);
    *v21 = v20;
    v20[1] = (unsigned __int64 *)v21;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfProcessesListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    v22 = (void *)P[16];
    if ( v22 )
      ObfDereferenceObject(v22);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
