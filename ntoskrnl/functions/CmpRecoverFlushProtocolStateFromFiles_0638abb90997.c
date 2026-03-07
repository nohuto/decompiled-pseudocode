__int64 __fastcall CmpRecoverFlushProtocolStateFromFiles(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  v4 = HvRecoverFlushProtocolStateFromFiles();
  v9 = v4;
  if ( v4 >= 0 )
  {
    CmpLockRegistry(v6, v5, v7, v8);
    v10 = KeAbPreAcquire(BugCheckParameter2 + 72, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 72), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(BugCheckParameter2 + 72), 0, v10, BugCheckParameter2 + 72);
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
    v11 = KeAbPreAcquire(BugCheckParameter2 + 80, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 80), v11, BugCheckParameter2 + 80);
    if ( v12 )
      *(_BYTE *)(v12 + 18) = 1;
    v9 = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
    KeAbPostRelease(BugCheckParameter2 + 80);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 + 72));
    KeAbPostRelease(BugCheckParameter2 + 72);
    CmpUnlockRegistry(v14, v13, v15, v16);
    if ( v9 >= 0 )
      return 0;
    else
      SetFailureLocation(a2, 0, 37, v9, 32);
  }
  else
  {
    SetFailureLocation(a2, 0, 37, v4, 16);
  }
  return (unsigned int)v9;
}
