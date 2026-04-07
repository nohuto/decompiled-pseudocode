/*
 * XREFs of ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_20H2_Enablement@@@wil@@@details@wil@@SA_NXZ @ 0x1800569E4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18005687C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180056930 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@detail.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800577F8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Hub_20H2_UDWM@@@details.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180056C94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_20H2_Enablement@@@details@wil@@QE.c)
 */

bool wil::details::RequiredFeatures<wil::Feature<__WilFeatureTraits_Feature_20H2_Enablement>>::IsEnabled()
{
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_20H2_Enablement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_20H2_Enablement>::GetImpl'::`2'::impl) != 0;
}
