/*
 * XREFs of CmpGetNextActiveHive @ 0x1406EB310
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x14036B7F8 (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpDoFlushNextHive @ 0x1406EB100 (CmpDoFlushNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x1406EB244 (CmpBlockTwoHiveWrites.c)
 *     CmpDoLocalizeNextHive @ 0x14071BCA0 (CmpDoLocalizeNextHive.c)
 *     CmpDoReconcileNextHive @ 0x140724450 (CmpDoReconcileNextHive.c)
 *     CmpTransMgrPrepare @ 0x140768324 (CmpTransMgrPrepare.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407C8C58 (CmpHandlePageFileOpenNotification.c)
 *     CmpUpdatePhaseAccessBit @ 0x1407CEE5C (CmpUpdatePhaseAccessBit.c)
 *     CmEtwRunDown @ 0x14086A3B8 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x14086B948 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x14086BCE8 (CmpFreeAllMemory.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086E62C (CmpIsHiveAlreadyLoaded.c)
 *     CmFreezeRegistry @ 0x140872140 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140872380 (CmThawRegistry.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 */

__int64 *__fastcall CmpGetNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  __int64 *v1; // rdi
  __int64 *v3; // rsi

  v1 = 0LL;
  v3 = &CmpHiveListHead;
  if ( a1 )
    v3 = (__int64 *)&a1[200];
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  while ( 1 )
  {
    v3 = (__int64 *)*v3;
    if ( v3 == &CmpHiveListHead )
      break;
    v1 = v3 - 200;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v3 + 4) )
      break;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  if ( a1 )
    ExReleaseRundownProtection(a1 + 204);
  return v1;
}
