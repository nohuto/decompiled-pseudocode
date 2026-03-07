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
