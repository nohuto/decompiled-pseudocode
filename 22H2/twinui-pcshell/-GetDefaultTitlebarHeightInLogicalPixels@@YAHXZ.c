/*
 * XREFs of ?GetDefaultTitlebarHeightInLogicalPixels@@YAHXZ @ 0x18004E6F4
 * Callers:
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x18004D8E0 (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     _anonymous_namespace_::GetWindowTitlebarSize @ 0x1802F6E90 (_anonymous_namespace_--GetWindowTitlebarSize.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004E718 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@details@wil@@QE.c)
 */

__int64 GetDefaultTitlebarHeightInLogicalPixels(void)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetImpl'::`2'::impl,
    0LL);
  return 32LL;
}
