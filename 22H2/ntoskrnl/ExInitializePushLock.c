/*
 * XREFs of ExInitializePushLock @ 0x1402235B0
 * Callers:
 *     IoRegisterPriorityCallback @ 0x14039FAC0 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403A81DC (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     IommuCreateAtsDevice @ 0x140521D50 (IommuCreateAtsDevice.c)
 *     IommupMapDeviceInternal @ 0x140523C28 (IommupMapDeviceInternal.c)
 *     PspInitializeSyscallProvider @ 0x1405A4C90 (PspInitializeSyscallProvider.c)
 *     DbgpInsertDebugPrintCallback @ 0x1405A78D4 (DbgpInsertDebugPrintCallback.c)
 *     PspIoRateEntryInitialize @ 0x140688AF8 (PspIoRateEntryInitialize.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 *     PfSnPrefetchSections @ 0x14074D088 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x14074D354 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnBeginTrace @ 0x14074DEC8 (PfSnBeginTrace.c)
 *     SmKmStoreAdd @ 0x1407B801C (SmKmStoreAdd.c)
 *     SepCreateLogonSessionTrack @ 0x1407BDA3C (SepCreateLogonSessionTrack.c)
 *     IoDiskIoAttributionAllocate @ 0x1407D8AB8 (IoDiskIoAttributionAllocate.c)
 *     PfSnAsyncContextInitialize @ 0x1407DB758 (PfSnAsyncContextInitialize.c)
 *     HalpIommuCreateDevice @ 0x14082AB98 (HalpIommuCreateDevice.c)
 *     PoRegisterCoalescingCallback @ 0x140844D00 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140844F90 (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x140848EF4 (PfFbBufferListInitialize.c)
 *     SmPartitionInitialize @ 0x14085015C (SmPartitionInitialize.c)
 *     SmcCacheManagerInitialize @ 0x140850260 (SmcCacheManagerInitialize.c)
 *     ObRegisterCallbacks @ 0x140858CD0 (ObRegisterCallbacks.c)
 *     SmcCacheInitialize @ 0x1409DAC88 (SmcCacheInitialize.c)
 *     VmpProcessContextSetup @ 0x1409DD7D0 (VmpProcessContextSetup.c)
 *     PfTAccessTracingInitialize @ 0x140A88A4C (PfTAccessTracingInitialize.c)
 *     PspInitPhase0 @ 0x140B4DF94 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 *     PfInitializeSuperfetch @ 0x140B65330 (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x140B65750 (PfpRpInitialize.c)
 *     EtwpInitializeCoverageSampler @ 0x140B74D28 (EtwpInitializeCoverageSampler.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PEX_RUNDOWN_REF RunRef)
{
  RunRef->Count = 0LL;
}
