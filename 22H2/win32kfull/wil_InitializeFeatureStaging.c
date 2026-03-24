/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C0392078
 * Callers:
 *     EditionBaseDriverEntryInitialize @ 0x1C0126C30 (EditionBaseDriverEntryInitialize.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0166D80 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1C037A228 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C0392108 (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
  for ( i = &Feature_Servicing_MatchedFrameCookieWatson_35935814__private_descriptor; ; i = (int **)(v2 + 40) )
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
