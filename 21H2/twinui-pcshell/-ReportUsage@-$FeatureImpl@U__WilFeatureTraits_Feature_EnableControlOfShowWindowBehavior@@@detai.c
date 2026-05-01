/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801BFF18
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801C22A0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?InitializePosition@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1802B1620 (-InitializePosition@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresent.c)
 *     ?InitializePositionWithShowCommand@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x1802B16D0 (-InitializePositionWithShowCommand@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknow.c)
 *     ?add_PresentationReadyChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1802C5560 (-add_PresentationReadyChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJP.c)
 *     ?EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ @ 0x180352138 (-EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180097584 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801BAA40 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_EnableControlOfShowWindo.c)
 */

_UNKNOWN **wil::details::FeatureImpl<__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        ...)
{
  __int64 v3; // r8
  unsigned int v5; // edi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v3 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v7);
    v7 = v3;
  }
  LODWORD(v8) = 0;
  BYTE4(v8) = 3;
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0x11D4E8Bu,
           ((unsigned int)v3 >> 10) & 1,
           ((unsigned int)v3 >> 11) & 1,
           (__int64)va,
           v5,
           3u);
}
