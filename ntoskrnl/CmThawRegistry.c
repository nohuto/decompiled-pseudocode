/*
 * XREFs of CmThawRegistry @ 0x140A10894
 * Callers:
 *     NtThawRegistry @ 0x140A0C4A0 (NtThawRegistry.c)
 *     CmFreezeRegistry @ 0x140A10664 (CmFreezeRegistry.c)
 *     CmpFreezeThawWorker @ 0x140A10AC0 (CmpFreezeThawWorker.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpEnableLazyFlush @ 0x1403AF4D8 (CmpEnableLazyFlush.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmpGetNextActiveHive @ 0x1406BD940 (CmpGetNextActiveHive.c)
 *     HvMarkBaseBlockDirty @ 0x140871E3C (HvMarkBaseBlockDirty.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 */

__int64 CmThawRegistry()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 *NextActiveHive; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  signed __int8 v15; // cf
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rax
  signed __int64 v19; // rdx
  ULONG_PTR v20; // rtt
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8

  v0 = 0;
  KeCancelTimer(&CmpFreezeThawTimer);
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v2, v1, v3) )
  {
    CmpLockRegistryExclusive();
    if ( CmpFreezeThawState == 1 )
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v13 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v13 = (__int64)NextActiveHive;
        if ( !NextActiveHive )
          break;
        v9 = NextActiveHive[8];
        if ( !*(_DWORD *)(v9 + 164) )
        {
          *(_OWORD *)(v9 + 112) = *(_OWORD *)(v9 + 4056);
          *(_OWORD *)(*(_QWORD *)(v13 + 64) + 148LL) = *(_OWORD *)(*(_QWORD *)(v13 + 64) + 4040LL);
          *(_OWORD *)(*(_QWORD *)(v13 + 64) + 128LL) = *(_OWORD *)(*(_QWORD *)(v13 + 64) + 4072LL);
          *(_DWORD *)(*(_QWORD *)(v13 + 64) + 164LL) = 1836346738;
          if ( (*(_DWORD *)(v13 + 4112) & 0x300) != 0x100 && !*(_DWORD *)(v13 + 104) )
          {
            v10 = KeAbPreAcquire(v13 + 80, 0LL);
            v11 = v10;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 80), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v13 + 80), v10, v13 + 80);
            if ( v11 )
              *(_BYTE *)(v11 + 18) = 1;
            HvMarkBaseBlockDirty(v13);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v13 + 80));
            KeAbPostRelease(v13 + 80);
          }
        }
      }
      while ( (__int64 *)CmpFreezeThawWaitListHead != &CmpFreezeThawWaitListHead )
      {
        v14 = KeAbPreAcquire((__int64)&CmpFreezeListLock, 0LL);
        v15 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock, 0LL);
        v16 = v14;
        if ( v15 )
          ExfAcquirePushLockExclusiveEx(&CmpFreezeListLock, v14, (__int64)&CmpFreezeListLock);
        if ( v16 )
          *(_BYTE *)(v16 + 18) = 1;
        v17 = CmpFreezeThawWaitListHead;
        if ( *(__int64 **)(CmpFreezeThawWaitListHead + 8) != &CmpFreezeThawWaitListHead
          || (v18 = *(_QWORD *)CmpFreezeThawWaitListHead,
              *(_QWORD *)(*(_QWORD *)CmpFreezeThawWaitListHead + 8LL) != CmpFreezeThawWaitListHead) )
        {
          __fastfail(3u);
        }
        CmpFreezeThawWaitListHead = *(_QWORD *)CmpFreezeThawWaitListHead;
        *(_QWORD *)(v18 + 8) = &CmpFreezeThawWaitListHead;
        _m_prefetchw(&CmpFreezeListLock);
        v19 = CmpFreezeListLock - 16;
        if ( (CmpFreezeListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v19 = 0LL;
        if ( (CmpFreezeListLock & 2) != 0
          || (v20 = CmpFreezeListLock,
              v20 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpFreezeListLock,
                       v19,
                       CmpFreezeListLock)) )
        {
          ExfReleasePushLock(&CmpFreezeListLock);
        }
        KeAbPostRelease((ULONG_PTR)&CmpFreezeListLock);
        KeSetEvent((PRKEVENT)(v17 + 16), 0, 0);
      }
      CmpFreezeThawState = 0;
      CmpEnableLazyFlush(2);
    }
    else
    {
      v0 = -1073741431;
    }
    CmpUnlockRegistry(v5, v4, v6, v7);
    CmpReleaseShutdownRundown(v22, v21, v23);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v0;
}
