__int64 __fastcall ExpWnfSubscribeNameInstance(
        __int64 a1,
        struct _KPROCESS *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        signed __int64 *a8,
        _QWORD *a9,
        _QWORD *a10,
        _DWORD *a11)
{
  unsigned __int64 v11; // rsi
  __int64 v13; // r14
  signed __int64 *v16; // rsi
  __int64 v17; // r14
  int updated; // r14d
  char *Pool2; // rax
  char *v20; // r15
  signed __int64 v21; // r12
  unsigned __int64 *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r14
  volatile signed __int64 *v25; // r14
  __int64 v26; // rax
  signed __int8 v27; // cf
  unsigned __int64 *v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 **v30; // rdx
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  signed __int32 v33; // ecx
  int v34; // eax
  __int64 v35; // rdx
  int v37; // [rsp+50h] [rbp-20h] BYREF
  int v38; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v39; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v40; // [rsp+60h] [rbp-10h]
  __int64 v41; // [rsp+68h] [rbp-8h]
  int v44; // [rsp+C8h] [rbp+58h]

  v44 = a4;
  v11 = a2[1].EndPadding[0];
  v13 = a3;
  v39 = 0LL;
  v40 = v11;
  *a11 = 0;
  v37 = 0;
  v38 = 0;
  if ( a7 == 1 )
  {
    v16 = (signed __int64 *)(v11 + 80);
    v17 = KeAbPreAcquire((__int64)v16, 0LL);
    if ( _InterlockedCompareExchange64(v16, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v16, 0, v17, (__int64)v16);
    if ( v17 )
      *(_BYTE *)(v17 + 18) = 1;
    updated = ExpWnfUpdateSubscription(a1, v40, a3, a4, a6, (__int64)&v39, (__int64)&v37, (__int64)&v38, (__int64)a8);
    if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v16);
    KeAbPostRelease((ULONG_PTR)v16);
    if ( updated >= 0 )
      goto LABEL_46;
    v11 = v40;
    v13 = a3;
  }
  Pool2 = (char *)ExAllocatePool2((PsInitialSystemProcess != a2) + 256LL, 136LL, 543583831LL);
  v20 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset(Pool2, 0, 0x88uLL);
  *(_DWORD *)v20 = 8915205;
  *((_DWORD *)v20 + 24) = a5;
  *((_DWORD *)v20 + 25) = a6;
  *((_QWORD *)v20 + 10) = v13;
  *((_QWORD *)v20 + 11) = a4;
  *((_QWORD *)v20 + 1) = 0LL;
  *((_QWORD *)v20 + 7) = *(_QWORD *)(a1 + 40);
  if ( a7 )
  {
    do
      v21 = _InterlockedIncrement64(&ExpWnfSubcriptionIdCounter);
    while ( !v21 );
    if ( a8 )
      *a8 = v21;
  }
  else
  {
    v21 = (signed __int64)v20;
    if ( a9 )
      *a9 = v20;
  }
  v22 = (unsigned __int64 *)(v11 + 80);
  v23 = KeAbPreAcquire((__int64)v22, 0LL);
  v24 = v23;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
    ExfAcquirePushLockExclusiveEx(v22, v23, (__int64)v22);
  if ( v24 )
    *(_BYTE *)(v24 + 18) = 1;
  v25 = (volatile signed __int64 *)(a1 + 112);
  v26 = KeAbPreAcquire(a1 + 112, 0LL);
  v27 = _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL);
  v41 = v26;
  if ( v27 )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v26, a1 + 112);
    v26 = v41;
  }
  if ( v26 )
    *(_BYTE *)(v26 + 18) = 1;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( a7 != 1
      || (int)ExpWnfUpdateSubscription(a1, v40, a3, v44, a6, (__int64)&v39, (__int64)&v37, (__int64)&v38, (__int64)a8) < 0 )
    {
      *((_QWORD *)v20 + 5) = a2;
      *((_QWORD *)v20 + 6) = a1;
      *((_QWORD *)v20 + 2) = v21;
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v20 + 1);
      if ( a9 )
        ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v20 + 1);
      v28 = (unsigned __int64 *)(v20 + 24);
      v29 = v40 + 88;
      v30 = *(unsigned __int64 ***)(v40 + 96);
      if ( *v30 != (unsigned __int64 *)(v40 + 88)
        || (*v28 = v29,
            *((_QWORD *)v20 + 4) = v30,
            *v30 = v28,
            *(_QWORD *)(v29 + 8) = v28,
            v31 = *(_QWORD **)(a1 + 128),
            v32 = v20 + 64,
            *v31 != a1 + 120) )
      {
        __fastfail(3u);
      }
      *v32 = a1 + 120;
      *((_QWORD *)v20 + 9) = v31;
      *v31 = v32;
      *(_QWORD *)(a1 + 128) = v32;
      if ( (v20[100] & 1) != 0 )
      {
        v33 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 1u);
        v34 = v37;
        if ( !v33 )
          v34 = 1;
        v37 = v34;
      }
      if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
      KeAbPostRelease(a1 + 112);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v22);
      KeAbPostRelease((ULONG_PTR)v22);
      *a10 = v20;
      goto LABEL_39;
    }
    if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
    KeAbPostRelease(a1 + 112);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v22);
    KeAbPostRelease((ULONG_PTR)v22);
    ExFreePoolWithTag(v20, 0x20666E57u);
LABEL_46:
    *a10 = v39;
LABEL_39:
    v35 = 0LL;
    if ( v38 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 164), 0xFFFFFFFF) == 1 )
      v35 = 8LL;
    if ( v37 > 0 )
    {
      v35 = (unsigned int)v35 | 2;
    }
    else if ( v37 < 0 )
    {
      v35 = (unsigned int)v35 | 4;
    }
    if ( (_DWORD)v35 )
    {
      ExpWnfNotifyNameSubscribers(a1, v35, 1LL);
      *a11 = 1;
    }
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
  KeAbPostRelease(a1 + 112);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v22);
  KeAbPostRelease((ULONG_PTR)v22);
  ExFreePoolWithTag(v20, 0x20666E57u);
  return 3221225524LL;
}
