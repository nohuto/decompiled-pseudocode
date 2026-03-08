/*
 * XREFs of CmpDeleteHive @ 0x14074C680
 * Callers:
 *     CmpUnlockHashEntryByKcb @ 0x1406B6550 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceHive @ 0x1406B6634 (CmpDereferenceHive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406B7100 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmLoadAppKey @ 0x1406BDA5C (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1406BE36C (CmpGetNextHive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     CmpLateUnloadHiveWorker @ 0x14074A6B0 (CmpLateUnloadHiveWorker.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14074B268 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpUnlockHashEntry @ 0x1407AB010 (CmpUnlockHashEntry.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     CmpBlockHiveWrites @ 0x140A10B04 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x140A10BB8 (CmpBlockTwoHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A10CD4 (CmpUnblockHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x140A10D8C (CmpUnblockTwoHiveWrites.c)
 *     CmpDestroyHive @ 0x140A19FFC (CmpDestroyHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x140A1C8D8 (CmpUnlockHashEntryByIndex.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpDeleteKcbCache @ 0x14074C7C4 (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x14074C830 (HvFreeDirtyData.c)
 *     CmpReleaseGlobalQuota @ 0x1407A5908 (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDeleteHive(_QWORD *P)
{
  _QWORD *v1; // rdi
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  signed __int64 v8; // rdx
  ULONG_PTR v9; // rtt
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx

  v1 = P + 201;
  if ( (_QWORD *)*v1 != v1 )
  {
    v3 = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
    v5 = v3;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v3, (__int64)&CmpHiveListHeadLock);
    if ( v5 )
      *(_BYTE *)(v5 + 18) = 1;
    v6 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v7 = (_QWORD *)v1[1], (_QWORD *)*v7 != v1) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    _m_prefetchw(&CmpHiveListHeadLock);
    v8 = CmpHiveListHeadLock - 16;
    if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v8 = 0LL;
    if ( (CmpHiveListHeadLock & 2) != 0
      || (v9 = CmpHiveListHeadLock,
          v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, v8, CmpHiveListHeadLock)) )
    {
      ExfReleasePushLock(&CmpHiveListHeadLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
  }
  *(_DWORD *)P = -1160724768;
  HvFreeDirtyData(P);
  CmpDeleteKcbCache(P);
  v10 = (void *)P[231];
  if ( v10 )
    ExFreePoolWithTag(v10, 0x624E4D43u);
  v11 = (void *)P[233];
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = (void *)P[602];
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  CmpReleaseGlobalQuota(4824LL);
  ExFreePoolWithTag(P, 0);
}
