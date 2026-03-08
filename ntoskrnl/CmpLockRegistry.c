/*
 * XREFs of CmpLockRegistry @ 0x140AF2270
 * Callers:
 *     CmpDoQueryKeyName @ 0x140243A70 (CmpDoQueryKeyName.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402B2B14 (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x140613784 (CmShutdownSystem1.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406B40B0 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x1406B5340 (CmpCloseKeyObject.c)
 *     CmpTransMgrPrepare @ 0x1406B5D04 (CmpTransMgrPrepare.c)
 *     NtDeleteKey @ 0x1406B72F0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmCreateKey @ 0x1406BBA60 (CmCreateKey.c)
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 *     CmpCleanupParseContext @ 0x1406BD6A8 (CmpCleanupParseContext.c)
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1406BF3D0 (CmpLockRegistryFreezeAware.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     CmOpenKey @ 0x1406E7B60 (CmOpenKey.c)
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14072C970 (CmpReorganizeHive.c)
 *     CmpLinkHiveToMaster @ 0x140731250 (CmpLinkHiveToMaster.c)
 *     CmpTrimHive @ 0x1407317CC (CmpTrimHive.c)
 *     CmpDoLocalizeNextHive @ 0x140731900 (CmpDoLocalizeNextHive.c)
 *     HvpFinishPrimaryWrite @ 0x140732380 (HvpFinishPrimaryWrite.c)
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
 *     CmpCleanupTransactionState @ 0x14073526C (CmpCleanupTransactionState.c)
 *     CmpStartSiloRegistryNamespace @ 0x140738F48 (CmpStartSiloRegistryNamespace.c)
 *     CmpLateUnloadHiveWorker @ 0x14074A6B0 (CmpLateUnloadHiveWorker.c)
 *     CmpStopRMLog @ 0x14074C3C4 (CmpStopRMLog.c)
 *     CmReleaseLoadKeyContext @ 0x14079329C (CmReleaseLoadKeyContext.c)
 *     CmpTransMgrSyncHive @ 0x140798AD0 (CmpTransMgrSyncHive.c)
 *     CmQueryMultipleValueKey @ 0x1407A6F60 (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1407AAEC0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmEnumerateValueKey @ 0x1407AB770 (CmEnumerateValueKey.c)
 *     CmpDelayCloseWorker @ 0x1407AB950 (CmpDelayCloseWorker.c)
 *     CmpQueryKeySecurity @ 0x1407AC310 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x1407ACAE0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1407AE5C0 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x1407B4730 (CmQueryValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmNotifyRunDown @ 0x1407D9F54 (CmNotifyRunDown.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140820D0C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmLockKeyForWrite @ 0x140845EFC (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x140854E7C (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1408A6D60 (CmCallbackGetKeyObjectID.c)
 *     CmDumpKeyToFile @ 0x140A07E64 (CmDumpKeyToFile.c)
 *     CmSaveKey @ 0x140A08D50 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140A09144 (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0A440 (CmOpenKeyForBugCheckRecovery.c)
 *     CmReplaceKey @ 0x140A12A54 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x140A12D14 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A13248 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A13774 (CmpEnumerateLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A14D34 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A15240 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A152D4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A15598 (CmKeyBodyReplicateToVirtual.c)
 *     CmpFlushBackupHive @ 0x140A17C48 (CmpFlushBackupHive.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A191F8 (CmpStopSiloKeyLockTracker.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1A1E0 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpDoReOpenTransKey @ 0x140A27F24 (CmpDoReOpenTransKey.c)
 *     CmpDumpKeyToBuffer @ 0x140AF28C4 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     CmpRecordRegistryLockAcquire @ 0x140263080 (CmpRecordRegistryLockAcquire.c)
 *     PsBoostThreadIo @ 0x1402634B0 (PsBoostThreadIo.c)
 */

BOOLEAN __fastcall CmpLockRegistry()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al

  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpRecordRegistryLockAcquire();
    return ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  return result;
}
