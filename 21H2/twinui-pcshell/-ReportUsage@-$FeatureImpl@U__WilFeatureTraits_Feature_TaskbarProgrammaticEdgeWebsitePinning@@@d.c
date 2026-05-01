/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarProgrammaticEdgeWebsitePinning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18015B504
 * Callers:
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18015A700 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180097584 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarProgrammaticEdgeWebsitePinning@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180155BCC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarProgrammaticEdgeW.c)
 */

_UNKNOWN **__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarProgrammaticEdgeWebsitePinning>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2)
{
  __int64 v2; // r8
  unsigned int v4; // edi
  __int64 v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h] BYREF
  char v8; // [rsp+4Ch] [rbp-1Ch]

  LODWORD(v2) = *(_DWORD *)a1;
  v4 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v2 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarProgrammaticEdgeWebsitePinning>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v6);
    v6 = v2;
  }
  v7 = 0;
  v8 = 3;
  return wil::details::ReportUsageToService(
           (__int64)a1 + 8,
           0x732782u,
           ((unsigned int)v2 >> 10) & 1,
           ((unsigned int)v2 >> 11) & 1,
           (__int64)&v7,
           v4,
           3u);
}
