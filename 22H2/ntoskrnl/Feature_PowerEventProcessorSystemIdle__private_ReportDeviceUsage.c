/*
 * XREFs of Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140410BB4
 * Callers:
 *     PopCheckForIdleness @ 0x14032C440 (PopCheckForIdleness.c)
 *     PopResetIdleTime @ 0x1403B43D8 (PopResetIdleTime.c)
 *     PopHandleSystemIdleReset @ 0x1403B4408 (PopHandleSystemIdleReset.c)
 *     PopSystemIdleWorker @ 0x1407A72B0 (PopSystemIdleWorker.c)
 *     PopMonitorInvocation @ 0x1407A94DC (PopMonitorInvocation.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407A9788 (PopProcessSessionDisplayStateChange.c)
 *     PopInitSIdle @ 0x140825874 (PopInitSIdle.c)
 *     PopUpdateSystemIdleContext @ 0x1408258D8 (PopUpdateSystemIdleContext.c)
 *     PopQueryRemainingSystemIdleTime @ 0x1408787E8 (PopQueryRemainingSystemIdleTime.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x1409938F4 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x140993A90 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPolicySystemIdle @ 0x14099BF80 (PopPolicySystemIdle.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14022FBC0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14040F218 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_descriptor);
  }
}
