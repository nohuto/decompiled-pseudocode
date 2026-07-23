/*
 * XREFs of HvcallInitiateHypercall @ 0x14038FDC0
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x1403829F0 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlNotifyLongSpinWait @ 0x14038FA40 (HvlNotifyLongSpinWait.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14038FA70 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvlSendSyntheticClusterIpi @ 0x14038FD30 (HvlSendSyntheticClusterIpi.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B62E8 (HvlStartBootLogicalProcessors.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1403F04B0 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlGetCoverageData @ 0x1404F14D8 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1404F1630 (HvlGetCoverageInfo.c)
 *     HvlInvokeHypervisorDebugger @ 0x1404F1740 (HvlInvokeHypervisorDebugger.c)
 *     HvlResetCoverageVector @ 0x1404F1A0C (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1404F1F60 (HvlQueryNumaDistance.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404F22E0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpDepositPages @ 0x1404F2884 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1404F2B88 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x1404F2C8C (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1404F2EEC (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1404F3B98 (HvlpSetLogicalProcessorProperty.c)
 *     HvlpSetupSchedulerAssist @ 0x1404F3D5C (HvlpSetupSchedulerAssist.c)
 *     HvlpStartLogicalProcessor @ 0x1404F3DEC (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1404F3F44 (HvlpStartVirtualProcessor.c)
 *     HvlDmaGetDmaGuardEnabled @ 0x1404F4370 (HvlDmaGetDmaGuardEnabled.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x1404F4470 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1404F4710 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaUnmapDeviceSparsePages @ 0x1404F4A50 (HvlDmaUnmapDeviceSparsePages.c)
 *     HvlEnterSleepState @ 0x1404F4C20 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x1404F5150 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1404F52B0 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1404F53B0 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1404F54F0 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1404F55E0 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1404F5670 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyAllProcessorsStarted @ 0x1404F593C (HvlNotifyAllProcessorsStarted.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1404F59C0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1404F5A80 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1404F5B14 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x1404F5CA0 (HvlQueryAssociatedProcessors.c)
 *     HvlRegisterDeviceId @ 0x1404F5DC0 (HvlRegisterDeviceId.c)
 *     HvlRetargetDeviceInterrupt @ 0x1404F5F80 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1404F61E0 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1404F6388 (HvlSetPartitionProperty.c)
 *     HvlSetQpcBias @ 0x1404F6420 (HvlSetQpcBias.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1404F64C0 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1404F6560 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1404F6B90 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x1404F6CE0 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x1404F6FC0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1404F740C (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1404F74C8 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1404F759C (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x1404F7B68 (HvlNotifyAcpiReenabled.c)
 *     HvlParkedVirtualProcessors @ 0x1404F7BD0 (HvlParkedVirtualProcessors.c)
 *     HvlPrepareForHibernate @ 0x1404F7C70 (HvlPrepareForHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1404F7FA0 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x1404F8010 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1404F8398 (HvlpSetPowerProperty.c)
 *     HvlCollectLivedump @ 0x1404F8898 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x1404F9560 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1404F96E8 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1404F9B38 (HvlpLogIommuInitStatus.c)
 *     HvlpDetermineEnlightenments @ 0x1404FA044 (HvlpDetermineEnlightenments.c)
 *     HvlpQueryExtendedCapabilities @ 0x1404FA630 (HvlpQueryExtendedCapabilities.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404FA9E0 (HvlSwitchVirtualAddressSpace.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1404FACE4 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1404FAD88 (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x1404FAE9C (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1404FB01C (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x1404FB3B0 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x1405C948C (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x1405C95C0 (HvlNotifyPageHeat.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1405C983C (HvlGetSparseGpaPagesAccessState.c)
 *     HvlMapGpaPages @ 0x1405C9994 (HvlMapGpaPages.c)
 *     HvlMapSparseGpaPages @ 0x1405C9AE8 (HvlMapSparseGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14088E7BC (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140A8F2D8 (HvlpLpCpuid.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14030654C (EtwTraceTimedEvent.c)
 *     HvcallpNoHypervisorPresent @ 0x1403656D0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

__int64 __fastcall HvcallInitiateHypercall(int a1)
{
  char v2; // di
  int v3; // esi
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // [rsp+30h] [rbp-58h] BYREF
  char v7; // [rsp+34h] [rbp-54h]
  __int16 v8; // [rsp+35h] [rbp-53h]
  char v9; // [rsp+37h] [rbp-51h]
  _OWORD v10[2]; // [rsp+38h] [rbp-50h] BYREF

  memset(v10, 0, sizeof(v10));
  if ( (BYTE4(xmmword_140CFC490) & 0x10) != 0 )
  {
    v2 = 1;
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v10, 0xA0000010);
  }
  else
  {
    v2 = 0;
  }
  v3 = a1;
  result = HvcallCodeVa();
  v5 = result;
  if ( v2 )
  {
    v9 = 0;
    v6 = (unsigned __int16)v3;
    v7 = BYTE2(v3) & 1;
    v8 = v3 < 0;
    EtwTraceTimedEvent(0xF72u, 0xA0000010, (__int64)&v6, 8, 0x401A02u, (__int64)v10);
    return v5;
  }
  return result;
}
