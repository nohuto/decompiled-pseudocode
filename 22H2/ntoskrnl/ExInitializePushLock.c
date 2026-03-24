/*
 * XREFs of ExInitializePushLock @ 0x140341EF0
 * Callers:
 *     IoRegisterPriorityCallback @ 0x1403AEF50 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403B40F0 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     IommuMapDevice @ 0x1404D8DD0 (IommuMapDevice.c)
 *     DbgpInsertDebugPrintCallback @ 0x140585584 (DbgpInsertDebugPrintCallback.c)
 *     PfSnBeginTrace @ 0x14062E040 (PfSnBeginTrace.c)
 *     IoDiskIoAttributionAllocate @ 0x14065DB20 (IoDiskIoAttributionAllocate.c)
 *     PfSnPrefetchSections @ 0x140680A8C (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140680D38 (PfSnPrefetchSectionsCleanup.c)
 *     SepCreateLogonSessionTrack @ 0x1406850AC (SepCreateLogonSessionTrack.c)
 *     PfSnAsyncContextInitialize @ 0x1406964CC (PfSnAsyncContextInitialize.c)
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 *     CmLoadAppKey @ 0x1406E8CDC (CmLoadAppKey.c)
 *     SmKmStoreAdd @ 0x1406FD558 (SmKmStoreAdd.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     PspIoRateEntryInitialize @ 0x14071FC24 (PspIoRateEntryInitialize.c)
 *     CmpHiveInitialize @ 0x140720054 (CmpHiveInitialize.c)
 *     PoRegisterCoalescingCallback @ 0x1407999B0 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140799C50 (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x1407BF73C (PfFbBufferListInitialize.c)
 *     ObRegisterCallbacks @ 0x1407CA730 (ObRegisterCallbacks.c)
 *     CmFcpWorkItemInitialize @ 0x1407D2700 (CmFcpWorkItemInitialize.c)
 *     VslpSkStartProfiling @ 0x140890A70 (VslpSkStartProfiling.c)
 *     SmcCacheInitialize @ 0x14092D514 (SmcCacheInitialize.c)
 *     PfTAccessTracingInitialize @ 0x14099AAE4 (PfTAccessTracingInitialize.c)
 *     PspInitPhase0 @ 0x140A3D098 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 *     EtwpInitializeCoverageSampler @ 0x140A41F18 (EtwpInitializeCoverageSampler.c)
 *     SmcCacheManagerInitialize @ 0x140A4B660 (SmcCacheManagerInitialize.c)
 *     MiCreateEnclaveRegions @ 0x140A54ED8 (MiCreateEnclaveRegions.c)
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 *     PfInitializeSuperfetch @ 0x140A6A76C (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x140A6ACA4 (PfpRpInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}
