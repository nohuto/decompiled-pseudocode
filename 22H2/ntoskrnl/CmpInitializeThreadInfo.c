/*
 * XREFs of CmpInitializeThreadInfo @ 0x14022E660
 * Callers:
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmInitializeThreadInfo @ 0x140337F30 (CmInitializeThreadInfo.c)
 *     CmpLazyWriteWorker @ 0x14039FE60 (CmpLazyWriteWorker.c)
 *     CmSetCallbackObjectContext @ 0x14068F0A0 (CmSetCallbackObjectContext.c)
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     NtCreateKeyTransacted @ 0x140692240 (NtCreateKeyTransacted.c)
 *     NtCreateKey @ 0x1406923A0 (NtCreateKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140693350 (CmpLateUnloadHiveWorker.c)
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 *     NtUnloadKey2 @ 0x140698D40 (NtUnloadKey2.c)
 *     NtUnloadKey @ 0x140698D90 (NtUnloadKey.c)
 *     NtSetValueKey @ 0x1406D2AB0 (NtSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406D4B90 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpSecurityMethod @ 0x1406D5980 (CmpSecurityMethod.c)
 *     NtQueryKey @ 0x1406D6C60 (NtQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1406DB3F0 (CmpDeleteKeyObject.c)
 *     NtEnumerateKey @ 0x1406DBEC0 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x1406E2F20 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1406E6A30 (CmpParseKey.c)
 *     NtQueryMultipleValueKey @ 0x14070DE10 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14070E3E0 (NtEnumerateValueKey.c)
 *     NtDeleteValueKey @ 0x14070EAF0 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FD60 (NtDeleteKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140767040 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x1407685A0 (CmpCloseKeyObject.c)
 *     CmpDelayCloseWorker @ 0x14076A640 (CmpDelayCloseWorker.c)
 *     CmNotifyRunDown @ 0x14076EAF4 (CmNotifyRunDown.c)
 *     CmGetRootKeyObjectForSilo @ 0x14077A8E0 (CmGetRootKeyObjectForSilo.c)
 *     CmInitSiloNamespace @ 0x14077D2D8 (CmInitSiloNamespace.c)
 *     NtOpenKeyEx @ 0x1407AC2B0 (NtOpenKeyEx.c)
 *     NtOpenKey @ 0x1407ACA00 (NtOpenKey.c)
 *     NtFlushKey @ 0x1407ACA70 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1407ACFA0 (NtSetInformationKey.c)
 *     CmpCloseLightWeightTransaction @ 0x1407D0D60 (CmpCloseLightWeightTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x1407D0DB0 (CmpRollbackLightWeightTransaction.c)
 *     NtCreateRegistryTransaction @ 0x1407D22C0 (NtCreateRegistryTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x1407D3A80 (NtOpenKeyTransactedEx.c)
 *     NtInitializeRegistry @ 0x1407E91B0 (NtInitializeRegistry.c)
 *     CmpDelayFreeRMWorker @ 0x1407E9430 (CmpDelayFreeRMWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x14080D490 (CmpFinishSystemHivesLoad.c)
 *     CmInitServerSiloState @ 0x14080EBB4 (CmInitServerSiloState.c)
 *     CmpLoadHiveThread @ 0x1408283D0 (CmpLoadHiveThread.c)
 *     NtLockRegistryKey @ 0x140848FA0 (NtLockRegistryKey.c)
 *     CmpRegisterCallbackInternal @ 0x140851C2C (CmpRegisterCallbackInternal.c)
 *     NtUnloadKeyEx @ 0x140875ED0 (NtUnloadKeyEx.c)
 *     CmpEnumerateCallback @ 0x140885A50 (CmpEnumerateCallback.c)
 *     CmCallbackGetKeyObjectID @ 0x1408ABBD0 (CmCallbackGetKeyObjectID.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ACE68 (PspDeleteExternalServerSiloState.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D150 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCommitRegistryTransaction @ 0x140A0D300 (NtCommitRegistryTransaction.c)
 *     NtCompactKeys @ 0x140A0D420 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0D6F0 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x140A0D8B0 (NtFreezeRegistry.c)
 *     NtOpenRegistryTransaction @ 0x140A0D990 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x140A0DAD0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0DD10 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140A0E060 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140A0E560 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140A0E8C0 (NtRestoreKey.c)
 *     NtRollbackRegistryTransaction @ 0x140A0EB40 (NtRollbackRegistryTransaction.c)
 *     NtSaveKeyEx @ 0x140A0EC80 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0EF10 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x140A0F1B0 (NtThawRegistry.c)
 *     CmUnRegisterCallback @ 0x140A0F270 (CmUnRegisterCallback.c)
 *     CmpCloneHwProfile @ 0x140A10264 (CmpCloneHwProfile.c)
 *     CmShutdownSystem @ 0x140A11388 (CmShutdownSystem.c)
 *     CmpForceFlushWorker @ 0x140A11BB0 (CmpForceFlushWorker.c)
 *     CmpFreeSiloContextCallback @ 0x140A11CB0 (CmpFreeSiloContextCallback.c)
 *     CmEtwRunDown @ 0x140A124D4 (CmEtwRunDown.c)
 *     CmReconcileAndValidateAllHives @ 0x140A13328 (CmReconcileAndValidateAllHives.c)
 *     CmpFreezeThawWorker @ 0x140A13810 (CmpFreezeThawWorker.c)
 *     CmpLazyCommitWorker @ 0x140A1C170 (CmpLazyCommitWorker.c)
 *     CmSaveKeyToBuffer @ 0x140AF67B0 (CmSaveKeyToBuffer.c)
 *     CmInitSystem1 @ 0x140B39964 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140B41BA0 (CmGetSystemDriverList.c)
 *     CmpGetSystemControlValues @ 0x140B5C934 (CmpGetSystemControlValues.c)
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
