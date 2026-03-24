/*
 * XREFs of ExWaitForRundownProtectionRelease @ 0x1403427F0
 * Callers:
 *     PfSnDeactivateTrace @ 0x14026D61C (PfSnDeactivateTrace.c)
 *     PfFileInfoNotify @ 0x14029DC90 (PfFileInfoNotify.c)
 *     IoStopDiskIoAttributionForContext @ 0x1402E0AD8 (IoStopDiskIoAttributionForContext.c)
 *     NtShutdownWorkerFactory @ 0x140323380 (NtShutdownWorkerFactory.c)
 *     CmpTryToRundownHive @ 0x140360C44 (CmpTryToRundownHive.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B440 (BgkNotifyDisplayOwnershipChange.c)
 *     MiModifiedPageWriter @ 0x1403BEA70 (MiModifiedPageWriter.c)
 *     IommuDevicePowerChange @ 0x1404D7D90 (IommuDevicePowerChange.c)
 *     VslpSkStopProfiling @ 0x1404FDD6C (VslpSkStopProfiling.c)
 *     BgkpDisableConsole @ 0x1404FF62C (BgkpDisableConsole.c)
 *     PfFbBufferListShutdown @ 0x140564E6C (PfFbBufferListShutdown.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405856DC (DbgpRemoveDebugPrintCallback.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140598BE4 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     PspIoRateEntryDeactivate @ 0x1405D82B8 (PspIoRateEntryDeactivate.c)
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 *     ExpWnfDeleteNameInstance @ 0x140611230 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteSubscription @ 0x140613588 (ExpWnfDeleteSubscription.c)
 *     IoDiskIoAttributionAllocate @ 0x14065DB20 (IoDiskIoAttributionAllocate.c)
 *     CmpPerformUnloadKey @ 0x14066CBFC (CmpPerformUnloadKey.c)
 *     PfSnPrefetchSections @ 0x140680A8C (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140680D38 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPrefetchScenario @ 0x140696420 (PfSnPrefetchScenario.c)
 *     SmKmStoreDelete @ 0x1406A0870 (SmKmStoreDelete.c)
 *     PfSnPowerBoost @ 0x1406A1F48 (PfSnPowerBoost.c)
 *     ExpWnfFreeScopeInstance @ 0x1406A22D0 (ExpWnfFreeScopeInstance.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 *     CmLoadAppKey @ 0x1406E8CDC (CmLoadAppKey.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406F7F08 (ObDestroyHandleRevocationBlock.c)
 *     SmKmStoreAdd @ 0x1406FD558 (SmKmStoreAdd.c)
 *     PspIoRateEntryInitialize @ 0x14071FC24 (PspIoRateEntryInitialize.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140799B58 (PspSetCreateProcessNotifyRoutine.c)
 *     ExRegisterHost @ 0x14079DE50 (ExRegisterHost.c)
 *     CmpWaitForShutdownRundownRelease @ 0x140875C58 (CmpWaitForShutdownRundownRelease.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x14087DC84 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     DbgkLkmdUnregisterCallback @ 0x1408881C0 (DbgkLkmdUnregisterCallback.c)
 *     ObUnRegisterCallbacks @ 0x1408DDC90 (ObUnRegisterCallbacks.c)
 *     PfpRpShutdown @ 0x1408E06E8 (PfpRpShutdown.c)
 *     PoUnregisterCoalescingCallback @ 0x1408E6760 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14090C400 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14090C4F0 (PsRemoveLoadImageNotifyRoutine.c)
 *     SmKmCleanup @ 0x14092AFA4 (SmKmCleanup.c)
 *     SmcCacheInitialize @ 0x14092D514 (SmcCacheInitialize.c)
 *     SmcCacheRemove @ 0x14092D7C8 (SmcCacheRemove.c)
 *     SmcStoreDelete @ 0x14092DE00 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x1409474A8 (EtwpCoverageSamplerStop.c)
 *     ExWaitForCallBacks @ 0x14094F05C (ExWaitForCallBacks.c)
 *     ExUnregisterExtension @ 0x140956A50 (ExUnregisterExtension.c)
 *     PfTAccessTracingCleanup @ 0x14099A9EC (PfTAccessTracingCleanup.c)
 *     IoShutdownSystem @ 0x1409AAF18 (IoShutdownSystem.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B0B00 (MiDeleteAllHardwareEnclaves.c)
 *     EtwpInitializeCoverageSampler @ 0x140A41F18 (EtwpInitializeCoverageSampler.c)
 *     SmcCacheManagerInitialize @ 0x140A4B660 (SmcCacheManagerInitialize.c)
 *     PfInitializeSuperfetch @ 0x140A6A76C (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x140A6ACA4 (PfpRpInitialize.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x1402FAFE0 (ExfWaitForRundownProtectionRelease.c)
 */

void __stdcall ExWaitForRundownProtectionRelease(PEX_RUNDOWN_REF RunRef)
{
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned __int64 v3; // rax

  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, 1LL, 0LL);
  if ( v3 >= 2 )
    ExfWaitForRundownProtectionRelease((volatile signed __int64 *)RunRef, v3, v1, v2);
}
