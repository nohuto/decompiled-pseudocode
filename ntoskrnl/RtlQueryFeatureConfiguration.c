/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x1402F02B0
 * Callers:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x14092FDE0 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     CmQuerySingleFeatureConfiguration @ 0x140A0EFE0 (CmQuerySingleFeatureConfiguration.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140A0F6D8 (wil_details_UpdateFeatureConfiguredStates.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140205E10 (ObGetCurrentIrql.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1402F03BC (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1402F0450 (RtlpFcBufferManagerReferenceBuffers.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x14040C1D4 (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 *     RtlpFcGetBufferManager @ 0x1407822AC (RtlpFcGetBufferManager.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407822BC (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 */

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
