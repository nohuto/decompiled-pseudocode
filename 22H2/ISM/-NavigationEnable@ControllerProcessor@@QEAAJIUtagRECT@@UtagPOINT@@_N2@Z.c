/*
 * XREFs of ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x1801214B0
 * Callers:
 *     ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011CF14 (-EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18011DB40 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x180123804 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180027E10 (-IsEdition@@YA_N_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011DF84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180123B10 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

__int64 __fastcall ControllerProcessor::NavigationEnable(
        ControllerProcessor *this,
        int a2,
        struct tagRECT *a3,
        struct tagPOINT a4)
{
  __int64 v7; // r8

  if ( IsEdition(8778LL) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetImpl'::`2'::impl,
      0,
      v7);
  }
  else
  {
    *((_DWORD *)this + 82) = a2;
    ControllerProcessor::UpdateNavigationState(this, 0LL, a3);
  }
  return 0LL;
}
