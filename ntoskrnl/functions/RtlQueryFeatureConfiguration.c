__int64 __fastcall RtlQueryFeatureConfiguration(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 BufferManager; // rsi
  int v10; // r9d
  int FeatureConfigurationFromBufferSet; // eax
  unsigned int v12; // ebx
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h] BYREF
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( ObGetCurrentIrql() > 1u && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
    return 2147483682LL;
  BufferManager = RtlpFcGetBufferManager();
  RtlpFcBufferManagerReferenceBuffers(BufferManager, &v13, &v14);
  FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(v14, a1, a2, v10, (__int64)&v15);
  v12 = FeatureConfigurationFromBufferSet;
  if ( FeatureConfigurationFromBufferSet >= 0 )
  {
    RtlpFcConvertFeatureConfigurationsInternalToExternal(&v15, a4, 1LL);
    v12 = 0;
    *a3 = v13;
  }
  else if ( FeatureConfigurationFromBufferSet == -1073741275 || FeatureConfigurationFromBufferSet == -2147483614 )
  {
    *a3 = v13;
  }
  RtlpFcBufferManagerDereferenceBuffers(BufferManager, v14);
  return v12;
}
