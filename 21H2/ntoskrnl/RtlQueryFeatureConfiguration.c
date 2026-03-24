/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x14038C800
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1402D33C4 (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1405CC7E0 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 *     CmQuerySingleFeatureConfiguration @ 0x14086B1AC (CmQuerySingleFeatureConfiguration.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14025F590 (ObGetCurrentIrql.c)
 *     KeIsBugCheckActive @ 0x14039AAFC (KeIsBugCheckActive.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6968 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A6D4C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140778F34 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlpFcGetBufferManager @ 0x140919088 (RtlpFcGetBufferManager.c)
 */

__int64 __fastcall RtlQueryFeatureConfiguration(unsigned int a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  char v8; // cl
  ULONG_PTR v9; // r8
  __int64 BufferManager; // rsi
  int FeatureConfigurationFromBufferSet; // eax
  unsigned int v13; // ebx
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp+0h]

  v14 = 0LL;
  v15 = 0LL;
  if ( ObGetCurrentIrql() <= 1u )
  {
    BufferManager = RtlpFcGetBufferManager();
    RtlpFcBufferManagerReferenceBuffers(BufferManager, &v14, &v15);
    FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(v15, a1, a2, a4);
    v13 = FeatureConfigurationFromBufferSet;
    if ( FeatureConfigurationFromBufferSet >= 0 )
    {
      v13 = 0;
      *a3 = v14;
    }
    else if ( FeatureConfigurationFromBufferSet == -1073741275 || FeatureConfigurationFromBufferSet == -2147483614 )
    {
      *a3 = v14;
    }
    RtlpFcBufferManagerDereferenceBuffers(BufferManager, v15);
    return v13;
  }
  else
  {
    if ( !(unsigned __int8)KeIsBugCheckActive(0LL) && PoPowerDownActionInProgress == v8 )
      KeBugCheckEx(0xAu, (ULONG_PTR)RtlQueryFeatureConfiguration, v9, 0LL, BugCheckParameter4);
    return 2147483682LL;
  }
}
