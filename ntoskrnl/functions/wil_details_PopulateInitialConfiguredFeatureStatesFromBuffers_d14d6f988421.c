__int64 (__fastcall **__fastcall wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers(__int64 *a1))()
{
  __int64 (__fastcall **v2)(); // rcx
  __int64 (__fastcall **result)(); // rax
  __int64 (__fastcall **v4)(); // rbx
  int FeatureConfigurationFromBuffers; // eax
  __int64 v6; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  v2 = (__int64 (__fastcall **)())&wil_details_featureDescriptors_a;
  while ( 1 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(v2);
    v4 = result;
    if ( !result )
      break;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0;
    if ( *((_BYTE *)result + 29) || *((_BYTE *)result + 30) )
    {
      FeatureConfigurationFromBuffers = -1073741275;
    }
    else
    {
      FeatureConfigurationFromBuffers = RtlQueryFeatureConfigurationFromBuffers(
                                          a1,
                                          *((_DWORD *)result + 6),
                                          (unsigned __int8)(*((_BYTE *)result + 28) - 2) > 1u,
                                          (__int64)&v8);
      if ( FeatureConfigurationFromBuffers == -2147483614 )
      {
        v7 = 518LL;
        v6 = 518LL;
        do
        {
          *(_QWORD *)*v4 = v6;
          result = wil_details_FeatureDescriptors_SkipPadding(v4 + 7);
          v4 = result;
        }
        while ( result );
        return result;
      }
    }
    wil_details_BuildFeatureStateCacheFromQueryResults(FeatureConfigurationFromBuffers, (__int64)&v8, &v7);
    v2 = v4 + 7;
    *(_QWORD *)*v4 = v7;
  }
  return result;
}
