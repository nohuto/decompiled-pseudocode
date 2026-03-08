/*
 * XREFs of Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x14040B89C
 * Callers:
 *     PopCheckForIdleness @ 0x1402BC5F0 (PopCheckForIdleness.c)
 *     PopResetIdleTime @ 0x1403AF6E8 (PopResetIdleTime.c)
 *     PopHandleSystemIdleReset @ 0x1403AF718 (PopHandleSystemIdleReset.c)
 *     PopSystemIdleWorker @ 0x14073B6A0 (PopSystemIdleWorker.c)
 *     PopMonitorInvocation @ 0x140756DE8 (PopMonitorInvocation.c)
 *     PopProcessSessionDisplayStateChange @ 0x140757094 (PopProcessSessionDisplayStateChange.c)
 *     PopInitSIdle @ 0x14082A7A4 (PopInitSIdle.c)
 *     PopUpdateSystemIdleContext @ 0x14082A808 (PopUpdateSystemIdleContext.c)
 *     PopQueryRemainingSystemIdleTime @ 0x140879DFC (PopQueryRemainingSystemIdleTime.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x140990844 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1409909E0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPolicySystemIdle @ 0x140998EF0 (PopPolicySystemIdle.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140263110 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140409A8C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_PowerEventProcessorSystemIdle__private_featureState;
  if ( (Feature_PowerEventProcessorSystemIdle__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_PowerEventProcessorSystemIdle__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_descriptor,
      v0,
      3,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_descriptor);
  }
}
