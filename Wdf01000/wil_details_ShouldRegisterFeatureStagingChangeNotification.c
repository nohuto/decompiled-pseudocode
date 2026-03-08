/*
 * XREFs of wil_details_ShouldRegisterFeatureStagingChangeNotification @ 0x1C00B002C
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1C00BD0AC (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0017930 (wil_details_FeatureDescriptors_SkipPadding.c)
 */

const wil_details_FeatureDescriptor *__fastcall wil_details_ShouldRegisterFeatureStagingChangeNotification()
{
  const wil_details_FeatureDescriptor *result; // rax
  char v1; // dl

  result = wil_details_FeatureDescriptors_SkipPadding(wil_details_featureDescriptors_a);
  v1 = 0;
  while ( result )
  {
    if ( result->isAlwaysDisabled == v1 && result->isAlwaysEnabled == v1 && result->changeTime == v1 )
      return (const wil_details_FeatureDescriptor *)1;
    result = wil_details_FeatureDescriptors_SkipPadding(result + 1);
  }
  return result;
}
