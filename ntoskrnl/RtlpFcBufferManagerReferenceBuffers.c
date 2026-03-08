/*
 * XREFs of RtlpFcBufferManagerReferenceBuffers @ 0x1402F0450
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1402F02B0 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x14040BAE0 (RtlQueryAllInternalFeatureConfigurations.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140818490 (CmFcpManagerDrainUsageNotifications.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1409B6010 (RtlQueryAllFeatureConfigurations.c)
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140A2416C (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140A24640 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A24A68 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B53284 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     RtlAcquireSwapReference @ 0x1402F04A0 (RtlAcquireSwapReference.c)
 *     RtlpFcEnterRegion @ 0x1407824A4 (RtlpFcEnterRegion.c)
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
