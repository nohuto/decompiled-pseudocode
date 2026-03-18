/*
 * XREFs of HvcallInitiateHypercall @ 0x1403CCD00
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140376790 (HvlStartBootLogicalProcessors.c)
 *     HvlNotifyLongSpinWait @ 0x1403CCC90 (HvlNotifyLongSpinWait.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x1403CCCC0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlGetCoverageData @ 0x14053F668 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x14053F7C8 (HvlGetCoverageInfo.c)
 *     HvlInvokeHypervisorDebugger @ 0x14053F8E0 (HvlInvokeHypervisorDebugger.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x14053FAFC (HvlQueryHypervisorTscAdjustment.c)
 *     HvlResetCoverageVector @ 0x14053FCEC (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1405402F0 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140540680 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x140540C44 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x140540F58 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x14054106C (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1405412E4 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x140542084 (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x140542240 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x1405422D0 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x140542424 (HvlpStartVirtualProcessor.c)
 *     HvlpWithdrawPages @ 0x140542520 (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140542824 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140543280 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140543380 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1405434C0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140543780 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x140543B80 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x140543E60 (HvlEnterSleepState.c)
 *     HvlGetDeviceCapabilities @ 0x140543F30 (HvlGetDeviceCapabilities.c)
 *     HvlGetSystemPasidCapabilities @ 0x1405444F0 (HvlGetSystemPasidCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x140544750 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x140544890 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x140544990 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x140544AE0 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x140544BD0 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x140544C60 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140544ED4 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140544F60 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140545030 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1405450C8 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140545230 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140545360 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x140545660 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x140545A40 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140545BD4 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x140545D20 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x140545E50 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x140545EF0 (HvlSetSystemSleepProperty.c)
 *     HvlUnmapDeviceInterrupt @ 0x140546060 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140546398 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x14054645C (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x14054656C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x1405469DC (HvlNotifyAcpiReenabled.c)
 *     HvlParkedVirtualProcessors @ 0x140546A48 (HvlParkedVirtualProcessors.c)
 *     HvlPrepareForHibernate @ 0x140546BE4 (HvlPrepareForHibernate.c)
 *     HvlRequestProcessorHalt @ 0x140546EF0 (HvlRequestProcessorHalt.c)
 *     HvlpInitializePowerStatistics @ 0x140546FEC (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1405472F0 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x1405478D4 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x140548500 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14054868C (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1405489F8 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x140549004 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1405495D8 (HvlpQueryExtendedCapabilities.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140549930 (HvlSwitchVirtualAddressSpace.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140549C54 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140549CFC (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x140549E14 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x140549F98 (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14054A368 (HvlpInvokeGetPageListHypercall.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x140678E20 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x140678F48 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x1406790B0 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x140679224 (HvlMapSparseGpaPages.c)
 *     HvlNotifyPageHeat @ 0x140679384 (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140941354 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140941500 (HvlpLpCpuid.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402A2E70 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x140338BB0 (EtwTraceTimedEvent.c)
 *     HvcallpNoHypervisorPresent @ 0x14036E000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

__int64 __fastcall HvcallInitiateHypercall(int a1)
{
  char v2; // si
  __int64 v3; // rdi
  int v5; // [rsp+30h] [rbp-48h] BYREF
  char v6; // [rsp+34h] [rbp-44h]
  __int16 v7; // [rsp+35h] [rbp-43h]
  char v8; // [rsp+37h] [rbp-41h]
  _OWORD v9[2]; // [rsp+38h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( (BYTE4(xmmword_140D1EAD0) & 0x10) != 0 )
  {
    v2 = 1;
    EtwGetKernelTraceTimestamp((__int64)v9, 2684354576LL);
  }
  else
  {
    v2 = 0;
  }
  v3 = HvcallCodeVa();
  if ( v2 )
  {
    v8 = 0;
    v5 = (unsigned __int16)a1;
    v6 = BYTE2(a1) & 1;
    v7 = a1 < 0;
    EtwTraceTimedEvent(0xF72u, 0xA0000010, (__int64)&v5, 8, 0x401A02u, (__int64)v9);
  }
  return v3;
}
