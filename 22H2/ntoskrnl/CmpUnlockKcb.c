/*
 * XREFs of CmpUnlockKcb @ 0x140AF65A0
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140207A94 (CmpRemoveHiveFromNamespace.c)
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmpDrainDelayDerefContext @ 0x14022D510 (CmpDrainDelayDerefContext.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryMultipleValueKey @ 0x1406CFBE8 (CmQueryMultipleValueKey.c)
 *     CmpUnlockKcbStack @ 0x1406D5418 (CmpUnlockKcbStack.c)
 *     CmQueryKey @ 0x1406D7280 (CmQueryKey.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8840 (CmpCreateKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1406DB3F0 (CmpDeleteKeyObject.c)
 *     CmpUnlockTwoKcbs @ 0x1406DBDC4 (CmpUnlockTwoKcbs.c)
 *     CmpVEExecuteOpenLogic @ 0x1406DD580 (CmpVEExecuteOpenLogic.c)
 *     CmpWalkOneLevel @ 0x1406DD8D0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1406E0370 (CmQueryValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E23B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7F40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmEnumerateValueKey @ 0x14070E8F0 (CmEnumerateValueKey.c)
 *     CmpCreateKeyBody @ 0x14072F7D0 (CmpCreateKeyBody.c)
 *     NtNotifyChangeMultipleKeys @ 0x140767040 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x1407685A0 (CmpCloseKeyObject.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407697F0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpDelayCloseWorker @ 0x14076A640 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076B020 (CmpDereferenceKeyControlBlock.c)
 *     NtFlushKey @ 0x1407ACA70 (NtFlushKey.c)
 *     CmpVEExecuteCreateLogic @ 0x1407BA9F4 (CmpVEExecuteCreateLogic.c)
 *     CmpEnlistKeyBody @ 0x1407C07FC (CmpEnlistKeyBody.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1407E2A9C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmLockKeyForWrite @ 0x14084905C (CmLockKeyForWrite.c)
 *     CmDumpKeyToFile @ 0x140A0AB54 (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x140A0ACF4 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A0C940 (CmpRefreshHive.c)
 *     CmpResolveHiveLoadConflict @ 0x140A16AC8 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A177F4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A17F90 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18024 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A182E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x140A1A058 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140A1BE74 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FB6C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpDumpKeyToBuffer @ 0x140AF68F4 (CmpDumpKeyToBuffer.c)
 *     CmpCreateRegistryRoot @ 0x140B39780 (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BD800 (ExfReleasePushLock.c)
 *     CmpDecommisssionKcb @ 0x140699D14 (CmpDecommisssionKcb.c)
 *     CmpIsKcbLockedExclusive @ 0x1406E9190 (CmpIsKcbLockedExclusive.c)
 */

signed __int32 __fastcall CmpUnlockKcb(ULONG_PTR a1)
{
  int v2; // esi
  __int64 v3; // rcx
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  signed __int32 result; // eax

  v2 = *(_DWORD *)(a1 + 8) & 0x80000;
  if ( CmpIsKcbLockedExclusive(a1) )
    *(_QWORD *)(v3 + 56) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 56));
  _m_prefetchw((const void *)(v3 + 48));
  v4 = *(_QWORD *)(v3 + 48);
  v5 = v4 - 16;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0 || v4 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v5, v4) )
    ExfReleasePushLock((_QWORD *)(a1 + 48));
  result = KeAbPostRelease(a1 + 48);
  if ( v2 )
    return CmpDecommisssionKcb(a1);
  return result;
}
