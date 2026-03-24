/*
 * XREFs of CmpLockKcbExclusive @ 0x1405EC35C
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x140360E58 (CmpRemoveHiveFromNamespace.c)
 *     CmpDelayCloseWorker @ 0x1405EC390 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x140648D30 (CmpDereferenceKeyControlBlock.c)
 *     CmpCreateKeyBody @ 0x140649DB0 (CmpCreateKeyBody.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406852C0 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x140685510 (CmpVEExecuteCreateLogic.c)
 *     CmpVEExecuteOpenLogic @ 0x1406CDD50 (CmpVEExecuteOpenLogic.c)
 *     CmpDeleteKeyObject @ 0x1406E03B0 (CmpDeleteKeyObject.c)
 *     DelistKeyBodyFromKCB @ 0x1406E0720 (DelistKeyBodyFromKCB.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406E1E60 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockKcbStackExclusive @ 0x1406E4F28 (CmpLockKcbStackExclusive.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140734DF4 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmLockKeyForWrite @ 0x1407C37B0 (CmLockKeyForWrite.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E774 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F224 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpReplicateKeyToVirtual @ 0x140870A14 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140872844 (CmpGlobalUnlockKeyForWrite.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbExclusive(__int64 a1)
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
