/*
 * XREFs of CmpGetNextActiveHive @ 0x1406BD940
 * Callers:
 *     CmShutdownSystem1 @ 0x140613784 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406139DC (CmShutdownSystem2.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140613E8C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpTransMgrPrepare @ 0x1406B5D04 (CmpTransMgrPrepare.c)
 *     CmpDoFlushNextHive @ 0x1406BD800 (CmpDoFlushNextHive.c)
 *     CmpDoLocalizeNextHive @ 0x140731900 (CmpDoLocalizeNextHive.c)
 *     CmpDoReconcileNextHive @ 0x140732AC0 (CmpDoReconcileNextHive.c)
 *     CmpHandlePageFileOpenNotification @ 0x140851670 (CmpHandlePageFileOpenNotification.c)
 *     CmpUpdatePhaseAccessBit @ 0x14085A0A4 (CmpUpdatePhaseAccessBit.c)
 *     CmpFreeAllMemory @ 0x140A0E6C8 (CmpFreeAllMemory.c)
 *     CmEtwRunDown @ 0x140A0F788 (CmEtwRunDown.c)
 *     CmFreezeRegistry @ 0x140A10664 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A10894 (CmThawRegistry.c)
 *     CmpBlockTwoHiveWrites @ 0x140A10BB8 (CmpBlockTwoHiveWrites.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140A13C04 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 */

__int64 *__fastcall CmpGetNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  __int64 *v2; // rsi
  __int64 **v3; // r14
  __int64 v4; // rbx
  __int64 *v5; // rbx
  signed __int64 v6; // rdx
  ULONG_PTR v7; // rtt

  v2 = 0LL;
  v3 = (__int64 **)&CmpHiveListHead;
  if ( a1 )
    v3 = (__int64 **)&a1[201];
  v4 = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&CmpHiveListHeadLock, 0, v4, (__int64)&CmpHiveListHeadLock);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  v5 = *v3;
  while ( v5 != &CmpHiveListHead )
  {
    v2 = v5 - 201;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v5 + 4) )
      break;
    v5 = (__int64 *)*v5;
    v2 = 0LL;
  }
  _m_prefetchw(&CmpHiveListHeadLock);
  v6 = CmpHiveListHeadLock - 16;
  if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v6 = 0LL;
  if ( (CmpHiveListHeadLock & 2) != 0
    || (v7 = CmpHiveListHeadLock,
        v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v6, CmpHiveListHeadLock)) )
  {
    ExfReleasePushLock(&CmpHiveListHeadLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
  if ( a1 )
    ExReleaseRundownProtection_0(a1 + 205);
  return v2;
}
