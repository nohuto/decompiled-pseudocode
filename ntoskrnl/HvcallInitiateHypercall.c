/*
 * XREFs of HvcallInitiateHypercall @ 0x1403C81E0
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403714E0 (HvlStartBootLogicalProcessors.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x1403C81A0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlGetCoverageData @ 0x14053D1C8 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x14053D328 (HvlGetCoverageInfo.c)
 *     HvlInvokeHypervisorDebugger @ 0x14053D440 (HvlInvokeHypervisorDebugger.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x14053D65C (HvlQueryHypervisorTscAdjustment.c)
 *     HvlResetCoverageVector @ 0x14053D84C (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x14053DE50 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x14053E1E0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x14053E7A4 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x14053EAB4 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x14053EBC8 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x14053EE40 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x14053FBE4 (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x14053FDA0 (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x14053FE30 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x14053FF84 (HvlpStartVirtualProcessor.c)
 *     HvlpWithdrawPages @ 0x140540080 (HvlpWithdrawPages.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140540384 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x140540DE0 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaGetHybridPassthroughReservedRegions @ 0x140540EE0 (HvlDmaGetHybridPassthroughReservedRegions.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140541020 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1405412E0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1405416E0 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x1405419C0 (HvlEnterSleepState.c)
 *     HvlGetDeviceCapabilities @ 0x140541A90 (HvlGetDeviceCapabilities.c)
 *     HvlGetSystemPasidCapabilities @ 0x140542050 (HvlGetSystemPasidCapabilities.c)
 *     HvlHvDebuggerPowerHandler @ 0x1405422B0 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1405423F0 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1405424F0 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x140542640 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x140542730 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1405427C0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x140542A34 (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140542AC0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x140542B90 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x140542C28 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x140542D90 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x140542EC0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x1405431C0 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1405435A0 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x140543734 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x140543880 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1405439B0 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x140543A50 (HvlSetSystemSleepProperty.c)
 *     HvlUnmapDeviceInterrupt @ 0x140543BC0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x140543EF8 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x140543FBC (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1405440CC (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x14054453C (HvlNotifyAcpiReenabled.c)
 *     HvlParkedVirtualProcessors @ 0x1405445A8 (HvlParkedVirtualProcessors.c)
 *     HvlPrepareForHibernate @ 0x140544744 (HvlPrepareForHibernate.c)
 *     HvlRequestProcessorHalt @ 0x140544A50 (HvlRequestProcessorHalt.c)
 *     HvlpInitializePowerStatistics @ 0x140544B4C (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x140544E50 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x140545434 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x140546060 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1405461EC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x140546558 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x140546B64 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x140547138 (HvlpQueryExtendedCapabilities.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140547490 (HvlSwitchVirtualAddressSpace.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1405477B4 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x14054785C (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x140547974 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x140547AF8 (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x140547EC8 (HvlpInvokeGetPageListHypercall.c)
 *     HvlChangeIsolatedMemoryVisibility @ 0x1406767D0 (HvlChangeIsolatedMemoryVisibility.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1406768F8 (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x140676A60 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x140676BD4 (HvlMapSparseGpaPages.c)
 *     HvlNotifyPageHeat @ 0x140676D34 (HvlNotifyPageHeat.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14093E334 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x14093E4E0 (HvlpLpCpuid.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140250530 (EtwGetKernelTraceTimestamp.c)
 *     HvcallpNoHypervisorPresent @ 0x1402C0AC0 (HvcallpNoHypervisorPresent.c)
 *     EtwTraceTimedEvent @ 0x1402CD670 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
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
    EtwTraceTimedEvent(3954, 0xA0000010, (__int64)&v5, 8, 4200962, (__int64)v9);
  }
  return v3;
}
