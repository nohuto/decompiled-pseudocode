/*
 * XREFs of CmpUnlockKcb @ 0x140AF2140
 * Callers:
 *     CmpDoQueryKeyName @ 0x140243A70 (CmpDoQueryKeyName.c)
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x1402BFC14 (CmpRemoveHiveFromNamespace.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406B40B0 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x1406B5340 (CmpCloseKeyObject.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x14074B840 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14074BC50 (CmpFindSubkeyInHashByChildCell.c)
 *     NtFlushKey @ 0x140758B70 (NtFlushKey.c)
 *     CmpVEExecuteCreateLogic @ 0x140768C00 (CmpVEExecuteCreateLogic.c)
 *     CmpEnlistKeyBody @ 0x14076EBCC (CmpEnlistKeyBody.c)
 *     CmQueryMultipleValueKey @ 0x1407A6F60 (CmQueryMultipleValueKey.c)
 *     CmEnumerateValueKey @ 0x1407AB770 (CmEnumerateValueKey.c)
 *     CmpDelayCloseWorker @ 0x1407AB950 (CmpDelayCloseWorker.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     CmpUnlockTwoKcbs @ 0x1407ACF58 (CmpUnlockTwoKcbs.c)
 *     CmQueryKey @ 0x1407AE5C0 (CmQueryKey.c)
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1407B4730 (CmQueryValueKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1407B6770 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCreateKeyBody @ 0x1407BA4F0 (CmpCreateKeyBody.c)
 *     CmLockKeyForWrite @ 0x140845EFC (CmLockKeyForWrite.c)
 *     CmDumpKeyToFile @ 0x140A07E64 (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     CmpResolveHiveLoadConflict @ 0x140A13D78 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A14AA4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A15240 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A152D4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A15598 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x140A17308 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140A19124 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1CE0C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpDumpKeyToBuffer @ 0x140AF28C4 (CmpDumpKeyToBuffer.c)
 *     CmpCreateRegistryRoot @ 0x140B5131C (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpIsKcbLockedExclusive @ 0x1406E1610 (CmpIsKcbLockedExclusive.c)
 *     CmpDecommisssionKcb @ 0x14074C040 (CmpDecommisssionKcb.c)
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
