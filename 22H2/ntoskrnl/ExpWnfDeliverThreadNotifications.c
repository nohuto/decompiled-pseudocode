/*
 * XREFs of ExpWnfDeliverThreadNotifications @ 0x14060E474
 * Callers:
 *     NtGetCompleteWnfStateSubscription @ 0x14060E320 (NtGetCompleteWnfStateSubscription.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140273540 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     ExpWnfReadStateData @ 0x14060FFA4 (ExpWnfReadStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140610CEC (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfDeliverThreadNotifications(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 *v3; // r14
  unsigned int v4; // r13d
  signed __int64 *v5; // r12
  __int64 v6; // rsi
  volatile signed __int64 *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // r14
  __int64 v12; // rsi
  int *v13; // rdx
  unsigned int v14; // r13d
  __int64 v15; // rcx
  _OWORD *v16; // rax
  unsigned __int64 *v18; // rax
  unsigned __int64 *v19; // r8
  unsigned __int64 v20; // rcx
  int v21; // eax
  volatile signed __int64 *v22; // r14
  signed __int64 *v23; // r14
  int v24; // [rsp+34h] [rbp-94h]
  int v25; // [rsp+38h] [rbp-90h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-8Ch]
  unsigned __int64 *v27; // [rsp+40h] [rbp-88h]
  __int64 v28; // [rsp+48h] [rbp-80h]
  int *v29; // [rsp+50h] [rbp-78h]
  _DWORD *v30; // [rsp+58h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-60h]
  ULONG_PTR v32; // [rsp+70h] [rbp-58h]
  unsigned __int64 *v33; // [rsp+78h] [rbp-50h]
  int v36; // [rsp+E0h] [rbp+18h]
  int v37; // [rsp+E8h] [rbp+20h] BYREF

  v3 = (unsigned __int64 *)a1;
  v25 = 0;
  v4 = -2147483622;
  v36 = -2147483622;
  v24 = 0;
  v37 = 0;
  v26 = a3 - 48;
LABEL_2:
  v5 = (signed __int64 *)(v3 + 10);
  v32 = (ULONG_PTR)(v3 + 10);
  v6 = KeAbPreAcquire((ULONG_PTR)(v3 + 10), 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3 + 10, v6, (ULONG_PTR)(v3 + 10));
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = (volatile signed __int64 *)(v3 + 13);
  BugCheckParameter2 = (ULONG_PTR)(v3 + 13);
  v8 = KeAbPreAcquire((ULONG_PTR)(v3 + 13), 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3 + 13, v8, (ULONG_PTR)(v3 + 13));
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = v3 + 14;
  v27 = v3 + 14;
  v11 = (unsigned __int64 *)v3[14];
  while ( 1 )
  {
    v33 = v11;
    if ( v11 == v10 )
      break;
    v30 = v11 + 2;
    if ( *((_DWORD *)v11 + 4) != 1 )
      goto LABEL_36;
    v12 = *(v11 - 7);
    v28 = v12;
    if ( v12 )
    {
      v12 &= -(__int64)(ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v12 + 8)) != 0);
      v28 = v12;
    }
    v13 = (int *)v11 + 5;
    v29 = (int *)v11 + 5;
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
      v24 = ExpWnfReadStateData(v12, &v37, a2 + 48, v26, &v25);
      if ( v24 < 0 )
        goto LABEL_24;
      v15 = a2;
      *(_DWORD *)(a2 + 16) = v37;
      *(_DWORD *)(a2 + 20) = v25;
    }
    *(_DWORD *)(v15 + 44) = 48;
    *(_DWORD *)(v15 + 24) = v14;
LABEL_24:
    if ( v12 )
    {
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v12 + 8));
      v12 = 0LL;
    }
    if ( v24 < 0 )
    {
      v4 = v36;
      if ( v36 == -2147483622 )
      {
        v4 = v24;
        v36 = v24;
      }
      goto LABEL_36;
    }
    if ( !v37 )
      v14 &= ~1u;
    if ( v14 )
    {
      *((_DWORD *)v11 + 6) = v14;
      *v29 = 0;
      *v30 = 2;
      v4 = 0;
      break;
    }
    v13 = v29;
LABEL_40:
    v18 = (unsigned __int64 *)v11[1];
    v11 = v18;
    v19 = v33;
    v20 = *v33;
    if ( *(unsigned __int64 **)(*v33 + 8) != v33 || (unsigned __int64 *)*v18 != v33 )
      __fastfail(3u);
    *v18 = v20;
    *(_QWORD *)(v20 + 8) = v18;
    *v30 = 0;
    v21 = *v13;
    *v13 = 0;
    *((_DWORD *)v19 + 6) = 0;
    if ( v12 )
    {
      if ( (v21 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 164), 0xFFFFFFFF) == 1 )
      {
        v22 = (volatile signed __int64 *)(a1 + 104);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v22);
        KeAbPostRelease((ULONG_PTR)v22);
        v23 = (signed __int64 *)(a1 + 80);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v23);
        KeAbPostRelease((ULONG_PTR)v23);
        ExpWnfNotifyNameSubscribers(v12, 8LL, 1LL, 1LL);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v12 + 8));
        v4 = v36;
        v3 = (unsigned __int64 *)a1;
        goto LABEL_2;
      }
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v12 + 8));
    }
    v4 = v36;
LABEL_36:
    v11 = (unsigned __int64 *)*v11;
    v10 = v27;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return v4;
}
