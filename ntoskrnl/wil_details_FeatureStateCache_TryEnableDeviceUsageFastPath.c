/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140409A8C
 * Callers:
 *     PpmPerfSnapUtility @ 0x140235210 (PpmPerfSnapUtility.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     wil_details_IsEnabledFallback @ 0x140409AE0 (wil_details_IsEnabledFallback.c)
 *     Feature_BamQosGrouping__private_ReportDeviceUsage @ 0x14040A310 (Feature_BamQosGrouping__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage @ 0x14040A378 (Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage.c)
 *     Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage @ 0x14040A3E0 (Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage.c)
 *     Feature_SchedulerQosPreemption__private_ReportDeviceUsage @ 0x14040A448 (Feature_SchedulerQosPreemption__private_ReportDeviceUsage.c)
 *     Feature_SchedulerRemoveForegroundBoostDecay__private_ReportDeviceUsage @ 0x14040A4B0 (Feature_SchedulerRemoveForegroundBoostDecay__private_ReportDeviceUsage.c)
 *     Feature_MultiCoreClasses__private_ReportDeviceUsage @ 0x14040A518 (Feature_MultiCoreClasses__private_ReportDeviceUsage.c)
 *     Feature_PerProcessorClockTick__private_ReportDeviceUsage @ 0x14040A770 (Feature_PerProcessorClockTick__private_ReportDeviceUsage.c)
 *     Feature_SoftParkingElections__private_ReportDeviceUsage @ 0x14040B080 (Feature_SoftParkingElections__private_ReportDeviceUsage.c)
 *     Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage @ 0x14040B7EC (Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x14040B89C (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage @ 0x14040B9A0 (Feature_HgsPlusParkingSupportRequired__private_ReportDeviceUsage.c)
 *     Feature_HgsPlusSupportRequired__private_ReportDeviceUsage @ 0x14040BA08 (Feature_HgsPlusSupportRequired__private_ReportDeviceUsage.c)
 *     Feature_Servicing_DisableWheaResumedFromHibernate_36438331__private_ReportDeviceUsage @ 0x14041149C (Feature_Servicing_DisableWheaResumedFromHibernate_36438331__private_ReportDeviceUsage.c)
 *     Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage @ 0x140411520 (Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage.c)
 *     Feature_KernelSharedUserDataAslr__private_ReportDeviceUsage @ 0x1404115D8 (Feature_KernelSharedUserDataAslr__private_ReportDeviceUsage.c)
 *     Feature_XFG_User__private_ReportDeviceUsage @ 0x1404116DC (Feature_XFG_User__private_ReportDeviceUsage.c)
 *     Feature_IMDSLicensingIntegration__private_ReportDeviceUsage @ 0x140411744 (Feature_IMDSLicensingIntegration__private_ReportDeviceUsage.c)
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
