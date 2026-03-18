/*
 * XREFs of CmpAcquireShutdownRundown @ 0x140AF6380
 * Callers:
 *     NtCreateKeyTransacted @ 0x140692240 (NtCreateKeyTransacted.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     NtSetValueKey @ 0x1406D2AB0 (NtSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x1406D5C50 (CmpQueryKeySecurity.c)
 *     NtQueryKey @ 0x1406D6C60 (NtQueryKey.c)
 *     CmpConstructNameWithStatus @ 0x1406D7C60 (CmpConstructNameWithStatus.c)
 *     NtEnumerateKey @ 0x1406DBEC0 (NtEnumerateKey.c)
 *     CmOpenKey @ 0x1406E2B10 (CmOpenKey.c)
 *     NtQueryValueKey @ 0x1406E2F20 (NtQueryValueKey.c)
 *     CmpCreateHive @ 0x14070247C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1407030D0 (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x14070C46C (CmpSetKeySecurity.c)
 *     NtQueryMultipleValueKey @ 0x14070DE10 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14070E3E0 (NtEnumerateValueKey.c)
 *     NtDeleteValueKey @ 0x14070EAF0 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FD60 (NtDeleteKey.c)
 *     CmpDoLocalizeNextHive @ 0x140751870 (CmpDoLocalizeNextHive.c)
 *     NtNotifyChangeMultipleKeys @ 0x140767040 (NtNotifyChangeMultipleKeys.c)
 *     NtFlushKey @ 0x1407ACA70 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1407ACFA0 (NtSetInformationKey.c)
 *     CmpCloseLightWeightTransaction @ 0x1407D0D60 (CmpCloseLightWeightTransaction.c)
 *     NtCreateRegistryTransaction @ 0x1407D22C0 (NtCreateRegistryTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x1407D3A80 (NtOpenKeyTransactedEx.c)
 *     CmpLoadHiveThread @ 0x1408283D0 (CmpLoadHiveThread.c)
 *     NtLockRegistryKey @ 0x140848FA0 (NtLockRegistryKey.c)
 *     CmpHandlePageFileOpenNotification @ 0x140854EE0 (CmpHandlePageFileOpenNotification.c)
 *     CmpAssignKeySecurity @ 0x1408593F0 (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140A0A5C8 (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D150 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCommitRegistryTransaction @ 0x140A0D300 (NtCommitRegistryTransaction.c)
 *     NtCompactKeys @ 0x140A0D420 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0D6F0 (NtCompressKey.c)
 *     NtOpenRegistryTransaction @ 0x140A0D990 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x140A0DAD0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0DD10 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140A0E060 (NtRenameKey.c)
 *     NtRestoreKey @ 0x140A0E8C0 (NtRestoreKey.c)
 *     NtRollbackRegistryTransaction @ 0x140A0EB40 (NtRollbackRegistryTransaction.c)
 *     NtSaveKeyEx @ 0x140A0EC80 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0EF10 (NtSaveMergedKeys.c)
 *     CmpForceFlushWorker @ 0x140A11BB0 (CmpForceFlushWorker.c)
 *     CmReconcileAndValidateAllHives @ 0x140A13328 (CmReconcileAndValidateAllHives.c)
 *     CmFreezeRegistry @ 0x140A133B0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A135E0 (CmThawRegistry.c)
 *     CmGetSystemDriverList @ 0x140B41BA0 (CmGetSystemDriverList.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
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
