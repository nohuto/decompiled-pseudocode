/*
 * XREFs of CmpLazyCommitWorker @ 0x140872B80
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402067A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206930 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiSetTimerEx @ 0x14025F5D0 (KiSetTimerEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406EB3B0 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1406EB544 (LOCK_HIVE_LOAD.c)
 *     CmpTransMgrCommit @ 0x1407684C0 (CmpTransMgrCommit.c)
 *     CmpCleanupTransactionState @ 0x140770144 (CmpCleanupTransactionState.c)
 */

_QWORD *CmpLazyCommitWorker()
{
  char v0; // di
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // al
  struct _KTHREAD *v3; // rcx
  struct _KTHREAD *v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // r9
  __int64 **v10; // rax
  struct _KTHREAD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  _QWORD **v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-8h]
  int v17; // [rsp+68h] [rbp+28h] BYREF

  v17 = 0;
  v16 = (__int64 *)&v15;
  v0 = 1;
  v15 = &v15;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v3 = KeGetCurrentThread();
  if ( v2 )
  {
    --v3->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    LOCK_HIVE_LOAD();
    while ( 1 )
    {
      v5 = KeGetCurrentThread();
      --v5->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v6 = (__int64 *)CmpLazyCommitListHead;
      if ( *(__int64 **)(CmpLazyCommitListHead + 8) != &CmpLazyCommitListHead
        || (v7 = *(_QWORD *)CmpLazyCommitListHead,
            *(_QWORD *)(*(_QWORD *)CmpLazyCommitListHead + 8LL) != CmpLazyCommitListHead) )
      {
LABEL_20:
        __fastfail(3u);
      }
      CmpLazyCommitListHead = *(_QWORD *)CmpLazyCommitListHead;
      *(_QWORD *)(v7 + 8) = &CmpLazyCommitListHead;
      if ( v6 == &CmpLazyCommitListHead )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( (int)CmpTransMgrCommit(v8, (__int64)(v6 - 4), &v17, v9) < 0 )
      {
        v10 = (__int64 **)v16;
        if ( (_QWORD ***)*v16 != &v15 )
          goto LABEL_20;
        v6[1] = (__int64)v16;
        *v6 = (__int64)&v15;
        v0 = 0;
        *v10 = v6;
        v16 = v6;
      }
      else
      {
        CmpCleanupTransactionState(v6[4], v6 - 4, 4LL, 0LL);
      }
    }
    CmpLazyCommitWorkItemActive = v0 == 0;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v0 )
    {
      v11 = KeGetCurrentThread();
      --v11->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      while ( 1 )
      {
        v12 = v15;
        if ( v15[1] != &v15 )
          goto LABEL_20;
        v13 = (__int64)*v15;
        if ( (_QWORD **)(*v15)[1] != v15 )
          goto LABEL_20;
        v15 = (_QWORD **)*v15;
        *(_QWORD *)(v13 + 8) = &v15;
        if ( v12 == &v15 )
          break;
        v14 = (_QWORD *)qword_140C47E88;
        if ( *(__int64 **)qword_140C47E88 != &CmpLazyCommitListHead )
          goto LABEL_20;
        *v12 = &CmpLazyCommitListHead;
        v12[1] = v14;
        *v14 = v12;
        qword_140C47E88 = (__int64)v12;
      }
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
    }
    UNLOCK_HIVE_LOAD();
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v3 = KeGetCurrentThread();
  }
  return KeLeaveCriticalRegionThread((__int64)v3);
}
