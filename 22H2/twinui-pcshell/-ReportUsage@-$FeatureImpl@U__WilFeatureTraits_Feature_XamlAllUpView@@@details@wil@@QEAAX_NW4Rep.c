/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18028582C
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@SA_NXZ @ 0x1800C6F90 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@SA_NXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803717AC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@.c)
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1803EE034 (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x1803EED90 (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 *     ?GetMTVHostKind@@YA?AW4MultitaskingViewHostKind@@W4MULTITASKING_VIEW_TYPES@@@Z @ 0x1803F76EC (-GetMTVHostKind@@YA-AW4MultitaskingViewHostKind@@W4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F83D8 (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 *     ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F8AA0 (-_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationVi.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180097564 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180284338 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@.c)
 */

_UNKNOWN **wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  unsigned int v3; // edi
  volatile unsigned __int32 v4; // r8d
  unsigned int v6; // esi
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int16 v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  v3 = a3;
  v4 = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::GetCachedFeatureEnabledState(
                       a1,
                       (signed __int32 *)va);
    v4 = v10;
  }
  v8 = 4;
  BYTE4(v10) = 3;
  v9 = WORD2(v10);
  LODWORD(v10) = 4;
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0x78E913u,
           (v4 >> 10) & 1,
           (v4 >> 11) & 1,
           (__int64)&v8,
           v6,
           v3);
}
