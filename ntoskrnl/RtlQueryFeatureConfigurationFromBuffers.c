/*
 * XREFs of RtlQueryFeatureConfigurationFromBuffers @ 0x140388D7C
 * Callers:
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140B5399C (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x14040C1D4 (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x140782330 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 */

__int64 __fastcall RtlQueryFeatureConfigurationFromBuffers(__int64 *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // r9d
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v10; // [rsp+50h] [rbp-28h] BYREF

  v10 = 0LL;
  if ( a3 < 2 )
  {
    v6 = *a1;
    v9[0] = 0LL;
    v8[0] = 0LL;
    v9[1] = v6;
    v9[2] = a1[1];
    v8[1] = a1[2];
    v8[2] = a1[3];
    v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD *, _QWORD *, __int128 *))RtlpFcQueryFeatureConfigurationFromBuffers)(
           a2,
           v9,
           v8,
           &v10);
    if ( !v5 )
      RtlpFcConvertFeatureConfigurationsInternalToExternal(&v10, a4, 1LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
