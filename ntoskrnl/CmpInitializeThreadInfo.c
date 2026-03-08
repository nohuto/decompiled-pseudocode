/*
 * XREFs of CmpInitializeThreadInfo @ 0x140263760
 * Callers:
 *     CmpDoQueryKeyName @ 0x140243A70 (CmpDoQueryKeyName.c)
 *     CmInitializeThreadInfo @ 0x1402CCA30 (CmInitializeThreadInfo.c)
 *     CmpLazyWriteWorker @ 0x14039B3B0 (CmpLazyWriteWorker.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406B40B0 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x1406B5340 (CmpCloseKeyObject.c)
 *     NtDeleteKey @ 0x1406B72F0 (NtDeleteKey.c)
 *     NtQueryMultipleValueKey @ 0x1406B8CB0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x1406B9280 (NtDeleteValueKey.c)
 *     NtCreateKeyTransacted @ 0x1406BB890 (NtCreateKeyTransacted.c)
 *     NtCreateKey @ 0x1406BB9F0 (NtCreateKey.c)
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     NtQueryKey @ 0x1406E6630 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1406E6C50 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1406E7480 (CmpParseKey.c)
 *     CmKtmNotification @ 0x140734290 (CmKtmNotification.c)
 *     CmGetRootKeyObjectForSilo @ 0x140735E40 (CmGetRootKeyObjectForSilo.c)
 *     CmInitSiloNamespace @ 0x1407388F8 (CmInitSiloNamespace.c)
 *     CmSetCallbackObjectContext @ 0x140738C30 (CmSetCallbackObjectContext.c)
 *     NtUnloadKey2 @ 0x140749B10 (NtUnloadKey2.c)
 *     NtUnloadKey @ 0x140749B90 (NtUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14074A6B0 (CmpLateUnloadHiveWorker.c)
 *     NtOpenKeyEx @ 0x140758240 (NtOpenKeyEx.c)
 *     NtOpenKey @ 0x140758B00 (NtOpenKey.c)
 *     NtFlushKey @ 0x140758B70 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1407590A0 (NtSetInformationKey.c)
 *     CmpCloseLightWeightTransaction @ 0x140781E90 (CmpCloseLightWeightTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x140781EE0 (CmpRollbackLightWeightTransaction.c)
 *     NtCreateRegistryTransaction @ 0x1407837C0 (NtCreateRegistryTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x140784470 (NtOpenKeyTransactedEx.c)
 *     NtInitializeRegistry @ 0x140799FB0 (NtInitializeRegistry.c)
 *     CmpDelayFreeRMWorker @ 0x14079A480 (CmpDelayFreeRMWorker.c)
 *     NtSetValueKey @ 0x1407A9030 (NtSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1407AAEC0 (CmCallbackGetKeyObjectIDEx.c)
 *     NtEnumerateValueKey @ 0x1407AB260 (NtEnumerateValueKey.c)
 *     CmpDelayCloseWorker @ 0x1407AB950 (CmpDelayCloseWorker.c)
 *     CmpSecurityMethod @ 0x1407AC040 (CmpSecurityMethod.c)
 *     NtEnumerateKey @ 0x1407AC4B0 (NtEnumerateKey.c)
 *     CmNotifyRunDown @ 0x1407D9F54 (CmNotifyRunDown.c)
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 *     CmInitServerSiloState @ 0x140816884 (CmInitServerSiloState.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     NtLockRegistryKey @ 0x140845E40 (NtLockRegistryKey.c)
 *     CmpRegisterCallbackInternal @ 0x14084E7EC (CmpRegisterCallbackInternal.c)
 *     NtUnloadKeyEx @ 0x140873010 (NtUnloadKeyEx.c)
 *     CmpEnumerateCallback @ 0x140880C70 (CmpEnumerateCallback.c)
 *     CmCallbackGetKeyObjectID @ 0x1408A6D60 (CmCallbackGetKeyObjectID.c)
 *     PspDeleteExternalServerSiloState @ 0x1409A9DE8 (PspDeleteExternalServerSiloState.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0A440 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCommitRegistryTransaction @ 0x140A0A5F0 (NtCommitRegistryTransaction.c)
 *     NtCompactKeys @ 0x140A0A710 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0A9E0 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x140A0ABA0 (NtFreezeRegistry.c)
 *     NtOpenRegistryTransaction @ 0x140A0AC80 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x140A0ADC0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0B000 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140A0B350 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140A0B850 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140A0BBB0 (NtRestoreKey.c)
 *     NtRollbackRegistryTransaction @ 0x140A0BE30 (NtRollbackRegistryTransaction.c)
 *     NtSaveKeyEx @ 0x140A0BF70 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0C200 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x140A0C4A0 (NtThawRegistry.c)
 *     CmUnRegisterCallback @ 0x140A0C560 (CmUnRegisterCallback.c)
 *     CmpCloneHwProfile @ 0x140A0D554 (CmpCloneHwProfile.c)
 *     CmShutdownSystem @ 0x140A0E674 (CmShutdownSystem.c)
 *     CmpForceFlushWorker @ 0x140A0EEA0 (CmpForceFlushWorker.c)
 *     CmpFreeSiloContextCallback @ 0x140A0EF70 (CmpFreeSiloContextCallback.c)
 *     CmEtwRunDown @ 0x140A0F788 (CmEtwRunDown.c)
 *     CmReconcileAndValidateAllHives @ 0x140A105DC (CmReconcileAndValidateAllHives.c)
 *     CmpFreezeThawWorker @ 0x140A10AC0 (CmpFreezeThawWorker.c)
 *     CmpLazyCommitWorker @ 0x140A19420 (CmpLazyCommitWorker.c)
 *     CmSaveKeyToBuffer @ 0x140AF2780 (CmSaveKeyToBuffer.c)
 *     CmpGetSystemControlValues @ 0x140B33800 (CmpGetSystemControlValues.c)
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140B59568 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall CmpInitializeThreadInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  _OWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = *(_OWORD **)&CurrentThread[1].ResourceIndex;
  if ( result )
  {
    *(_OWORD *)a1 = *result;
    *(_QWORD *)a1 = result;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)&CurrentThread[1].ResourceIndex = a1;
  return result;
}
