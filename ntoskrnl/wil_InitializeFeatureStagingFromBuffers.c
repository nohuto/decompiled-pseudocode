/*
 * XREFs of wil_InitializeFeatureStagingFromBuffers @ 0x140B538E0
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140B5388C (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x140388E28 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x140818F14 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140B5399C (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 */

__int64 wil_InitializeFeatureStagingFromBuffers()
{
  __int64 (__fastcall **v0)(); // rdx
  int v1; // r9d
  int v2; // r8d
  int v3; // eax
  __int64 (__fastcall **i)(); // rcx
  unsigned int **v5; // rax
  unsigned int **v6; // rbx

  wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers();
  v0 = wil_details_FeatureDescriptors_SkipPadding((__int64 (__fastcall **)())&wil_details_featureDescriptors_a);
  if ( v0 )
  {
    v1 = 0;
    do
    {
      v2 = *(_DWORD *)*v0;
      if ( (v2 & 0x200) != 0 )
      {
        if ( (v2 & 0x180) != 0 )
          v3 = (*(_DWORD *)*v0 & 0x180) == 256;
        else
          v3 = *((_BYTE *)v0 + 31) != 0;
        _InterlockedXor((volatile signed __int32 *)*v0, v1 & 0xFFFFFFBF | (v3 << 6) ^ *(_DWORD *)*v0 & 0x40);
      }
      v0 = wil_details_FeatureDescriptors_SkipPadding(v0 + 7);
    }
    while ( v0 );
  }
  for ( i = (__int64 (__fastcall **)())&wil_details_featureDescriptors_a; ; i = (__int64 (__fastcall **)())(v6 + 7) )
  {
    v5 = (unsigned int **)wil_details_FeatureDescriptors_SkipPadding(i);
    v6 = v5;
    if ( !v5 )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*v5, (__int64)v5);
  }
  return 0LL;
}
