/*
 * XREFs of RtlpFcBufferManagerReferenceBuffers @ 0x1403C7984
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1403C7820 (RtlQueryFeatureConfiguration.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140832E84 (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140922DB4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14092317C (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1409B5E70 (RtlQueryAllFeatureConfigurations.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B156F8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlAcquireSwapReference @ 0x1403C79D4 (RtlAcquireSwapReference.c)
 *     RtlpFcEnterRegion @ 0x1408330F8 (RtlpFcEnterRegion.c)
 */

__int64 __fastcall RtlpFcBufferManagerReferenceBuffers(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r10
  __int64 result; // rax
  _QWORD *v7; // r11

  RtlpFcEnterRegion();
  v5 = (unsigned int)RtlAcquireSwapReference();
  result = *(_QWORD *)(a1 + 8 * v5 + 168);
  *v7 = result;
  *a3 = a1 + 8 * (v5 + 8 * v5 + 3);
  return result;
}
