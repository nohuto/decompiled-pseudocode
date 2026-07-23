/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140A395E8
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140A39340 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403F06C4 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1405CC5C4 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x14091A420 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 */

__int64 (__fastcall **__fastcall wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers(__int64 *a1))()
{
  __int64 (__fastcall **v2)(); // rcx
  __int64 v3; // rax
  int v4; // ecx
  int FeatureConfigurationFromBuffers; // eax
  __int64 (__fastcall **result)(); // rax
  __int64 (__fastcall **v7)(); // rbx
  __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+28h] [rbp-38h]
  _QWORD v11[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+18h] BYREF

  v2 = (__int64 (__fastcall **)())&wil_details_featureDescriptors_a;
  while ( 1 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(v2);
    v7 = result;
    if ( !result )
      break;
    v13 = 0LL;
    v9 = 0LL;
    v10 = 0;
    if ( *((_BYTE *)result + 29) || *((_BYTE *)result + 30) )
    {
      FeatureConfigurationFromBuffers = -1073741275;
    }
    else
    {
      v12[0] = 0LL;
      v3 = *a1;
      v4 = *((_DWORD *)v7 + 6);
      v11[0] = 0LL;
      v12[1] = v3;
      v12[2] = a1[1];
      v11[1] = a1[2];
      v11[2] = a1[3];
      FeatureConfigurationFromBuffers = RtlpFcQueryFeatureConfigurationFromBuffers(
                                          v4,
                                          (__int64)v12,
                                          (__int64)v11,
                                          (__int64)&v9);
    }
    if ( FeatureConfigurationFromBuffers == -2147483614 )
    {
      v13 = 518LL;
      v8 = 518LL;
      do
      {
        *(_QWORD *)*v7 = v8;
        result = wil_details_FeatureDescriptors_SkipPadding(v7 + 5);
        v7 = result;
      }
      while ( result );
      return result;
    }
    wil_details_BuildFeatureStateCacheFromQueryResults(FeatureConfigurationFromBuffers, (__int64)&v9, &v13);
    v2 = v7 + 5;
    *(_QWORD *)*v7 = v13;
  }
  return result;
}
