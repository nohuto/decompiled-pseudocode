__int64 __fastcall VidSchSubmitDeviceCommand(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int v10; // r11d
  int v11; // r9d
  KSPIN_LOCK *v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 **v15; // rdx
  _QWORD *m; // r8
  unsigned int v18; // edx
  bool v19; // cc
  _QWORD *n; // r10
  __int64 *ii; // rcx
  bool v22; // dl
  int v23; // eax
  __int64 v24; // rbx
  KIRQL v25; // di
  _QWORD *v26; // r9
  _QWORD *v27; // rdx
  int v28; // ebx
  struct _KLOCK_QUEUE_HANDLE *v29; // rcx
  char v30; // di
  __int64 v31; // rsi
  unsigned int v32; // r11d
  int v33; // r9d
  _QWORD *i; // r8
  unsigned int v35; // edx
  _QWORD *j; // r10
  __int64 *k; // rcx
  bool v38; // dl
  int v39; // eax
  _QWORD *v40; // r8
  _QWORD *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  struct _KLOCK_QUEUE_HANDLE v46; // [rsp+50h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v47; // [rsp+68h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-48h] BYREF
  __int128 v49; // [rsp+98h] [rbp-30h]
  __int64 v50; // [rsp+A8h] [rbp-20h]

  if ( !a1 || !a2 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL pointer in pVidSchContext or pCallBack, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 40) )
  {
    v30 = 1;
    if ( *(_DWORD *)a2 == 1 )
    {
      memset(&v46, 0, sizeof(v46));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1728), &v46);
      v31 = *(_QWORD *)(a1 + 1592);
      v32 = 0;
      v33 = 0;
      if ( *(_QWORD *)(a1 + 1600) < v31 )
      {
        if ( !*(_DWORD *)(a1 + 1584) && !*(_DWORD *)(a1 + 1572) )
          goto LABEL_45;
        for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); v32 = v35 )
        {
          v35 = v32 + 1;
          v19 = i[19] <= i[17];
          i = (_QWORD *)*i;
          if ( v19 )
            v35 = v32;
        }
        for ( j = *(_QWORD **)(a1 + 88); j != (_QWORD *)(a1 + 88); j = (_QWORD *)*j )
        {
          for ( k = (__int64 *)j[4]; k != j + 4; v33 = v39 )
          {
            if ( *((_DWORD *)k + 35) )
              v38 = k[8] > (unsigned __int64)k[7] || k[11] > (unsigned __int64)k[10];
            else
              v38 = 0;
            k = (__int64 *)*k;
            v39 = v33 + 1;
            if ( !v38 )
              v39 = v33;
          }
        }
        if ( !v32 && !v33 )
        {
          *(_QWORD *)(a1 + 1600) = v31;
LABEL_45:
          KeReleaseInStackQueuedSpinLock(&v46);
          goto LABEL_74;
        }
        v30 = 0;
        if ( *(_DWORD *)(a2 + 40) == 3 )
        {
          v40 = *(_QWORD **)(a2 + 48);
          v50 = 0LL;
          v49 = 0LL;
          v41 = v40 + 27;
          v42 = v40[27];
          if ( v42 )
          {
            if ( *(_QWORD **)(v42 + 8) != v41 )
              goto LABEL_72;
            v43 = (_QWORD *)v40[28];
            if ( (_QWORD *)*v43 != v41 )
              goto LABEL_72;
            *v43 = v42;
            *(_QWORD *)(v42 + 8) = v43;
            *v41 = 0LL;
            v44 = v40[12];
            v40[28] = 0LL;
            _InterlockedDecrement((volatile signed __int32 *)(v44 + 8));
          }
        }
        v28 = VidSchiAddPendingCommandToSyncPointList(a1, v6, v31, v32, v33, 3);
        if ( v28 < 0 )
        {
          v29 = &v46;
          goto LABEL_39;
        }
      }
      KeReleaseInStackQueuedSpinLock(&v46);
      if ( !v30 )
        return 0LL;
    }
LABEL_74:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v6 + 96) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v45 = *(_QWORD *)(v6 + 96);
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v45 + 4), 2, 1) == 1
        && bTracingEnabled
        && (byte_1C00769C1 & 1) != 0 )
      {
        McTemplateK0p_EtwWriteTransfer(v45, &EventCompleteOfferAllocation, a3, v6);
      }
    }
    return 0LL;
  }
  *(_BYTE *)v6 = 1;
  memset(&v47, 0, sizeof(v47));
  v7 = *(_QWORD *)(v6 + 8);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1728), &v47);
  v9 = *(_QWORD *)(a1 + 1592);
  v10 = 0;
  v11 = 0;
  if ( *(_DWORD *)a2 )
  {
    if ( *(_QWORD *)(a1 + 1600) >= v9 || !*(_DWORD *)(a1 + 1584) && !*(_DWORD *)(a1 + 1572) )
    {
LABEL_31:
      if ( *(_DWORD *)(v7 + 156)
        || *(_DWORD *)(v7 + 104)
        || (*(_BYTE *)(v7 + 25) & 1) != 0
        && _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*(_VIDMM_GLOBAL_ALLOC_NONPAGED **)(v7 + 96)) )
      {
LABEL_6:
        v12 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 32) + 1760LL);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLockAtDpcLevel(v12, &LockHandle);
        v13 = (__int64 *)(v7 + 200);
        v14 = *(_QWORD *)(a1 + 32) + 1792LL;
        v15 = *(__int64 ***)(*(_QWORD *)(a1 + 32) + 1800LL);
        if ( *v15 == (__int64 *)v14 )
        {
          *v13 = v14;
          *(_QWORD *)(v7 + 208) = v15;
          *v15 = v13;
          *(_QWORD *)(v14 + 8) = v13;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_8:
          *(_BYTE *)v6 = 0;
          KeReleaseInStackQueuedSpinLock(&v47);
          return 0LL;
        }
LABEL_72:
        __fastfail(3u);
      }
      goto LABEL_35;
    }
    for ( m = *(_QWORD **)(a1 + 72); m != (_QWORD *)(a1 + 72); v10 = v18 )
    {
      v18 = v10 + 1;
      v19 = m[19] <= m[17];
      m = (_QWORD *)*m;
      if ( v19 )
        v18 = v10;
    }
    for ( n = *(_QWORD **)(a1 + 88); n != (_QWORD *)(a1 + 88); n = (_QWORD *)*n )
    {
      for ( ii = (__int64 *)n[4]; ii != n + 4; v11 = v23 )
      {
        if ( *((_DWORD *)ii + 35) )
          v22 = ii[8] > (unsigned __int64)ii[7] || ii[11] > (unsigned __int64)ii[10];
        else
          v22 = 0;
        ii = (__int64 *)*ii;
        v23 = v11 + 1;
        if ( !v22 )
          v23 = v11;
      }
    }
    if ( !v10 && !v11 )
    {
      *(_QWORD *)(a1 + 1600) = v9;
      goto LABEL_31;
    }
    v28 = VidSchiAddPendingCommandToSyncPointList(a1, v7, v9, v10, v11, 0);
    if ( v28 >= 0 )
      goto LABEL_8;
    v29 = &v47;
LABEL_39:
    KeReleaseInStackQueuedSpinLock(v29);
    return (unsigned int)v28;
  }
  if ( !(unsigned int)VidSchiCheckConditionDeviceCommand(v8, v7) )
    goto LABEL_6;
LABEL_35:
  KeReleaseInStackQueuedSpinLock(&v47);
  v24 = **(_QWORD **)(v7 + 8);
  v25 = KfRaiseIrql(2u);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v24 + 44392), &LockHandle);
  v26 = *(_QWORD **)(v24 + 44408);
  v27 = (_QWORD *)(v7 + 200);
  if ( *v26 != v24 + 44400 )
    goto LABEL_72;
  *v27 = v24 + 44400;
  *(_QWORD *)(v7 + 208) = v26;
  *v26 = v27;
  *(_QWORD *)(v24 + 44408) = v27;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeSetEvent(*(PRKEVENT *)(v24 + 44384), 0, 0);
  KeLowerIrql(v25);
  return 0LL;
}
