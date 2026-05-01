/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803F7D68
 * Callers:
 *     ?GetMTVHostKind@@YA?AW4MultitaskingViewHostKind@@W4MULTITASKING_VIEW_TYPES@@@Z @ 0x1803F79BC (-GetMTVHostKind@@YA-AW4MultitaskingViewHostKind@@W4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F86A8 (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 *     ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F8D70 (-_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationVi.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180097584 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803F781C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@det.c)
 */

_UNKNOWN **wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlSnapAssistView>::ReportUsage(
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
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlSnapAssistView>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)va);
    v9 = v3;
  }
  LODWORD(v9) = 0;
  BYTE4(v9) = 0;
  v7 = 0;
  v8 = WORD2(v9);
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0x78E925u,
           ((unsigned int)v3 >> 10) & 1,
           ((unsigned int)v3 >> 11) & 1,
           (__int64)&v7,
           v5,
           3u);
}
