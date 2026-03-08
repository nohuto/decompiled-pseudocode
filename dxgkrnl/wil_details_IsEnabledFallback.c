/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1C0024F58
 * Callers:
 *     Feature_Dxgk64BitOnlyDriver__private_IsEnabledFallback @ 0x1C0024514 (Feature_Dxgk64BitOnlyDriver__private_IsEnabledFallback.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledFallback @ 0x1C0024568 (Feature_DxgkGpuVaIoMmu__private_IsEnabledFallback.c)
 *     Feature_EnableIddCx110__private_IsEnabledFallback @ 0x1C00245BC (Feature_EnableIddCx110__private_IsEnabledFallback.c)
 *     Feature_45195632__private_IsEnabledFallback @ 0x1C002693C (Feature_45195632__private_IsEnabledFallback.c)
 *     Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledFallback @ 0x1C0026990 (Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledFallback.c)
 *     Feature_36371531__private_IsEnabledFallback @ 0x1C0026A48 (Feature_36371531__private_IsEnabledFallback.c)
 *     Feature_45097502__private_IsEnabledFallback @ 0x1C0026D58 (Feature_45097502__private_IsEnabledFallback.c)
 *     Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledFallback @ 0x1C0026E10 (Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledFallback.c)
 *     Feature_CompositionTextures__private_IsEnabledFallback @ 0x1C0026E64 (Feature_CompositionTextures__private_IsEnabledFallback.c)
 *     Feature_P010DisplayableSupport__private_IsEnabledFallback @ 0x1C0026F58 (Feature_P010DisplayableSupport__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024B30 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1C0024CA8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0024DA8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
