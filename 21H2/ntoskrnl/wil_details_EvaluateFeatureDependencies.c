/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x1405CC62C
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1405CC7E0 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 *     CmInitBootFeatureConfigurations @ 0x140A39340 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403F06C4 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x1405CC6E0 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

__int64 (__fastcall **wil_details_EvaluateFeatureDependencies())()
{
  __int64 (__fastcall **v0)(); // rdx
  int v1; // r9d
  int v2; // r8d
  int v3; // eax
  __int64 (__fastcall **i)(); // rcx
  __int64 (__fastcall **result)(); // rax
  __int64 (__fastcall **v6)(); // rbx

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
      v0 = wil_details_FeatureDescriptors_SkipPadding(v0 + 5);
    }
    while ( v0 );
  }
  for ( i = (__int64 (__fastcall **)())&wil_details_featureDescriptors_a; ; i = v6 + 5 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v6 = result;
    if ( !result )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*result, result);
  }
  return result;
}
