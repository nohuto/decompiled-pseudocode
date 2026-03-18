/*
 * XREFs of wil_details_OnFeatureConfigurationChange @ 0x1409116D0
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403C77F8 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x140832A7C (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140911780 (wil_details_UpdateFeatureConfiguredStates.c)
 */

__int64 *wil_details_OnFeatureConfigurationChange()
{
  __int64 *v0; // rdx
  int v1; // r9d
  int v2; // r8d
  BOOL v3; // eax
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v6; // rbx

  wil_details_UpdateFeatureConfiguredStates();
  v0 = wil_details_FeatureDescriptors_SkipPadding((__int64 *)&wil_details_featureDescriptors_a);
  if ( v0 )
  {
    v1 = 0;
    do
    {
      v2 = *(_DWORD *)*v0;
      if ( (v2 & 0x80u) != 0 )
      {
        if ( (v2 & 0x60) != 0 )
          v3 = (*(_DWORD *)*v0 & 0x60) == 64;
        else
          v3 = *((_BYTE *)v0 + 23) != 0;
        _InterlockedXor((volatile signed __int32 *)*v0, v1 & 0xFFFFFFEF | (16 * v3) ^ *(_DWORD *)*v0 & 0x10);
      }
      v0 = wil_details_FeatureDescriptors_SkipPadding(v0 + 6);
    }
    while ( v0 );
  }
  for ( i = (__int64 *)&wil_details_featureDescriptors_a; ; i = v6 + 6 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v6 = result;
    if ( !result )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState((unsigned int *)*result, (__int64)result);
  }
  return result;
}
