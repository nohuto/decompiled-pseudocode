/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407790F4
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x14038C950 (RtlQueryFeatureConfiguration.c)
 * Callees:
 *     RtlpFcValidateFeatureConfigurationType @ 0x14038CA50 (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x14091A420 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromBufferSet(__int64 a1, unsigned int a2, signed int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // r11
  __int64 v7; // r10
  _QWORD *i; // rax
  _DWORD v9[6]; // [rsp+20h] [rbp-18h]

  v3 = a3;
  result = RtlpFcValidateFeatureConfigurationType(a3);
  if ( (int)result >= 0 )
  {
    v7 = 0LL;
    for ( i = (_QWORD *)(v6 + 8); !*i; i += 3 )
    {
      if ( ++v7 >= 3 )
        return 2147483682LL;
    }
    v9[0] = 0;
    v9[1] = 1;
    return RtlpFcQueryFeatureConfigurationFromBuffers(a2, v6 + 24LL * (int)v9[v3], v6 + 48);
  }
  return result;
}
