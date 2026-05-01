/*
 * XREFs of ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_40979072@@@wil@@@details@wil@@SA_NXZ @ 0x1800A7B60
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InstallDefaultWebSearchProvider@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800A5B14 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InstallDefaultWebSearch.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_54865933@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800A5DF4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_54865933@@@de.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800AB55C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAA_NW4R.c)
 */

bool wil::details::RequiredFeatures<wil::Feature<__WilFeatureTraits_Feature_40979072>>::IsEnabled()
{
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_40979072>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_40979072>::GetImpl'::`2'::impl) != 0;
}
