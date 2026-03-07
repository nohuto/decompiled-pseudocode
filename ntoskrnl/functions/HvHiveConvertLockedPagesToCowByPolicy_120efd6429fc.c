__int64 __fastcall HvHiveConvertLockedPagesToCowByPolicy(__int64 a1)
{
  __int64 v1; // r14
  signed __int64 *v5; // rdi
  __int64 v6; // rbp
  unsigned __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbp
  int locked; // ebp

  v1 = a1 + 224;
  if ( (*(_DWORD *)(a1 + 256) & 4) != 0 )
  {
    v5 = (signed __int64 *)(a1 + 72);
    v6 = KeAbPreAcquire(a1 + 72, 0LL);
    if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v5, 0, v6, (__int64)v5);
    if ( v6 )
      *(_BYTE *)(v6 + 18) = 1;
    v7 = (unsigned __int64 *)(a1 + 80);
    v8 = KeAbPreAcquire((__int64)v7, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
    locked = HvpViewMapConvertLockedPagesToCOWByPolicy(v1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    if ( locked >= 0 )
      return 0;
    return (unsigned int)locked;
  }
  else
  {
    return 0;
  }
}
