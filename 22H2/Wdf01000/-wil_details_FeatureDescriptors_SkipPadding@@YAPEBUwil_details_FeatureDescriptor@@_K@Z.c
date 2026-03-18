/*
 * XREFs of ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C001B244
 * Callers:
 *     ?wil_details_EvaluateFeatureDependencies@@YAXXZ @ 0x1C00BC0AC (-wil_details_EvaluateFeatureDependencies@@YAXXZ.c)
 *     ?wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z @ 0x1C00BC25C (-wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z.c)
 *     ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C00BC2C0 (-wil_details_UpdateFeatureConfiguredStates@@YAXXZ.c)
 *     ?wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ @ 0x1C00C80F0 (-wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ.c)
 * Callees:
 *     <none>
 */

const wil_details_FeatureDescriptor *__fastcall wil_details_FeatureDescriptors_SkipPadding(
        const wil_details_FeatureDescriptor *p)
{
  while ( 1 )
  {
    if ( p >= wil_details_featureDescriptors_z )
      return 0LL;
    if ( p->featureStateCache )
      break;
    p = (const wil_details_FeatureDescriptor *)((char *)p + 8);
  }
  return p;
}
