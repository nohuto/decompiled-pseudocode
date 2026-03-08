/*
 * XREFs of ExfReleasePushLock @ 0x140238E10
 * Callers:
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     CmpNotifyMachineHiveLoaded @ 0x1403887C0 (CmpNotifyMachineHiveLoaded.c)
 *     DifExfReleasePushLockWrapper @ 0x1405D8130 (DifExfReleasePushLockWrapper.c)
 *     PdcTaskClientRequest @ 0x14067F048 (PdcTaskClientRequest.c)
 *     CmpUnlockHashEntryByKcb @ 0x1406B6550 (CmpUnlockHashEntryByKcb.c)
 *     CmpGetNextActiveHive @ 0x1406BD940 (CmpGetNextActiveHive.c)
 *     CmpGetNextHive @ 0x1406BE36C (CmpGetNextHive.c)
 *     CmpUnlockAppHiveLoadList @ 0x1406BE574 (CmpUnlockAppHiveLoadList.c)
 *     CmpLockRegistryFreezeAware @ 0x1406BF3D0 (CmpLockRegistryFreezeAware.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406C0154 (UNLOCK_HIVE_LOAD.c)
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpUnlockHiveList @ 0x140731774 (CmpUnlockHiveList.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x140737B9C (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x140737CA8 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x140738160 (VrpDereferenceDiffHiveEntry.c)
 *     CmpUnlockContextList @ 0x140738DA0 (CmpUnlockContextList.c)
 *     CmpUnlockCallbackList @ 0x140738E04 (CmpUnlockCallbackList.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14074B268 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpDeleteHive @ 0x14074C680 (CmpDeleteHive.c)
 *     CmpGetLastHive @ 0x14078A7EC (CmpGetLastHive.c)
 *     CmpUnlockHashEntry @ 0x1407AB010 (CmpUnlockHashEntry.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1407B00A0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1407B01F0 (CmpGetNameControlBlock.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407F6CC8 (ExCovReadjustUnloadedModuleEntry.c)
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 *     CmpStartSiloKeyLockTracker @ 0x1408168F8 (CmpStartSiloKeyLockTracker.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408185D0 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmLockKeyForWrite @ 0x140845EFC (CmLockKeyForWrite.c)
 *     CmpUnlockGlobalKeyLockTracker @ 0x140846294 (CmpUnlockGlobalKeyLockTracker.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140A034B4 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140A03B6C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140A04414 (ExpCovResetInformation.c)
 *     CmpLoadHiveVolatile @ 0x140A096F0 (CmpLoadHiveVolatile.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140A0C960 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmThawRegistry @ 0x140A10894 (CmThawRegistry.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A191F8 (CmpStopSiloKeyLockTracker.c)
 *     CmpUnlockHashEntryByIndex @ 0x140A1C8D8 (CmpUnlockHashEntryByIndex.c)
 *     CmpUnlockNameHashEntry @ 0x140A1C95C (CmpUnlockNameHashEntry.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmUnlockHiveSecurity @ 0x140AF25F0 (CmUnlockHiveSecurity.c)
 *     CmpDumpKeyToBuffer @ 0x140AF28C4 (CmpDumpKeyToBuffer.c)
 *     ExpWorkerInitialization @ 0x140B6383C (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x140238EF0 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive(a1);
}
