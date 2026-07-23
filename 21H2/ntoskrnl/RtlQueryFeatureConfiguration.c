/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x14038C950
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1402516F4 (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1405CC7E0 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 *     CmQuerySingleFeatureConfiguration @ 0x14086B30C (CmQuerySingleFeatureConfiguration.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14023A8A0 (ObGetCurrentIrql.c)
 *     KeIsBugCheckActive @ 0x14039AC4C (KeIsBugCheckActive.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6AB8 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A6E9C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407790F4 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlpFcGetBufferManager @ 0x1409191E8 (RtlpFcGetBufferManager.c)
 */

NTSTATUS __cdecl RtlQueryFeatureConfiguration(
        RTL_FEATURE_ID FeatureId,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION FeatureConfiguration)
{
  char v8; // cl
  ULONG_PTR v9; // r8
  __int64 BufferManager; // rsi
  int FeatureConfigurationFromBufferSet; // eax
  NTSTATUS v13; // ebx
  ULONGLONG v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp+0h]

  v14 = 0LL;
  v15 = 0LL;
  if ( ObGetCurrentIrql() <= 1u )
  {
    BufferManager = RtlpFcGetBufferManager();
    RtlpFcBufferManagerReferenceBuffers(BufferManager, &v14, &v15);
    FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(
                                          v15,
                                          FeatureId,
                                          (unsigned int)ConfigurationType,
                                          FeatureConfiguration);
    v13 = FeatureConfigurationFromBufferSet;
    if ( FeatureConfigurationFromBufferSet >= 0 )
    {
      v13 = 0;
      *ChangeStamp = v14;
    }
    else if ( FeatureConfigurationFromBufferSet == -1073741275 || FeatureConfigurationFromBufferSet == -2147483614 )
    {
      *ChangeStamp = v14;
    }
    RtlpFcBufferManagerDereferenceBuffers(BufferManager, v15);
    return v13;
  }
  else
  {
    if ( !(unsigned __int8)KeIsBugCheckActive(0LL) && PoPowerDownActionInProgress == v8 )
      KeBugCheckEx(0xAu, (ULONG_PTR)RtlQueryFeatureConfiguration, v9, 0LL, BugCheckParameter4);
    return -2147483614;
  }
}
