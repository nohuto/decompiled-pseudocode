/*
 * XREFs of Feature_AsyncVmBusMessages__private_ReportDeviceUsage @ 0x1C0026610
 * Callers:
 *     ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037AD30 (-VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024B30 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0024DA8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_AsyncVmBusMessages__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_AsyncVmBusMessages__private_featureState;
  if ( (Feature_AsyncVmBusMessages__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_AsyncVmBusMessages__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_AsyncVmBusMessages__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_AsyncVmBusMessages__private_descriptor);
  }
}
