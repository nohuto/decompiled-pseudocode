/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180084744
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_PinWebsiteAction@@@wil@@SA_NXZ @ 0x1800845A0 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_PinWebsiteAction@@@wil@@SA_NXZ.c)
 *     ?Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ @ 0x180093080 (-Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180093160 (-MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Act.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180084600 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteAction@@@detai.c)
 */

signed __int32 *wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        ...)
{
  signed __int32 *result; // rax
  int v4; // edi
  volatile unsigned __int32 v6; // r8d
  unsigned int v7; // esi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  result = (signed __int32 *)&retaddr;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 4) == 0 )
  {
    result = wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteAction>::GetCachedFeatureEnabledState(
               (wil::details *)a1,
               (signed __int32 *)&v9);
    v9 = *(_QWORD *)result;
    v6 = v9;
  }
  BYTE4(v10) = 3;
  LODWORD(v10) = 1;
  if ( (_BYTE)v4 )
    return (signed __int32 *)wil::details::ReportUsageToService(
                               a1 + 2,
                               0xB3E9A6u,
                               (v6 >> 10) & 1,
                               (v6 >> 11) & 1,
                               (__int64)va,
                               v7,
                               v4);
  return result;
}
