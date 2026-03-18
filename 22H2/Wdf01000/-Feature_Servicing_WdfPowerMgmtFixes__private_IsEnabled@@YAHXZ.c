/*
 * XREFs of ?Feature_Servicing_WdfPowerMgmtFixes__private_IsEnabled@@YAHXZ @ 0x1C001C824
 * Callers:
 *     ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0010BC0 (-PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0011B40 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerPolSystemWakeDeviceD0PowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C001C8D0 (-PowerPolSystemWakeDeviceD0PowerRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PE.c)
 *     ?PowerPolSystemWakeDevicePowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C001C910 (-PowerPolSystemWakeDevicePowerRequestFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C001B7DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C001CC30 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 */

__int64 __fastcall Feature_Servicing_WdfPowerMgmtFixes__private_IsEnabled()
{
  unsigned int exchange; // eax
  unsigned int enabled; // ebx
  wil_ReportingKind v3; // [rsp+30h] [rbp-18h]

  exchange = wil_details_FeatureStateCache_GetCachedFeatureEnabledState(
               (wil_details_FeatureStateCache *)&WPP_GLOBAL_WDF_Control.DeviceType,
               wil_details_featureDescriptors_a).exchange;
  enabled = (exchange >> 3) & 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (wil_details_FeatureReportingCache *)&WPP_GLOBAL_WDF_Control.DeviceExtension,
    0x29218AFu,
    (exchange >> 8) & 1,
    (exchange >> 9) & 1,
    &Feature_Servicing_WdfPowerMgmtFixes_logged_traits,
    enabled,
    v3);
  return enabled;
}
