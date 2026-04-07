/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ThumbnailTabs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009ADC0
 * Callers:
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x18009AB74 (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180055DF0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ThumbnailTabs@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009A990 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ThumbnailTabs@@@details@.c)
 */

_UNKNOWN **wil::details::FeatureImpl<__WilFeatureTraits_Feature_ThumbnailTabs>::ReportUsage(
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
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ThumbnailTabs>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)va);
    v9 = v3;
  }
  LODWORD(v9) = 1;
  BYTE4(v9) = 0;
  v8 = WORD2(v9);
  v7 = 1;
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0x1083C91u,
           ((unsigned int)v3 >> 10) & 1,
           ((unsigned int)v3 >> 11) & 1,
           (__int64)&v7,
           v5,
           3u);
}
