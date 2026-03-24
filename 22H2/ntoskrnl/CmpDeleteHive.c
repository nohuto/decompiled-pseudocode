/*
 * XREFs of CmpDeleteHive @ 0x14071BAC4
 * Callers:
 *     CmpUnlockHashEntry @ 0x1405EC638 (CmpUnlockHashEntry.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406405D0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140648D30 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406778F0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockHashEntryByKcb @ 0x1406E4E40 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1406E5814 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpUnblockHiveWrites @ 0x1406E8B98 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1406E8C40 (CmpBlockHiveWrites.c)
 *     CmLoadAppKey @ 0x1406E8CDC (CmLoadAppKey.c)
 *     CmpGetNextHive @ 0x1406E9BF4 (CmpGetNextHive.c)
 *     CmpUnblockTwoHiveWrites @ 0x1406EB048 (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1406EB244 (CmpBlockTwoHiveWrites.c)
 *     CmpDereferenceHive @ 0x14071BA9C (CmpDereferenceHive.c)
 *     CmpDestroyHive @ 0x140729DF8 (CmpDestroyHive.c)
 *     CmpUnfreezeHive @ 0x140730F8C (CmpUnfreezeHive.c)
 *     CmpQuitNextHive @ 0x14076D260 (CmpQuitNextHive.c)
 *     CmpUnlockHashEntryByIndex @ 0x140875C0C (CmpUnlockHashEntryByIndex.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     CmpReleaseGlobalQuota @ 0x1406574DC (CmpReleaseGlobalQuota.c)
 *     CmpDeleteKcbCache @ 0x14071BB80 (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x14071BBEC (HvFreeDirtyData.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDeleteHive(_QWORD *P)
{
  _QWORD *v1; // rdi
  __int64 v3; // rdx
  _QWORD *v4; // rax
  void *v5; // rcx
  void *v6; // rcx

  v1 = P + 200;
  if ( (_QWORD *)*v1 != v1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    v3 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  }
  *(_DWORD *)P = -1160724768;
  HvFreeDirtyData(P);
  CmpDeleteKcbCache(P);
  v5 = (void *)P[230];
  if ( v5 )
    ExFreePoolWithTag(v5, 0x624E4D43u);
  v6 = (void *)P[232];
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  CmpReleaseGlobalQuota(0x12E8u);
  ExFreePoolWithTag(P, 0);
}
