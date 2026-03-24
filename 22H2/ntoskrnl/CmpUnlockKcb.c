/*
 * XREFs of CmpUnlockKcb @ 0x140640260
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     CmpDoQueryKeyName @ 0x140347BE0 (CmpDoQueryKeyName.c)
 *     CmpRemoveHiveFromNamespace @ 0x140360E58 (CmpRemoveHiveFromNamespace.c)
 *     CmpDelayCloseWorker @ 0x1405EC390 (CmpDelayCloseWorker.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405EEA70 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockTwoKcbs @ 0x1405F3950 (CmpUnlockTwoKcbs.c)
 *     CmQueryKey @ 0x1405F5810 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x140648D30 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140649B30 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCreateKeyBody @ 0x140649DB0 (CmpCreateKeyBody.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x14066C550 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406852C0 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x140685510 (CmpVEExecuteCreateLogic.c)
 *     NtFlushKey @ 0x140696C00 (NtFlushKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406A5B3C (CmKeyBodyNeedsVirtualImage.c)
 *     CmpVEExecuteOpenLogic @ 0x1406CDD50 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406CE470 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406DC020 (NtNotifyChangeMultipleKeys.c)
 *     CmpDeleteKeyObject @ 0x1406E03B0 (CmpDeleteKeyObject.c)
 *     CmQueryMultipleValueKey @ 0x1406E2464 (CmQueryMultipleValueKey.c)
 *     CmpCloseKeyObject @ 0x1406E3D70 (CmpCloseKeyObject.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140734DF4 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140765B90 (CmpFindSubkeyInHashByChildCell.c)
 *     CmLockKeyForWrite @ 0x1407C37B0 (CmLockKeyForWrite.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E774 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F224 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F870 (CmKeyBodyRemapToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x140870A14 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140872844 (CmpGlobalUnlockKeyForWrite.c)
 *     CmDumpKey @ 0x14087BD68 (CmDumpKey.c)
 *     CmRestoreKey @ 0x14087BF80 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14087D448 (CmpRefreshHive.c)
 *     CmpCreateRegistryRoot @ 0x140A5AED4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x14066D340 (CmpFreeKeyControlBlock.c)
 */

char __fastcall CmpUnlockKcb(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi
  char result; // al

  v2 = *(_DWORD *)(BugCheckParameter2 + 8) & 0x80000;
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) == KeGetCurrentThread() )
    *(_QWORD *)(BugCheckParameter2 + 56) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 56));
  result = ExReleasePushLockEx(BugCheckParameter2 + 48, 0LL);
  if ( v2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
      return CmpFreeKeyControlBlock(BugCheckParameter2);
  }
  return result;
}
