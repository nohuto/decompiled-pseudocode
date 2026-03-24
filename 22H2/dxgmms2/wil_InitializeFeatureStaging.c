/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C00D5078
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0090DEC (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0017A4C (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1C005EA88 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00D5108 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  unsigned int v0; // ebx
  int **i; // rcx
  _BYTE *v2; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v4 = RtlQueryFeatureConfigurationChangeStamp();
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
             wil_details_ReevaluateOnFeatureConfigurationChange,
             0LL,
             &v4,
             &wil_details_featureChangeNotification);
      if ( !v0 )
        return 0LL;
      wil_details_featureChangeNotification = 0LL;
      return v0;
    }
  }
  return v0;
}
