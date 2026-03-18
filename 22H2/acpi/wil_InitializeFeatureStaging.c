/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C00A7078
 * Callers:
 *     DriverEntry @ 0x1C00A7310 (DriverEntry.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0001B4C (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1C007A070 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00A7114 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  unsigned int v0; // ebx
  _QWORD *i; // rcx
  _BYTE *v2; // rax
  unsigned int v3; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( g_wil_details_isFeatureStagingInitialized )
    return 0LL;
  g_wil_details_isFeatureStagingInitialized = 1;
  v5 = RtlQueryFeatureConfigurationChangeStamp();
  wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  for ( i = wil_details_featureDescriptors_a; ; i = v2 + 56 )
  {
    v2 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v2 )
      break;
    if ( !v2[29] && !v2[30] && !v2[28] )
    {
      v3 = RtlRegisterFeatureConfigurationChangeNotification(
             wil_details_ReevaluateOnFeatureConfigurationChange,
             0LL,
             &v5,
             &g_wil_details_featureChangeNotification);
      if ( !v3 )
        return 0LL;
      g_wil_details_featureChangeNotification = 0LL;
      return v3;
    }
  }
  return v0;
}
