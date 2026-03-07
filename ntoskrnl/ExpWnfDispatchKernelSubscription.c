signed __int32 ExpWnfDispatchKernelSubscription()
{
  _QWORD *v0; // r13
  volatile signed __int64 *v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _EX_RUNDOWN_REF *v4; // rsi
  struct _EX_RUNDOWN_REF *v5; // r14
  struct _EX_RUNDOWN_REF v6; // rcx
  struct _EX_RUNDOWN_REF **Count; // rax
  volatile signed __int64 *v8; // r12
  unsigned int Ptr_high; // r15d
  __int64 v10; // rsi
  __int64 v11; // rsi
  unsigned int v12; // ebp
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // r15d
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v20; // [rsp+48h] [rbp-40h] BYREF

  v20 = 0LL;
  v0 = (_QWORD *)PsInitialSystemProcess[1].EndPadding[0];
  v1 = v0 + 13;
  v2 = KeAbPreAcquire((__int64)(v0 + 13), 0LL);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v0 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(v0 + 13, v2, (__int64)(v0 + 13));
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
LABEL_5:
  v4 = (struct _EX_RUNDOWN_REF *)v0[14];
  if ( v4 != (struct _EX_RUNDOWN_REF *)(v0 + 14) )
  {
    v5 = v4 - 13;
    ExAcquireRundownProtection_0(v4 - 12);
    LODWORD(v4[2].Count) = 2;
    v6.Count = v4->Count;
    if ( *(struct _EX_RUNDOWN_REF **)(v4->Count + 8) != v4
      || (Count = (struct _EX_RUNDOWN_REF **)v4[1].Count, *Count != v4) )
    {
      __fastfail(3u);
    }
    *Count = (struct _EX_RUNDOWN_REF *)v6.Count;
    v8 = v0 + 10;
    *(_QWORD *)(v6.Count + 8) = Count;
    while ( 1 )
    {
      Ptr_high = HIDWORD(v5[15].Ptr);
      HIDWORD(v5[15].Ptr) = 0;
      if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v0 + 13);
      KeAbPostRelease((ULONG_PTR)(v0 + 13));
      v10 = KeAbPreAcquire((__int64)(v0 + 10), 0LL);
      if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v0 + 10, 0, v10, (__int64)(v0 + 10));
      if ( v10 )
        *(_BYTE *)(v10 + 18) = 1;
      v11 = v5[6].Count;
      if ( v11 )
        v11 &= -(__int64)(ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8)) != 0);
      v12 = Ptr_high & 0xFFFFFFFE;
      if ( v11 )
        v12 = Ptr_high;
      if ( (v12 & 1) != 0 )
      {
        v13 = *(_DWORD *)(v11 + 96);
        if ( v13 <= LODWORD(v5[12].Count) )
          v12 &= ~1u;
        else
          LODWORD(v5[12].Count) = v13;
      }
      if ( !v12 )
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v0 + 10);
        KeAbPostRelease((ULONG_PTR)(v0 + 10));
        goto LABEL_31;
      }
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v0 + 10);
      KeAbPostRelease((ULONG_PTR)(v0 + 10));
      v20 = v5[7].Count ^ 0x41C64E6DA3BC0074LL;
      if ( !v11 )
        break;
      v14 = *(_QWORD *)(v11 + 64);
      v15 = v12 & 1;
      if ( (v12 & 1) == 0 )
        goto LABEL_42;
      v16 = *(unsigned int *)(v11 + 96);
LABEL_28:
      ((void (__fastcall *)(struct _EX_RUNDOWN_REF *, __int64 *, _QWORD, __int64, __int64, unsigned __int64))v5[10].Count)(
        v5,
        &v20,
        v12,
        v16,
        v14,
        v5[11].Count);
      if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 164), 0xFFFFFFFF) == 1 )
        ExpWnfNotifyNameSubscribers(v11, 8u, 0, 0);
LABEL_31:
      if ( v11 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8));
      v17 = KeAbPreAcquire((__int64)(v0 + 13), 0LL);
      v18 = v17;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
        ExfAcquirePushLockExclusiveEx(v0 + 13, v17, (__int64)(v0 + 13));
      if ( v18 )
        *(_BYTE *)(v18 + 18) = 1;
      if ( !HIDWORD(v5[15].Ptr) )
      {
        LODWORD(v5[15].Count) = 0;
        ExReleaseRundownProtection_0(v5 + 1);
        goto LABEL_5;
      }
    }
    v15 = v12 & 1;
    v14 = 0LL;
LABEL_42:
    v16 = 0LL;
    goto LABEL_28;
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v0 + 13);
  return KeAbPostRelease((ULONG_PTR)(v0 + 13));
}
