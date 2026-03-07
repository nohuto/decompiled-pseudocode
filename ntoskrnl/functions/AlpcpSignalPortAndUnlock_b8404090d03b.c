signed __int32 __fastcall AlpcpSignalPortAndUnlock(__int64 a1)
{
  ULONG_PTR v3; // rdi
  __int64 v4; // rcx
  _QWORD **v5; // rdi
  volatile signed __int64 *v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  _QWORD *v10; // rcx

  if ( *(_QWORD *)(a1 + 32) )
    return AlpcpQueueIoCompletionPort((_QWORD *)a1, 0, 1, 0, 0);
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    v3 = a1 + 352;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(v3);
    v4 = *(_QWORD *)(a1 + 248);
    return KeReleaseSemaphoreEx(v4, 1u, 1);
  }
  v5 = (_QWORD **)(a1 + 232);
  if ( *v5 != v5 )
  {
    v6 = (volatile signed __int64 *)(a1 + 224);
    ExAcquirePushLockExclusiveEx(a1 + 224, 0LL);
    v7 = *v5;
    if ( *v5 == v5 )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = v7 - 177;
      *(v7 - 1) = 0LL;
      v9 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v10 = (_QWORD *)v7[1], (_QWORD *)*v10 != v7) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *v7 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( v8 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      v4 = (__int64)(v8 + 155);
      return KeReleaseSemaphoreEx(v4, 1u, 1);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
  return KeAbPostRelease(a1 + 352);
}
