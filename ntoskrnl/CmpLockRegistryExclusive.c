/*
 * XREFs of CmpLockRegistryExclusive @ 0x1406B6454
 * Callers:
 *     CmShutdownSystem1 @ 0x140613784 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406139DC (CmShutdownSystem2.c)
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmpLockRegistryFreezeAware @ 0x1406BF3D0 (CmpLockRegistryFreezeAware.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpCleanupTransactionState @ 0x14073526C (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x140782064 (CmpCleanupLightWeightTransaction.c)
 *     CmpDelayFreeRMWorker @ 0x14079A480 (CmpDelayFreeRMWorker.c)
 *     CmEnumerateKey @ 0x1407ACAE0 (CmEnumerateKey.c)
 *     CmpMountPreloadedHives @ 0x140812EF4 (CmpMountPreloadedHives.c)
 *     CmpMarkCurrentProfileDirty @ 0x140814218 (CmpMarkCurrentProfileDirty.c)
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 *     CmCompleteRegistryInitialization @ 0x1408174BC (CmCompleteRegistryInitialization.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     CmpSaveBootControlSet @ 0x140A078D8 (CmpSaveBootControlSet.c)
 *     CmpLoadHiveVolatile @ 0x140A096F0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     NtCompactKeys @ 0x140A0A710 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0A9E0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140A0ADC0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0B000 (NtQueryOpenSubKeysEx.c)
 *     CmpCloneHwProfile @ 0x140A0D554 (CmpCloneHwProfile.c)
 *     CmEtwRunDown @ 0x140A0F788 (CmEtwRunDown.c)
 *     CmFreezeRegistry @ 0x140A10664 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A10894 (CmThawRegistry.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A13774 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A15598 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitLightWeightTransaction @ 0x140A197CC (CmpCommitLightWeightTransaction.c)
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140B59568 (CmGetSystemDriverList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     CmpRecordRegistryLockAcquire @ 0x140263080 (CmpRecordRegistryLockAcquire.c)
 *     PsBoostThreadIo @ 0x1402634B0 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  CmpRecordRegistryLockAcquire();
  return ExAcquireResourceExclusiveLite((PERESOURCE)&CmpRegistryLock, 1u);
}
