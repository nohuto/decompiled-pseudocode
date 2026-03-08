/*
 * XREFs of CmpLazyCommitWorker @ 0x140A19420
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     CmpTransMgrCommit @ 0x1406B5ED0 (CmpTransMgrCommit.c)
 *     LOCK_HIVE_LOAD @ 0x1406C00DC (LOCK_HIVE_LOAD.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406C0154 (UNLOCK_HIVE_LOAD.c)
 *     CmpCleanupTransactionState @ 0x14073526C (CmpCleanupTransactionState.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AF2034 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AF2058 (CmpAcquireHiveLoadUnloadRundown.c)
 */

__int64 CmpLazyCommitWorker()
{
  char v0; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 **v5; // rax
  struct _KTHREAD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  _QWORD **v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v12; // [rsp+38h] [rbp-18h]
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+78h] [rbp+28h] BYREF

  v14 = 0;
  v0 = 1;
  v13 = 0LL;
  CmpInitializeThreadInfo((__int64)&v13);
  v11 = &v11;
  v12 = (__int64 *)&v11;
  if ( (unsigned __int8)CmpAcquireHiveLoadUnloadRundown() )
  {
    LOCK_HIVE_LOAD();
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v2 = (__int64 *)CmpLazyCommitListHead;
      if ( *(__int64 **)(CmpLazyCommitListHead + 8) != &CmpLazyCommitListHead
        || (v3 = *(_QWORD *)CmpLazyCommitListHead,
            *(_QWORD *)(*(_QWORD *)CmpLazyCommitListHead + 8LL) != CmpLazyCommitListHead) )
      {
LABEL_20:
        __fastfail(3u);
      }
      CmpLazyCommitListHead = *(_QWORD *)CmpLazyCommitListHead;
      *(_QWORD *)(v3 + 8) = &CmpLazyCommitListHead;
      if ( v2 == &CmpLazyCommitListHead )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegion();
      if ( (int)CmpTransMgrCommit(v4, (__int64)(v2 - 4), &v14) < 0 )
      {
        v5 = (__int64 **)v12;
        if ( (_QWORD ***)*v12 != &v11 )
          goto LABEL_20;
        v2[1] = (__int64)v12;
        *v2 = (__int64)&v11;
        v0 = 0;
        *v5 = v2;
        v12 = v2;
      }
      else
      {
        CmpCleanupTransactionState(v2[4], v2 - 4, 4, 0);
      }
    }
    CmpLazyCommitWorkItemActive = v0 == 0;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    if ( !v0 )
    {
      v6 = KeGetCurrentThread();
      --v6->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      while ( 1 )
      {
        v7 = v11;
        if ( v11[1] != &v11 )
          goto LABEL_20;
        v8 = (__int64)*v11;
        if ( (_QWORD **)(*v11)[1] != v11 )
          goto LABEL_20;
        v11 = (_QWORD **)*v11;
        *(_QWORD *)(v8 + 8) = &v11;
        if ( v7 == &v11 )
          break;
        v9 = (_QWORD *)qword_140C13B88;
        if ( *(__int64 **)qword_140C13B88 != &CmpLazyCommitListHead )
          goto LABEL_20;
        *v7 = &CmpLazyCommitListHead;
        v7[1] = v9;
        *v9 = v7;
        qword_140C13B88 = (__int64)v7;
      }
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegion();
      KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
    }
    UNLOCK_HIVE_LOAD();
    CmpReleaseHiveLoadUnloadRundown();
  }
  return CmCleanupThreadInfo((__int64 *)&v13);
}
