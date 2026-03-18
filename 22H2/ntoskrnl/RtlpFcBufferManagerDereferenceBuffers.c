/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x14035CBB8
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
 *     RtlReleaseSwapReference @ 0x14035CBF4 (RtlReleaseSwapReference.c)
 *     RtlpFcLeaveRegion @ 0x1407D1610 (RtlpFcLeaveRegion.c)
 */

__int64 __fastcall RtlpFcBufferManagerDereferenceBuffers(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = (__int64)((unsigned __int128)((a2 - a1 - 24) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  RtlReleaseSwapReference(a1, (v2 >> 63) + v2);
  return RtlpFcLeaveRegion();
}
