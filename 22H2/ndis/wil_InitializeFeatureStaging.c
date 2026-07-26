/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C0144078
 * Callers:
 *     DriverEntry @ 0x1C01448F0 (DriverEntry.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C003DA70 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1C00F93C0 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C0144108 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  unsigned int v0; // ebx
  int **i; // rcx
  _BYTE *v2; // rax
  ULONGLONG ObservedChangeStamp; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  ObservedChangeStamp = RtlQueryFeatureConfigurationChangeStamp();
  wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  for ( i = &wil_details_featureDescriptors_a; ; i = (int **)(v2 + 40) )
  {
    v2 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v2 )
      break;
    if ( !v2[29] && !v2[30] && !v2[28] )
    {
      v0 = RtlRegisterFeatureConfigurationChangeNotification(
             (PRTL_FEATURE_CONFIGURATION_CHANGE_CALLBACK)wil_details_ReevaluateOnFeatureConfigurationChange,
             0LL,
             &ObservedChangeStamp,
             &wil_details_featureChangeNotification);
      if ( !v0 )
        return 0LL;
      wil_details_featureChangeNotification = 0LL;
      return v0;
    }
  }
  return v0;
}
