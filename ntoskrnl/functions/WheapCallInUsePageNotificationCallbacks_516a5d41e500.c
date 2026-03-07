__int64 __fastcall WheapCallInUsePageNotificationCallbacks(__int64 a1, char a2, char a3)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  signed __int8 v10; // cf
  __int64 v11; // rbx
  PVOID *i; // rbx

  if ( WheapInUsePageOfflineNotifyInit != 1 )
    return 3221225473LL;
  v7 = KeAbPreAcquire((__int64)&WheapInUsePageOfflineNotifyLock, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&WheapInUsePageOfflineNotifyLock, 0LL);
  v11 = v7;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&WheapInUsePageOfflineNotifyLock, v7, (__int64)&WheapInUsePageOfflineNotifyLock);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  for ( i = (PVOID *)WheapInUsePageOfflineNotifyList; i != &WheapInUsePageOfflineNotifyList; i = (PVOID *)*i )
  {
    LOBYTE(v9) = a3;
    LOBYTE(v8) = a2;
    ((void (__fastcall *)(__int64, __int64, __int64, PVOID))i[2])(a1, v8, v9, i[3]);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapInUsePageOfflineNotifyLock);
  KeAbPostRelease((ULONG_PTR)&WheapInUsePageOfflineNotifyLock);
  return 0LL;
}
