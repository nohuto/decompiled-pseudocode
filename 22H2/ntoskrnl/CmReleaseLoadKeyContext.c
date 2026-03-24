/*
 * XREFs of CmReleaseLoadKeyContext @ 0x1406EADC0
 * Callers:
 *     CmLoadDifferencingKey @ 0x1406E737C (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140648D30 (CmpDereferenceKeyControlBlock.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406EB3B0 (UNLOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406EB3EC (CmpDoQueueLateUnloadWorker.c)
 *     LOCK_HIVE_LOAD @ 0x1406EB544 (LOCK_HIVE_LOAD.c)
 */

__int64 __fastcall CmReleaseLoadKeyContext(ULONG_PTR BugCheckParameter2, int a2)
{
  if ( a2 < 0 )
  {
    LOCK_HIVE_LOAD(BugCheckParameter2);
    CmpLockRegistry();
    if ( *(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 32) + 2936LL) == 1 )
    {
      CmpDereferenceKeyControlBlock(BugCheckParameter2);
      CmpDoQueueLateUnloadWorker(*(_QWORD *)(BugCheckParameter2 + 32));
    }
    else
    {
      CmpDereferenceKeyControlBlock(BugCheckParameter2);
    }
    CmpUnlockRegistry();
    return UNLOCK_HIVE_LOAD();
  }
  else
  {
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
    return CmpUnlockRegistry();
  }
}
