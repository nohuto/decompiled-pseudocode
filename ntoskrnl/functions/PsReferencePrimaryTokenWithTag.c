ULONG_PTR __fastcall PsReferencePrimaryTokenWithTag(__int64 a1, ULONG a2)
{
  signed __int64 v4; // r8
  signed __int64 v5; // rax
  signed __int64 v6; // rbx
  unsigned int v7; // r8d
  ULONG_PTR v8; // rbx
  __int64 v10; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  struct _KTHREAD *CurrentThread; // r14

  _m_prefetchw((const void *)(a1 + 1208));
  v4 = *(_QWORD *)(a1 + 1208);
  if ( (v4 & 0xF) != 0 )
  {
    do
    {
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1208), v4 - 1, v4);
      if ( v4 == v5 )
        break;
      v4 = v5;
    }
    while ( (v5 & 0xF) != 0 );
  }
  v6 = v4;
  v7 = v4 & 0xF;
  v8 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v7 <= 1 )
  {
    if ( !v7 )
    {
LABEL_17:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
      v8 = *(_QWORD *)(a1 + 1208) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v8 )
        ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 1208) & 0xFFFFFFFFFFFFFFF0uLL), a2);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1080), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 1080));
      KeAbPostRelease(a1 + 1080);
      KeLeaveCriticalRegionThread(CurrentThread);
      return v8;
    }
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 48), 0xFuLL);
    if ( v10 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v8, 0x10uLL, v10 + 15);
    _m_prefetchw((const void *)(a1 + 1208));
    v11 = *(_QWORD *)(a1 + 1208);
    if ( (unsigned __int64)(v11 & 0xF) + 15 <= 0xF )
    {
      do
      {
        if ( v8 != (v11 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v12 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1208), v11 + 15, v11);
        if ( v12 == v11 )
          goto LABEL_4;
      }
      while ( (v11 & 0xF) == 0 );
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 48), 0xFFFFFFFFFFFFFFF1uLL);
  }
LABEL_4:
  if ( ObpTraceFlags )
    ObpPushStackInfo(v8 - 48);
  if ( !v8 )
    goto LABEL_17;
  return v8;
}
