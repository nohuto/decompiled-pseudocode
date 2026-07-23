/*
 * XREFs of RtlQueryAllFeatureConfigurations @ 0x140919110
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcValidateFeatureConfigurationType @ 0x14038CA50 (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6AB8 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A6E9C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBuffers @ 0x14091A3CC (RtlpFcQueryAllFeatureConfigurationsFromBuffers.c)
 */

NTSTATUS __cdecl RtlQueryAllFeatureConfigurations(
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION Configurations,
        PSIZE_T ConfigurationCount)
{
  __int64 v6; // rbp
  int v8; // eax
  __int64 v9; // rsi
  NTSTATUS AllFeatureConfigurationsFromBuffers; // ebx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  ULONGLONG v13[4]; // [rsp+28h] [rbp-20h] BYREF

  v13[0] = 0LL;
  v12 = 0LL;
  v6 = ConfigurationType;
  RtlpFcBufferManagerReferenceBuffers((__int64)qword_140C481B0, (__int64)v13, &v12);
  v8 = RtlpFcValidateFeatureConfigurationType(v6);
  v9 = v12;
  AllFeatureConfigurationsFromBuffers = v8;
  if ( v8 >= 0 )
  {
    v12 = 0x100000000LL;
    AllFeatureConfigurationsFromBuffers = RtlpFcQueryAllFeatureConfigurationsFromBuffers(
                                            v9 + 24LL * *((unsigned int *)&v13[-1] + v6),
                                            Configurations,
                                            ConfigurationCount);
  }
  if ( AllFeatureConfigurationsFromBuffers >= 0 )
  {
    if ( ChangeStamp )
      *ChangeStamp = v13[0];
    AllFeatureConfigurationsFromBuffers = 0;
  }
  RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C481B0, v9);
  return AllFeatureConfigurationsFromBuffers;
}
