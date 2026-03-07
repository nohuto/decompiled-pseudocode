__int64 __fastcall ExpWnfDeliverThreadNotifications(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v3; // r12
  unsigned int v4; // r13d
  signed __int64 *v5; // r15
  __int64 v6; // rsi
  volatile signed __int64 *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // r12
  __int64 v12; // rsi
  int *v13; // rdx
  unsigned int v14; // r13d
  __int64 v15; // rcx
  _OWORD *v16; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  int v22; // [rsp+34h] [rbp-94h]
  int v23; // [rsp+38h] [rbp-90h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-8Ch]
  _QWORD *v25; // [rsp+40h] [rbp-88h]
  __int64 v26; // [rsp+48h] [rbp-80h]
  int *v27; // [rsp+50h] [rbp-78h]
  _DWORD *v28; // [rsp+58h] [rbp-70h]
  _QWORD *v29; // [rsp+68h] [rbp-60h]
  _QWORD *v30; // [rsp+70h] [rbp-58h]
  _QWORD *v31; // [rsp+78h] [rbp-50h]
  int v34; // [rsp+E0h] [rbp+18h]
  int v35; // [rsp+E8h] [rbp+20h] BYREF

  v3 = a1;
  v23 = 0;
  v4 = -2147483622;
  v34 = -2147483622;
  v22 = 0;
  v35 = 0;
  v24 = a3 - 48;
LABEL_2:
  v5 = v3 + 10;
  v29 = v3 + 10;
  v6 = KeAbPreAcquire((__int64)(v3 + 10), 0LL);
  if ( _InterlockedCompareExchange64(v3 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3 + 10, 0, v6, (__int64)(v3 + 10));
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v7 = v3 + 13;
  v30 = v3 + 13;
  v8 = KeAbPreAcquire((__int64)(v3 + 13), 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3 + 13, v8, (__int64)(v3 + 13));
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v10 = v3 + 14;
  v25 = v3 + 14;
  v11 = (_QWORD *)v3[14];
  while ( 1 )
  {
    v31 = v11;
    if ( v11 == v10 )
      break;
    v28 = v11 + 2;
    if ( *((_DWORD *)v11 + 4) != 1 )
      goto LABEL_36;
    v12 = *(v11 - 7);
    v26 = v12;
    if ( v12 )
    {
      v12 &= -(__int64)(ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 8)) != 0);
      v26 = v12;
    }
    v13 = (int *)v11 + 5;
    v27 = (int *)v11 + 5;
    v14 = *((_DWORD *)v11 + 5) & *((_DWORD *)v11 - 1) & 0xFFFFFFFE;
    if ( v12 )
      v14 = *((_DWORD *)v11 + 5) & *((_DWORD *)v11 - 1);
    if ( !v14 )
      goto LABEL_40;
    v15 = a2;
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 8) = *(v11 - 6) ^ 0x41C64E6DA3BC0074LL;
    *(_QWORD *)a2 = *(v11 - 11);
    if ( (v14 & 1) != 0 )
    {
      v16 = *(_OWORD **)(v12 + 64);
      if ( v16 )
        *(_OWORD *)(a2 + 28) = *v16;
      v22 = ExpWnfReadStateData(v12, &v35, a2 + 48, v24, &v23);
      if ( v22 < 0 )
        goto LABEL_24;
      v15 = a2;
      *(_DWORD *)(a2 + 16) = v35;
      *(_DWORD *)(a2 + 20) = v23;
    }
    *(_DWORD *)(v15 + 44) = 48;
    *(_DWORD *)(v15 + 24) = v14;
LABEL_24:
    if ( v12 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 8));
      v12 = 0LL;
    }
    if ( v22 < 0 )
    {
      v4 = v34;
      if ( v34 == -2147483622 )
      {
        v4 = v22;
        v34 = v22;
      }
      goto LABEL_36;
    }
    if ( !v35 )
      v14 &= ~1u;
    if ( v14 )
    {
      *((_DWORD *)v11 + 6) = v14;
      *v27 = 0;
      *v28 = 2;
      v4 = 0;
      break;
    }
    v13 = v27;
LABEL_40:
    v18 = (_QWORD *)v11[1];
    v11 = v18;
    v19 = v31;
    v20 = *v31;
    if ( *(_QWORD **)(*v31 + 8LL) != v31 || (_QWORD *)*v18 != v31 )
      __fastfail(3u);
    *v18 = v20;
    *(_QWORD *)(v20 + 8) = v18;
    *v28 = 0;
    v21 = *v13;
    *v13 = 0;
    *((_DWORD *)v19 + 6) = 0;
    if ( v12 )
    {
      if ( (v21 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 164), 0xFFFFFFFF) == 1 )
      {
        if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v7);
        KeAbPostRelease((ULONG_PTR)v7);
        if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v5);
        KeAbPostRelease((ULONG_PTR)v5);
        ExpWnfNotifyNameSubscribers(v12, 8LL, 1LL);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 8));
        v4 = v34;
        v3 = a1;
        goto LABEL_2;
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v12 + 8));
    }
    v4 = v34;
LABEL_36:
    v11 = (_QWORD *)*v11;
    v10 = v25;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return v4;
}
