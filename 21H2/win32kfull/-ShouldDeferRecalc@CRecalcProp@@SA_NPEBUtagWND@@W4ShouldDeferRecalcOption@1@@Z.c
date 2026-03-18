/*
 * XREFs of ?ShouldDeferRecalc@CRecalcProp@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x1C00AF70C
 * Callers:
 *     ?OnWindowUncloak@DesktopRecalc@@YAXPEAUtagWND@@@Z @ 0x1C0082214 (-OnWindowUncloak@DesktopRecalc@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA?AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C015C6CC (-CreateForTopologyChange@CRecalcProp@@SA-AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@.c)
 *     ?CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z @ 0x1C023AB38 (-CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0024EF0 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 */

bool __fastcall CRecalcProp::ShouldDeferRecalc(const struct tagWND *a1, int a2)
{
  int v5; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_DisableDesktopRecalcDeferment__private_reporting,
    0x1A3D6A7u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Win32kBugcheckOnFailedBCryptgenRandom_logged_traits,
    0,
    v5);
  if ( a2 != 1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      return 1;
    if ( a2 == 2 )
      return 0;
  }
  return (unsigned int)GetWindowCloakState(a1) != 0;
}
