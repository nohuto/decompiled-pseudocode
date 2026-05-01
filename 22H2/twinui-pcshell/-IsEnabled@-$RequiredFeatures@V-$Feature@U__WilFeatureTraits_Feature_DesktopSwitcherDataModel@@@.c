/*
 * XREFs of ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_DesktopSwitcherDataModel@@@wil@@@details@wil@@SA_NXZ @ 0x180284D90
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180284A94 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803599D8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabView@@@detail.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803F762C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@de.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSwitcherDataModel@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18028541C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSwitcherDataModel@@@details@wil@@Q.c)
 */

char wil::details::RequiredFeatures<wil::Feature<__WilFeatureTraits_Feature_DesktopSwitcherDataModel>>::IsEnabled()
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSwitcherDataModel>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_DesktopSwitcherDataModel>::GetImpl'::`2'::impl);
  return 1;
}
