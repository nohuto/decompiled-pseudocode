/*
 * XREFs of ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_56309635@@@wil@@@details@wil@@SA_NXZ @ 0x1800B5A08
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_50047689@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800B4350 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_50047689@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55236726@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800B44E0 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55236726@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Feeds_LockScreenContent@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180109830 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Feeds_LockScreenContent.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56309635@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BA048 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56309635@@@details@wil@@QEAA_NW4R.c)
 */

bool wil::details::RequiredFeatures<wil::Feature<__WilFeatureTraits_Feature_56309635>>::IsEnabled()
{
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56309635>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56309635>::GetImpl'::`2'::impl) != 0;
}
