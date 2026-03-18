/*
 * XREFs of CmpLockRegistryExclusive @ 0x1407696FC
 * Callers:
 *     CmShutdownSystem1 @ 0x140615C34 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x140615E8C (CmShutdownSystem2.c)
 *     CmDeleteLayeredKey @ 0x14061695C (CmDeleteLayeredKey.c)
 *     CmpCleanupTransactionState @ 0x14069831C (CmpCleanupTransactionState.c)
 *     CmEnumerateKey @ 0x1406DC4F0 (CmEnumerateKey.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14070C46C (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x14071009C (CmDeleteKey.c)
 *     CmpLockRegistryFreezeAware @ 0x140753CF8 (CmpLockRegistryFreezeAware.c)
 *     CmpTransMgrFreeVolatileData @ 0x140769424 (CmpTransMgrFreeVolatileData.c)
 *     CmpCleanupLightWeightTransaction @ 0x1407D0F34 (CmpCleanupLightWeightTransaction.c)
 *     CmpDelayFreeRMWorker @ 0x1407E9430 (CmpDelayFreeRMWorker.c)
 *     CmCompleteRegistryInitialization @ 0x14080CEA0 (CmCompleteRegistryInitialization.c)
 *     CmpFinishSystemHivesLoad @ 0x14080D490 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x1408283D0 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x14084BAAC (CmpMarkCurrentProfileDirty.c)
 *     CmpMountPreloadedHives @ 0x1408632CC (CmpMountPreloadedHives.c)
 *     CmpSaveBootControlSet @ 0x140A0A5C8 (CmpSaveBootControlSet.c)
 *     CmpLoadHiveVolatile @ 0x140A0C3E0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A0C940 (CmpRefreshHive.c)
 *     NtCompactKeys @ 0x140A0D420 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0D6F0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140A0DAD0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0DD10 (NtQueryOpenSubKeysEx.c)
 *     CmpCloneHwProfile @ 0x140A10264 (CmpCloneHwProfile.c)
 *     CmEtwRunDown @ 0x140A124D4 (CmEtwRunDown.c)
 *     CmFreezeRegistry @ 0x140A133B0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A135E0 (CmThawRegistry.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A164C4 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A182E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitLightWeightTransaction @ 0x140A1C51C (CmpCommitLightWeightTransaction.c)
 *     CmInitSystem1 @ 0x140B39964 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140B41BA0 (CmGetSystemDriverList.c)
 * Callees:
 *     CmpRecordRegistryLockAcquire @ 0x14022FB30 (CmpRecordRegistryLockAcquire.c)
 *     PsBoostThreadIo @ 0x14022FF30 (PsBoostThreadIo.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
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
