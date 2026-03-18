/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x1403C7820
 * Callers:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140907F90 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     CmQuerySingleFeatureConfiguration @ 0x140911230 (CmQuerySingleFeatureConfiguration.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140911780 (wil_details_UpdateFeatureConfiguredStates.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403C78DC (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403C7984 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcGetBufferManager @ 0x1406EBC34 (RtlpFcGetBufferManager.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140832F68 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 */

__int64 __fastcall RtlQueryFeatureConfiguration(unsigned int a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  __int64 BufferManager; // rsi
  int FeatureConfigurationFromBufferSet; // eax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  if ( ObGetCurrentIrql() > 1u && ((KiBugCheckActive & 3) != 0 || PoPowerDownActionInProgress) )
    return 2147483682LL;
  BufferManager = RtlpFcGetBufferManager();
  RtlpFcBufferManagerReferenceBuffers(BufferManager, &v12, &v13);
  FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(v13, a1, a2, a4);
  v10 = FeatureConfigurationFromBufferSet;
  if ( FeatureConfigurationFromBufferSet >= 0 )
  {
    v10 = 0;
    *a3 = v12;
  }
  else if ( FeatureConfigurationFromBufferSet == -1073741275 || FeatureConfigurationFromBufferSet == -2147483614 )
  {
    *a3 = v12;
  }
  RtlpFcBufferManagerDereferenceBuffers(BufferManager, v13);
  return v10;
}
