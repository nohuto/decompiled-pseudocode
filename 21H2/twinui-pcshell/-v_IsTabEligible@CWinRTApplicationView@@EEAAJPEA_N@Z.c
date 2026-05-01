/*
 * XREFs of ?v_IsTabEligible@CWinRTApplicationView@@EEAAJPEA_N@Z @ 0x1802063C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004A614 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 */

__int64 __fastcall CWinRTApplicationView::v_IsTabEligible(CWinRTApplicationView *this, bool *a2)
{
  *a2 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0,
    3u);
  return 0LL;
}
