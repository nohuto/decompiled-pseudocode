/*
 * XREFs of ExInitializePushLock @ 0x140238200
 * Callers:
 *     IoRegisterPriorityCallback @ 0x140388E50 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403A340C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     IommuCreateAtsDevice @ 0x14051F820 (IommuCreateAtsDevice.c)
 *     IommupMapDeviceInternal @ 0x1405216F8 (IommupMapDeviceInternal.c)
 *     PspInitializeSyscallProvider @ 0x1405A27E0 (PspInitializeSyscallProvider.c)
 *     DbgpInsertDebugPrintCallback @ 0x1405A5444 (DbgpInsertDebugPrintCallback.c)
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 *     PspIoRateEntryInitialize @ 0x1406F80C8 (PspIoRateEntryInitialize.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     IoDiskIoAttributionAllocate @ 0x1407532F4 (IoDiskIoAttributionAllocate.c)
 *     SepCreateLogonSessionTrack @ 0x14076B35C (SepCreateLogonSessionTrack.c)
 *     SmKmStoreAdd @ 0x1407DDA38 (SmKmStoreAdd.c)
 *     PfSnAsyncContextInitialize @ 0x1407DFF7C (PfSnAsyncContextInitialize.c)
 *     PfSnPrefetchSections @ 0x1407E16A0 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1407E196C (PfSnPrefetchSectionsCleanup.c)
 *     PfSnBeginTrace @ 0x1407E31A8 (PfSnBeginTrace.c)
 *     PoRegisterCoalescingCallback @ 0x140819500 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140819790 (ExAllocateCallBack.c)
 *     HalpIommuCreateDevice @ 0x140822B28 (HalpIommuCreateDevice.c)
 *     PfFbBufferListInitialize @ 0x140845D94 (PfFbBufferListInitialize.c)
 *     SmPartitionInitialize @ 0x14084CDAC (SmPartitionInitialize.c)
 *     SmcCacheManagerInitialize @ 0x14084CEB0 (SmcCacheManagerInitialize.c)
 *     ObRegisterCallbacks @ 0x140854730 (ObRegisterCallbacks.c)
 *     SmcCacheInitialize @ 0x1409D7DE8 (SmcCacheInitialize.c)
 *     VmpProcessContextSetup @ 0x1409DA930 (VmpProcessContextSetup.c)
 *     PfTAccessTracingInitialize @ 0x140A85A48 (PfTAccessTracingInitialize.c)
 *     PspInitPhase0 @ 0x140B3F968 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     PfInitializeSuperfetch @ 0x140B619EC (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x140B61E0C (PfpRpInitialize.c)
 *     EtwpInitializeCoverageSampler @ 0x140B70C24 (EtwpInitializeCoverageSampler.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PEX_RUNDOWN_REF RunRef)
{
  RunRef->Count = 0LL;
}
