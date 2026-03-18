/*
 * XREFs of ExfReleasePushLock @ 0x1402BD800
 * Callers:
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     CmpNotifyMachineHiveLoaded @ 0x140374A38 (CmpNotifyMachineHiveLoaded.c)
 *     DifExfReleasePushLockWrapper @ 0x1405DA5E0 (DifExfReleasePushLockWrapper.c)
 *     PdcTaskClientRequest @ 0x140682428 (PdcTaskClientRequest.c)
 *     CmpUnlockContextList @ 0x14068F210 (CmpUnlockContextList.c)
 *     CmpUnlockCallbackList @ 0x14068F274 (CmpUnlockCallbackList.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140696D48 (ExCovReadjustUnloadedModuleEntry.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1406D8E40 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1406D8F90 (CmpGetNameControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1406DB3F0 (CmpDeleteKeyObject.c)
 *     CmpWalkOneLevel @ 0x1406DD8D0 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7F40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x1406E86A0 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmpCreateHive @ 0x14070247C (CmpCreateHive.c)
 *     CmpDeleteHive @ 0x14074EBE4 (CmpDeleteHive.c)
 *     CmpUnlockHiveList @ 0x140750E48 (CmpUnlockHiveList.c)
 *     UNLOCK_HIVE_LOAD @ 0x140752340 (UNLOCK_HIVE_LOAD.c)
 *     CmpGetNextActiveHive @ 0x140752570 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryFreezeAware @ 0x140753CF8 (CmpLockRegistryFreezeAware.c)
 *     CmpGetNextHive @ 0x14076A460 (CmpGetNextHive.c)
 *     CmpUnlockHashEntry @ 0x14076AAD0 (CmpUnlockHashEntry.c)
 *     CmpUnlockHashEntryByKcb @ 0x14076ACC0 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14076B338 (CmpUnlockDeletedHashEntryByKcb.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14077C57C (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14077C688 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14077CB40 (VrpDereferenceDiffHiveEntry.c)
 *     CmpUnlockAppHiveLoadList @ 0x1407D5C70 (CmpUnlockAppHiveLoadList.c)
 *     CmpGetLastHive @ 0x1407D90F4 (CmpGetLastHive.c)
 *     CmpFinishSystemHivesLoad @ 0x14080D490 (CmpFinishSystemHivesLoad.c)
 *     CmpStartSiloKeyLockTracker @ 0x14080EC28 (CmpStartSiloKeyLockTracker.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408106E0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmLockKeyForWrite @ 0x14084905C (CmLockKeyForWrite.c)
 *     CmpUnlockGlobalKeyLockTracker @ 0x1408493F4 (CmpUnlockGlobalKeyLockTracker.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140A061A4 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140A0685C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140A07104 (ExpCovResetInformation.c)
 *     CmpLoadHiveVolatile @ 0x140A0C3E0 (CmpLoadHiveVolatile.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140A0F670 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmThawRegistry @ 0x140A135E0 (CmThawRegistry.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A1BF48 (CmpStopSiloKeyLockTracker.c)
 *     CmpUnlockHashEntryByIndex @ 0x140A1F62C (CmpUnlockHashEntryByIndex.c)
 *     CmpUnlockNameHashEntry @ 0x140A1F6B0 (CmpUnlockNameHashEntry.c)
 *     CmUnlockHiveSecurity @ 0x140AF6100 (CmUnlockHiveSecurity.c)
 *     CmpUnlockKcb @ 0x140AF65A0 (CmpUnlockKcb.c)
 *     CmpDumpKeyToBuffer @ 0x140AF68F4 (CmpDumpKeyToBuffer.c)
 *     ExpWorkerInitialization @ 0x140B674AC (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1402BD8E0 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive(a1);
}
