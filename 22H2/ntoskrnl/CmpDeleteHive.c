/*
 * XREFs of CmpDeleteHive @ 0x14074EBE4
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x140693350 (CmpLateUnloadHiveWorker.c)
 *     CmpDeleteKeyObject @ 0x1406DB3F0 (CmpDeleteKeyObject.c)
 *     CmpWalkOneLevel @ 0x1406DD8D0 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7F40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14073E9B8 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmLoadAppKey @ 0x140769B50 (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x14076A460 (CmpGetNextHive.c)
 *     CmpUnlockHashEntry @ 0x14076AAD0 (CmpUnlockHashEntry.c)
 *     CmpUnlockHashEntryByKcb @ 0x14076ACC0 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceHive @ 0x14076ADA4 (CmpDereferenceHive.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14076B338 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpBlockHiveWrites @ 0x140A13854 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x140A13908 (CmpBlockTwoHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A13A24 (CmpUnblockHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x140A13ADC (CmpUnblockTwoHiveWrites.c)
 *     CmpDestroyHive @ 0x140A1CD50 (CmpDestroyHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x140A1F62C (CmpUnlockHashEntryByIndex.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BD800 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpReleaseGlobalQuota @ 0x1407099D8 (CmpReleaseGlobalQuota.c)
 *     CmpDeleteKcbCache @ 0x14074ED28 (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x14075148C (HvFreeDirtyData.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
  CmpReleaseGlobalQuota(0x12D8u);
  ExFreePoolWithTag(P, 0);
}
