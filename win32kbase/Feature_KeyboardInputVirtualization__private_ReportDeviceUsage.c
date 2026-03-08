/*
 * XREFs of Feature_KeyboardInputVirtualization__private_ReportDeviceUsage @ 0x1C00E1194
 * Callers:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C005BD48 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     IsKeyboardIVEnabled @ 0x1C008BA18 (IsKeyboardIVEnabled.c)
 *     VirtualizeFullKeyboardStates @ 0x1C0218E00 (VirtualizeFullKeyboardStates.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00DC94C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0155054 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

void Feature_KeyboardInputVirtualization__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_KeyboardInputVirtualization__private_featureState;
  if ( (Feature_KeyboardInputVirtualization__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_KeyboardInputVirtualization__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_KeyboardInputVirtualization__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_KeyboardInputVirtualization__private_descriptor);
  }
}
