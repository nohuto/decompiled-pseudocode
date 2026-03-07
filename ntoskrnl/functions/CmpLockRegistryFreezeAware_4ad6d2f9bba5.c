__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rbx
  signed __int64 v10; // rdx
  ULONG_PTR v11; // rtt
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  v20 = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(v3, v2, v4, v5);
  while ( CmpFreezeThawState == 1 )
  {
    KeResetEvent(&Event);
    v7 = KeAbPreAcquire((__int64)&CmpFreezeListLock, 0LL);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&CmpFreezeListLock, v7, (__int64)&CmpFreezeListLock);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
    if ( *(__int64 **)qword_140C13D38 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    *((_QWORD *)&v20 + 1) = qword_140C13D38;
    *(_QWORD *)&v20 = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_140C13D38 = &v20;
    qword_140C13D38 = (__int64)&v20;
    _m_prefetchw(&CmpFreezeListLock);
    v10 = CmpFreezeListLock - 16;
    if ( (CmpFreezeListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v10 = 0LL;
    if ( (CmpFreezeListLock & 2) != 0
      || (v11 = CmpFreezeListLock,
          v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpFreezeListLock, v10, CmpFreezeListLock)) )
    {
      ExfReleasePushLock(&CmpFreezeListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpFreezeListLock);
    CmpUnlockRegistry(v13, v12, v14, v15);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( a1 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry(v17, v16, v18, v19);
  }
  return 0LL;
}
