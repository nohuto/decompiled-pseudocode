/*
 * XREFs of CmpLockKcbExclusive @ 0x1407AF778
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x1402BFC14 (CmpRemoveHiveFromNamespace.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbStackExclusive @ 0x1406B7DF8 (CmpLockKcbStackExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406BA388 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     CmpVEExecuteCreateLogic @ 0x140768C00 (CmpVEExecuteCreateLogic.c)
 *     CmpEnlistKeyBody @ 0x14076EBCC (CmpEnlistKeyBody.c)
 *     CmpDelayCloseWorker @ 0x1407AB950 (CmpDelayCloseWorker.c)
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 *     CmpVEExecuteOpenLogic @ 0x1407B6770 (CmpVEExecuteOpenLogic.c)
 *     CmpCreateKeyBody @ 0x1407BA4F0 (CmpCreateKeyBody.c)
 *     CmLockKeyForWrite @ 0x140845EFC (CmLockKeyForWrite.c)
 *     CmpResolveHiveLoadConflict @ 0x140A13D78 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A14AA4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A15598 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x140A17308 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140A19124 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1CE0C (CmpEnumerateAllHigherLayerKcbs.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
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
