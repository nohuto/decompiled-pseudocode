/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18008D410
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180016020 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008C648 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z @ 0x18008D0D0 (-OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z.c)
 *     ??0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z @ 0x1800BCB44 (--0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z.c)
 *     ?ShouldUpdateViewport@MagnifierExperienceHelper@@AEBA_NAEBUtagPOINT@@00@Z @ 0x1800BD4FC (-ShouldUpdateViewport@MagnifierExperienceHelper@@AEBA_NAEBUtagPOINT@@00@Z.c)
 *     ?UpdateMagnifiedWindowParameters@MagnifierExperienceHelper@@AEAAXXZ @ 0x1800BD640 (-UpdateMagnifiedWindowParameters@MagnifierExperienceHelper@@AEAAXXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180055DF0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18008C358 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJi.c)
 */

_UNKNOWN **wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  unsigned int v5; // edi
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int16 v8; // [rsp+54h] [rbp+Ch]
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)va);
    v9 = v3;
  }
  LODWORD(v9) = 0;
  v7 = 0;
  BYTE4(v9) = 3;
  v8 = WORD2(v9);
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0x1364866u,
           ((unsigned int)v3 >> 10) & 1,
           ((unsigned int)v3 >> 11) & 1,
           (__int64)&v7,
           v5,
           3u);
}
