__int64 __fastcall RtlpFcQueryFeatureConfigurationFromBufferSet(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r9
  _QWORD *i; // rax
  _DWORD v11[6]; // [rsp+20h] [rbp-18h]

  result = RtlpFcValidateFeatureConfigurationType(a3);
  if ( (int)result >= 0 )
  {
    v9 = 0LL;
    for ( i = (_QWORD *)(v7 + 8); !*i; i += 3 )
    {
      if ( ++v9 >= 3 )
        return 2147483682LL;
    }
    v11[0] = 0;
    v11[1] = 1;
    return RtlpFcQueryFeatureConfigurationFromBuffers(a2, v7 + 24LL * (int)v11[v8], v7 + 48, a5);
  }
  return result;
}
