/*
 * XREFs of CmpAcquireShutdownRundown @ 0x140AF23A0
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1406B40B0 (NtNotifyChangeMultipleKeys.c)
 *     NtDeleteKey @ 0x1406B72F0 (NtDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     NtQueryMultipleValueKey @ 0x1406B8CB0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x1406B9280 (NtDeleteValueKey.c)
 *     NtCreateKeyTransacted @ 0x1406BB890 (NtCreateKeyTransacted.c)
 *     CmCreateKey @ 0x1406BBA60 (CmCreateKey.c)
 *     NtQueryKey @ 0x1406E6630 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1406E6C50 (NtQueryValueKey.c)
 *     CmOpenKey @ 0x1406E7B60 (CmOpenKey.c)
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14072C970 (CmpReorganizeHive.c)
 *     CmpDoLocalizeNextHive @ 0x140731900 (CmpDoLocalizeNextHive.c)
 *     NtFlushKey @ 0x140758B70 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1407590A0 (NtSetInformationKey.c)
 *     CmpCloseLightWeightTransaction @ 0x140781E90 (CmpCloseLightWeightTransaction.c)
 *     NtCreateRegistryTransaction @ 0x1407837C0 (NtCreateRegistryTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x140784470 (NtOpenKeyTransactedEx.c)
 *     NtSetValueKey @ 0x1407A9030 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x1407AB260 (NtEnumerateValueKey.c)
 *     CmpQueryKeySecurity @ 0x1407AC310 (CmpQueryKeySecurity.c)
 *     NtEnumerateKey @ 0x1407AC4B0 (NtEnumerateKey.c)
 *     CmpConstructNameWithStatus @ 0x1407AF2E0 (CmpConstructNameWithStatus.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     NtLockRegistryKey @ 0x140845E40 (NtLockRegistryKey.c)
 *     CmpHandlePageFileOpenNotification @ 0x140851670 (CmpHandlePageFileOpenNotification.c)
 *     CmpAssignKeySecurity @ 0x140854E7C (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140A078D8 (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0A440 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCommitRegistryTransaction @ 0x140A0A5F0 (NtCommitRegistryTransaction.c)
 *     NtCompactKeys @ 0x140A0A710 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0A9E0 (NtCompressKey.c)
 *     NtOpenRegistryTransaction @ 0x140A0AC80 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x140A0ADC0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0B000 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140A0B350 (NtRenameKey.c)
 *     NtRestoreKey @ 0x140A0BBB0 (NtRestoreKey.c)
 *     NtRollbackRegistryTransaction @ 0x140A0BE30 (NtRollbackRegistryTransaction.c)
 *     NtSaveKeyEx @ 0x140A0BF70 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0C200 (NtSaveMergedKeys.c)
 *     CmpForceFlushWorker @ 0x140A0EEA0 (CmpForceFlushWorker.c)
 *     CmReconcileAndValidateAllHives @ 0x140A105DC (CmReconcileAndValidateAllHives.c)
 *     CmFreezeRegistry @ 0x140A10664 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A10894 (CmThawRegistry.c)
 *     CmGetSystemDriverList @ 0x140B59568 (CmGetSystemDriverList.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 */

BOOLEAN CmpAcquireShutdownRundown()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = ExAcquireRundownProtection_0(&CmpShutdownRundown);
  if ( !result )
  {
    KeLeaveCriticalRegion();
    return 0;
  }
  return result;
}
