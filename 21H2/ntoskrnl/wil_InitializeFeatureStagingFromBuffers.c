/*
 * XREFs of wil_InitializeFeatureStagingFromBuffers @ 0x140B15550
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140B15450 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403C77F8 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x140832A7C (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140B15608 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 */

__int64 wil_InitializeFeatureStagingFromBuffers()
{
  unsigned int v0; // edi
  __int64 *v1; // rdx
  int v2; // r9d
  int v3; // r8d
  BOOL v4; // eax
  __int64 *i; // rcx
  __int64 *v6; // rax
  __int64 *v7; // rbx

  v0 = wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers();
  v1 = wil_details_FeatureDescriptors_SkipPadding((__int64 *)&wil_details_featureDescriptors_a);
  if ( v1 )
  {
    v2 = 0;
    do
    {
      v3 = *(_DWORD *)*v1;
      if ( (v3 & 0x80u) != 0 )
      {
        if ( (v3 & 0x60) != 0 )
          v4 = (*(_DWORD *)*v1 & 0x60) == 64;
        else
          v4 = *((_BYTE *)v1 + 23) != 0;
        _InterlockedXor((volatile signed __int32 *)*v1, v2 & 0xFFFFFFEF | (16 * v4) ^ *(_DWORD *)*v1 & 0x10);
      }
      v1 = wil_details_FeatureDescriptors_SkipPadding(v1 + 6);
    }
    while ( v1 );
  }
  for ( i = (__int64 *)&wil_details_featureDescriptors_a; ; i = v7 + 6 )
  {
    v6 = wil_details_FeatureDescriptors_SkipPadding(i);
    v7 = v6;
    if ( !v6 )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState((unsigned int *)*v6, (__int64)v6);
  }
  return v0;
}
