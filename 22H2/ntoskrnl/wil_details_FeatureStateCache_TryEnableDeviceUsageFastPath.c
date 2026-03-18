/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14040F218
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x14040F26C (wil_details_IsEnabledFallback.c)
 *     Feature_BamQosGrouping__private_ReportDeviceUsage @ 0x14040F864 (Feature_BamQosGrouping__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage @ 0x14040F8CC (Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage.c)
 *     Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage @ 0x14040F934 (Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage.c)
 *     Feature_SchedulerQosPreemption__private_ReportDeviceUsage @ 0x14040F99C (Feature_SchedulerQosPreemption__private_ReportDeviceUsage.c)
 *     Feature_SchedulerRemoveForegroundBoostDecay__private_ReportDeviceUsage @ 0x14040FA04 (Feature_SchedulerRemoveForegroundBoostDecay__private_ReportDeviceUsage.c)
 *     Feature_MultiCoreClasses__private_ReportDeviceUsage @ 0x14040FA6C (Feature_MultiCoreClasses__private_ReportDeviceUsage.c)
 *     Feature_PerProcessorClockTick__private_ReportDeviceUsage @ 0x14040FC6C (Feature_PerProcessorClockTick__private_ReportDeviceUsage.c)
 *     Feature_SoftParkingElections__private_ReportDeviceUsage @ 0x1404105AC (Feature_SoftParkingElections__private_ReportDeviceUsage.c)
 *     Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage @ 0x140410B04 (Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140410BB4 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage @ 0x140410C64 (Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage.c)
 *     Feature_HgsPlusSupportRequired__private_ReportDeviceUsage @ 0x140410CCC (Feature_HgsPlusSupportRequired__private_ReportDeviceUsage.c)
 *     Feature_Servicing_DisableWheaResumedFromHibernate_36438331__private_ReportDeviceUsage @ 0x140416320 (Feature_Servicing_DisableWheaResumedFromHibernate_36438331__private_ReportDeviceUsage.c)
 *     Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage @ 0x1404190C8 (Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage.c)
 *     Feature_KernelSharedUserDataAslr__private_ReportDeviceUsage @ 0x140419970 (Feature_KernelSharedUserDataAslr__private_ReportDeviceUsage.c)
 *     Feature_XFG_User__private_ReportDeviceUsage @ 0x140419B20 (Feature_XFG_User__private_ReportDeviceUsage.c)
 *     Feature_IMDSLicensingIntegration__private_ReportDeviceUsage @ 0x140419B88 (Feature_IMDSLicensingIntegration__private_ReportDeviceUsage.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(unsigned __int8 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // r9
  int v4; // edx
  unsigned int v5; // r10d
  signed __int32 v6; // eax
  signed __int32 v7; // ett

  v3 = *(volatile signed __int32 **)a3;
  v4 = a2 - 3;
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
    v5 = 32;
  }
  else
  {
    v5 = 16;
  }
  if ( *(_BYTE *)(a3 + 30) || *(_BYTE *)(a3 + 29) )
  {
    _InterlockedOr(v3, v5);
  }
  else
  {
    v6 = *v3;
    do
    {
      if ( (v6 & 2) == 0 )
        break;
      if ( ((a1 ^ (unsigned __int8)v6) & 1) != 0 )
        break;
      v7 = v6;
      v6 = _InterlockedCompareExchange(v3, v5 | v6, v6);
    }
    while ( v7 != v6 );
  }
}
