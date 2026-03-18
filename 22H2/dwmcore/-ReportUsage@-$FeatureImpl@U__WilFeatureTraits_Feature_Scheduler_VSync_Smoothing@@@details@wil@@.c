/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AF8A8
 * Callers:
 *     ?GetSmoothedDuration@CPartitionVerticalBlankScheduler@@UEBA_KXZ @ 0x18004A510 (-GetSmoothedDuration@CPartitionVerticalBlankScheduler@@UEBA_KXZ.c)
 *     ?CalculateEffectiveRefreshRate@CRateInfo@@QEAAXPEAVCFrameInfo@@0@Z @ 0x18004DBA8 (-CalculateEffectiveRefreshRate@CRateInfo@@QEAAXPEAVCFrameInfo@@0@Z.c)
 *     ?ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x18004E3CC (-ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004E600 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800AF654 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1800D685C (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800D6A08 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800393E4 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800AFEA8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothin.c)
 */

_UNKNOWN **__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 3;
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0x19A48D4u,
           ((unsigned int)v4 >> 10) & 1,
           ((unsigned int)v4 >> 11) & 1,
           (__int64)&v9,
           v6,
           3u);
}
