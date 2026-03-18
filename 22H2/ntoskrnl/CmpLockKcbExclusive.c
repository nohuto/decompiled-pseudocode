/*
 * XREFs of CmpLockKcbExclusive @ 0x1406D8518
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140207A94 (CmpRemoveHiveFromNamespace.c)
 *     CmpDrainDelayDerefContext @ 0x14022D510 (CmpDrainDelayDerefContext.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8840 (CmpCreateKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1406DB3F0 (CmpDeleteKeyObject.c)
 *     CmpVEExecuteOpenLogic @ 0x1406DD580 (CmpVEExecuteOpenLogic.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7F40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FBF8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockKcbStackExclusive @ 0x140710868 (CmpLockKcbStackExclusive.c)
 *     CmpCreateKeyBody @ 0x14072F7D0 (CmpCreateKeyBody.c)
 *     CmpDelayCloseWorker @ 0x14076A640 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076B020 (CmpDereferenceKeyControlBlock.c)
 *     CmpVEExecuteCreateLogic @ 0x1407BA9F4 (CmpVEExecuteCreateLogic.c)
 *     CmpEnlistKeyBody @ 0x1407C07FC (CmpEnlistKeyBody.c)
 *     CmLockKeyForWrite @ 0x14084905C (CmLockKeyForWrite.c)
 *     CmpResolveHiveLoadConflict @ 0x140A16AC8 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A177F4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A182E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x140A1A058 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140A1BE74 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FB6C (CmpEnumerateAllHigherLayerKcbs.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbExclusive(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  struct _KTHREAD *result; // rax

  v1 = (unsigned __int64 *)(a1 + 48);
  v3 = KeAbPreAcquire(a1 + 48, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (__int64)v1);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
