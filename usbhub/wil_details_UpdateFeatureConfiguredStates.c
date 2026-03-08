/*
 * XREFs of wil_details_UpdateFeatureConfiguredStates @ 0x1C007327C
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1C0073260 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C0022AE0 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1C0073038 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

volatile signed __int32 **wil_details_UpdateFeatureConfiguredStates()
{
  _QWORD *i; // rcx
  __int64 v1; // rcx
  int v2; // eax
  volatile signed __int32 **result; // rax
  volatile signed __int32 **v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  for ( i = wil_details_featureDescriptors_a; ; i = v4 + 7 )
  {
    result = (volatile signed __int32 **)wil_details_FeatureDescriptors_SkipPadding(i);
    v4 = result;
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 29) && !*((_BYTE *)result + 30) && !*((_BYTE *)result + 28) )
    {
      v1 = *((unsigned int *)result + 6);
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0;
      v2 = RtlQueryFeatureConfiguration(v1, 1LL, &v6, &v7);
      v5 = 0LL;
      wil_details_BuildFeatureStateCacheFromQueryResults(v2, (__int64)&v7, &v5);
      _InterlockedXor(*v4, ((unsigned __int16)v5 ^ (unsigned __int16)**v4) & 0xF80);
    }
  }
  return result;
}
