/*
 * XREFs of ?wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z @ 0x1C00BC25C
 * Callers:
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C00C80AC (-wil_InitializeFeatureStaging@@YAJXZ.c)
 * Callees:
 *     ?wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z @ 0x1C001B244 (-wil_details_FeatureDescriptors_SkipPadding@@YAPEBUwil_details_FeatureDescriptor@@_K@Z.c)
 */

const wil_details_FeatureDescriptor *__fastcall wil_details_RegisterFeatureStagingChangeNotification(
        unsigned __int64 *ObservedChangeStamp)
{
  const wil_details_FeatureDescriptor *i; // rcx
  const wil_details_FeatureDescriptor *result; // rax
  __int64 v3; // r8

  for ( i = wil_details_featureDescriptors_a; ; i = result + 1 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !result )
      break;
    if ( !result->isAlwaysDisabled && !result->isAlwaysEnabled && !result->changeTime )
    {
      result = (const wil_details_FeatureDescriptor *)RtlRegisterFeatureConfigurationChangeNotification(
                                                        wil_details_OnFeatureConfigurationChange,
                                                        0LL,
                                                        v3,
                                                        &wil_details_featureChangeNotification);
      if ( (_DWORD)result )
        wil_details_featureChangeNotification = 0LL;
      return result;
    }
  }
  return result;
}
