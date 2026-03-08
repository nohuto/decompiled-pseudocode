/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x140A0F624
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x14067CE80 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x140388E28 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x140818F14 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

unsigned int **wil_details_EvaluateFeatureDependencies()
{
  __int64 (__fastcall **v0)(); // rdx
  int v1; // r9d
  int v2; // r8d
  int v3; // eax
  __int64 (__fastcall **i)(); // rcx
  unsigned int **result; // rax
  unsigned int **v6; // rbx

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
    result = (unsigned int **)wil_details_FeatureDescriptors_SkipPadding(i);
    v6 = result;
    if ( !result )
      break;
    wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(*result, (__int64)result);
  }
  return result;
}
