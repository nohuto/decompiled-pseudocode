/*
 * XREFs of HvlpHvToNtStatus @ 0x140456F16
 * Callers:
 *     HvlUpdatePerformanceStateCountersForLp @ 0x1403C81A0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlpReadPerfRegister @ 0x14053EF94 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x1405402C8 (HvlpWritePerfRegister.c)
 *     HvlAcknowledgePageRequest @ 0x140540470 (HvlAcknowledgePageRequest.c)
 *     HvlAttachPasidSpace @ 0x140540510 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x1405405C0 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x140540670 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x1405406D0 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140540790 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x140540880 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x1405408E0 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x140540930 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x140540980 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140540A00 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140540AD0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140540B90 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x140540C40 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140540CD0 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x140540D30 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140540DE0 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140540EE0 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140541020 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1405412E0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x1405414F0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x1405415B0 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1405416E0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x1405418C0 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x140541910 (HvlEnablePasid.c)
 *     HvlGetDeviceCapabilities @ 0x140541A90 (HvlGetDeviceCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x1405422B0 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x1405427C0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140542A34 (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x140542EC0 (HvlRegisterDeviceId.c)
 *     HvlRestoreTime @ 0x140543050 (HvlRestoreTime.c)
 *     HvlRetargetDeviceInterrupt @ 0x1405431C0 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetDeviceCapabilities @ 0x140543430 (HvlSetDeviceCapabilities.c)
 *     HvlSetDeviceDmaEnabled @ 0x1405434D0 (HvlSetDeviceDmaEnabled.c)
 *     HvlSetPasidAddressSpace @ 0x1405437D0 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x140543920 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x140543B30 (HvlUnblockDefaultDma.c)
 *     HvlUnmapDeviceInterrupt @ 0x140543BC0 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x140543C70 (HvlUnregisterDeviceId.c)
 *     HvlRequestProcessorHalt @ 0x140544A50 (HvlRequestProcessorHalt.c)
 *     HvlpAddRemovePhysicalMemory @ 0x140676630 (HvlpAddRemovePhysicalMemory.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x1406767D0 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1406768F8 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x140676A60 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x140676BD4 (HvlMapSparseGpaPages.c)
 *     HvlNotifyPageHeat @ 0x140676D34 (HvlNotifyPageHeat.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14093E628 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpHvToNtStatus(unsigned __int16 a1)
{
  switch ( a1 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
  }
  return a1 | 0xC0350000;
}
