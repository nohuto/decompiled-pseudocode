/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x1402F03BC
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
 *     RtlReleaseSwapReference @ 0x1402F03F8 (RtlReleaseSwapReference.c)
 *     RtlpFcLeaveRegion @ 0x14078248C (RtlpFcLeaveRegion.c)
 */

__int64 __fastcall RtlpFcBufferManagerDereferenceBuffers(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = (__int64)((unsigned __int128)((a2 - a1 - 24) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  RtlReleaseSwapReference(a1, (v2 >> 63) + v2);
  return RtlpFcLeaveRegion();
}
