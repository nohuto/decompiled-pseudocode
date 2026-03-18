/*
 * XREFs of ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C00B7DE8
 * Callers:
 *     ?wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z @ 0x1C02C91C0 (-wil_details_OnFeatureConfigurationChange@@YAXPEAX@Z.c)
 *     ?wil_details_UpdateFeatureConfiguredStates@@YAXXZ @ 0x1C02C9268 (-wil_details_UpdateFeatureConfiguredStates@@YAXXZ.c)
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C02E5A60 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 *     ?wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ @ 0x1C02E5B54 (-wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ.c)
 * Callees:
 *     <none>
 */

const struct wil_details_FeatureDescriptor *__fastcall wil_details_FeatureDescriptors_SkipPadding(_QWORD *a1)
{
  while ( a1 < wil_details_featureDescriptors_z )
  {
    if ( *a1 )
      return (const struct wil_details_FeatureDescriptor *)a1;
    ++a1;
  }
  return 0LL;
}
