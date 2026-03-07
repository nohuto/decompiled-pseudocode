__int64 __fastcall CmpVolumeContextSendDeviceUsageNotification(__int64 a1)
{
  signed __int64 *v2; // rbx
  __int64 v3; // rbp
  char v4; // si
  int v5; // ebp
  __int64 v7; // rax
  __int64 v8; // rbp

  if ( *(_QWORD *)(a1 + 48) )
  {
    v2 = (signed __int64 *)(a1 + 56);
    v3 = KeAbPreAcquire(a1 + 56, 0LL);
    if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v2, 0, v3, (__int64)v2);
    v4 = 1;
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    if ( *(_BYTE *)(a1 + 64) )
    {
      v5 = 0;
      if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v2);
      KeAbPostRelease((ULONG_PTR)v2);
    }
    else
    {
      if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v2);
      KeAbPostRelease((ULONG_PTR)v2);
      v5 = PiPagePathSetState(*(struct _FILE_OBJECT **)(a1 + 48), 1);
      if ( v5 >= 0 )
      {
        v7 = KeAbPreAcquire((__int64)v2, 0LL);
        v8 = v7;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v2, v7, (__int64)v2);
        if ( v8 )
          *(_BYTE *)(v8 + 18) = 1;
        if ( !*(_BYTE *)(a1 + 64) )
        {
          *(_BYTE *)(a1 + 64) = 1;
          v4 = 0;
        }
        if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v2);
        KeAbPostRelease((ULONG_PTR)v2);
        v5 = 0;
        if ( v4 )
          PiPagePathSetState(*(struct _FILE_OBJECT **)(a1 + 48), 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v5;
}
