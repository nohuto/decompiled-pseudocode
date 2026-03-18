/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C0076108
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1C0076078 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C001CFB0 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1C0075038 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

_QWORD *wil_details_PopulateInitialConfiguredFeatureStates()
{
  _QWORD *v0; // rcx
  int v1; // eax
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+28h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  int v8; // [rsp+38h] [rbp-18h]

  v0 = &wil_details_featureDescriptors_a;
  while ( 1 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(v0);
    v3 = result;
    if ( !result )
      break;
    v6 = 0LL;
    v5 = 0LL;
    v7 = 0LL;
    v8 = 0;
    if ( *((_BYTE *)result + 29) || *((_BYTE *)result + 30) )
      v1 = -1073741275;
    else
      v1 = RtlQueryFeatureConfiguration(
             *((unsigned int *)result + 6),
             (unsigned __int8)(*((_BYTE *)result + 28) - 2) > 1u,
             &v6,
             &v7);
    if ( v1 == -2147483614 )
    {
      v5 = 518LL;
      v4 = 518LL;
      do
      {
        *(_QWORD *)*v3 = v4;
        result = wil_details_FeatureDescriptors_SkipPadding(v3 + 5);
        v3 = result;
      }
      while ( result );
      return result;
    }
    wil_details_BuildFeatureStateCacheFromQueryResults(v1, (__int64)&v7, &v5);
    v0 = v3 + 5;
    *(_QWORD *)*v3 = v5;
  }
  return result;
}
