/*
 * XREFs of ?IsFeature_WindowManagerDesktopDisabled@@YA_NXZ @ 0x180284F60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801C0020 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@details@wil@@QEAAX.c)
 */

bool IsFeature_WindowManagerDesktopDisabled(void)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowManagerDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::GetImpl'::`2'::impl,
    1u,
    3u);
  return 0;
}
