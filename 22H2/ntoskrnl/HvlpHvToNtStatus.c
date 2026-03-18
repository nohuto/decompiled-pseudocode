/*
 * XREFs of HvlpHvToNtStatus @ 0x14045EEB6
 * Callers:
 *     HvlUpdatePerformanceStateCountersForLp @ 0x1403CCCC0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlpReadPerfRegister @ 0x140541438 (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x140542768 (HvlpWritePerfRegister.c)
 *     HvlAcknowledgePageRequest @ 0x140542910 (HvlAcknowledgePageRequest.c)
 *     HvlAttachPasidSpace @ 0x1405429B0 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x140542A60 (HvlAttachPrQueue.c)
 *     HvlClearPrqStalled @ 0x140542B10 (HvlClearPrqStalled.c)
 *     HvlCreatePasidSpace @ 0x140542B70 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140542C30 (HvlCreatePrQueue.c)
 *     HvlDeletePrQueue @ 0x140542D20 (HvlDeletePrQueue.c)
 *     HvlDetachPasidSpace @ 0x140542D80 (HvlDetachPasidSpace.c)
 *     HvlDetachPrQueue @ 0x140542DD0 (HvlDetachPrQueue.c)
 *     HvlDisablePasid @ 0x140542E20 (HvlDisablePasid.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140542EA0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140542F70 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaConfigureDeviceDomain @ 0x140543030 (HvlDmaConfigureDeviceDomain.c)
 *     HvlDmaDeleteDeviceDomain @ 0x1405430E0 (HvlDmaDeleteDeviceDomain.c)
 *     HvlDmaDetachDeviceDomain @ 0x140543170 (HvlDmaDetachDeviceDomain.c)
 *     HvlDmaFlushDeviceDomain @ 0x1405431D0 (HvlDmaFlushDeviceDomain.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140543280 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140543380 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1405434C0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140543780 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x140543990 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlDmaUnmapDeviceLogicalRange @ 0x140543A50 (HvlDmaUnmapDeviceLogicalRange.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140543B80 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlDmaUnreserveDeviceDomainAttachment @ 0x140543D60 (HvlDmaUnreserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x140543DB0 (HvlEnablePasid.c)
 *     HvlGetDeviceCapabilities @ 0x140543F30 (HvlGetDeviceCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x140544750 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x140544C60 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140544ED4 (HvlNotifyAllProcessorsStarted.c)
 *     HvlRegisterDeviceId @ 0x140545360 (HvlRegisterDeviceId.c)
 *     HvlRestoreTime @ 0x1405454F0 (HvlRestoreTime.c)
 *     HvlRetargetDeviceInterrupt @ 0x140545660 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetDeviceCapabilities @ 0x1405458D0 (HvlSetDeviceCapabilities.c)
 *     HvlSetDeviceDmaEnabled @ 0x140545970 (HvlSetDeviceDmaEnabled.c)
 *     HvlSetPasidAddressSpace @ 0x140545C70 (HvlSetPasidAddressSpace.c)
 *     HvlSetRootFaultReportingReady @ 0x140545DC0 (HvlSetRootFaultReportingReady.c)
 *     HvlUnblockDefaultDma @ 0x140545FD0 (HvlUnblockDefaultDma.c)
 *     HvlUnmapDeviceInterrupt @ 0x140546060 (HvlUnmapDeviceInterrupt.c)
 *     HvlUnregisterDeviceId @ 0x140546110 (HvlUnregisterDeviceId.c)
 *     HvlRequestProcessorHalt @ 0x140546EF0 (HvlRequestProcessorHalt.c)
 *     HvlpAddRemovePhysicalMemory @ 0x140678C80 (HvlpAddRemovePhysicalMemory.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140678E20 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x140678F48 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x1406790B0 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x140679224 (HvlMapSparseGpaPages.c)
 *     HvlNotifyPageHeat @ 0x140679384 (HvlNotifyPageHeat.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140941648 (HvlpDynamicUpdateMicrocode.c)
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
