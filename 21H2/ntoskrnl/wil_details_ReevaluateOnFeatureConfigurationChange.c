/*
 * XREFs of wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1405CC7E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x14038C800 (RtlQueryFeatureConfiguration.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403F0554 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1405CC5C4 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1405CC62C (wil_details_EvaluateFeatureDependencies.c)
 */

__int64 *wil_details_ReevaluateOnFeatureConfigurationChange()
{
  __int64 *i; // rcx
  unsigned int v1; // ecx
  int v2; // eax
  __int64 *v3; // rax
  volatile signed __int32 **v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  for ( i = (__int64 *)&wil_details_featureDescriptors_a; ; i = (__int64 *)(v4 + 5) )
  {
    v3 = wil_details_FeatureDescriptors_SkipPadding(i);
    v4 = (volatile signed __int32 **)v3;
    if ( !v3 )
      break;
    if ( !*((_BYTE *)v3 + 29) && !*((_BYTE *)v3 + 30) && !*((_BYTE *)v3 + 28) )
    {
      v1 = *((_DWORD *)v3 + 6);
      v6 = 0LL;
      v7 = 0;
      v2 = RtlQueryFeatureConfiguration(v1, 1u, &v9, (__int64)&v6);
      v8 = 0LL;
      wil_details_BuildFeatureStateCacheFromQueryResults(v2, (__int64)&v6, &v8);
      _InterlockedXor(*v4, ((unsigned __int16)v8 ^ (unsigned __int16)**v4) & 0xF80);
    }
  }
  return wil_details_EvaluateFeatureDependencies();
}
