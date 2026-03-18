/*
 * XREFs of RtlpFcBufferManagerReferenceBuffers @ 0x14035CC4C
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x14035CAB0 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x140410DB0 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x140410E70 (RtlQueryInternalFeatureConfiguration.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140810588 (CmFcpManagerDrainUsageNotifications.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1409BD4B0 (RtlQueryAllFeatureConfigurations.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140A26ECC (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140A273A0 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A277C8 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B3B6E8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlAcquireSwapReference @ 0x14035CC9C (RtlAcquireSwapReference.c)
 *     RtlpFcEnterRegion @ 0x1407D1628 (RtlpFcEnterRegion.c)
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
