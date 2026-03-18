/*
 * XREFs of ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x1C00BC438
 * Callers:
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C001CD64 (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x1C001CEF8 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x1C001D1F4 (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 *     memset @ 0x1C001D540 (memset.c)
 */

__int64 __fastcall wil_StagingConfig_QueryFeatureState(
        wil_FeatureStore state,
        wil_FeatureState *featureId,
        unsigned int featureRequiresSessionChange,
        int store)
{
  unsigned int v6; // ebx
  wil_FeatureStore v8; // edx
  unsigned __int64 v9; // r8
  wil_details_StagingConfig config; // [rsp+30h] [rbp-148h] BYREF
  char buffer[208]; // [rsp+90h] [rbp-E8h] BYREF

  v6 = 0;
  memset(&config, 0, sizeof(config));
  if ( !(unsigned int)wil_details_StagingConfig_Load(&config, v8, v9, buffer) )
  {
    v6 = wil_details_StagingConfig_QueryFeatureState(&config, featureId, featureRequiresSessionChange, store);
    if ( config.bufferOwned )
      ExFreePoolWithTag(config.buffer, 0x4C4957u);
  }
  return v6;
}
