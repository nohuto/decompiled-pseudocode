/*
 * XREFs of ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_Standalone_24_10_NonSec@@@wil@@@details@wil@@SA_NXZ @ 0x1800B5A2C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_24_11_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800B4CB4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_24_11_NonSec.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestConfVar@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800B4ED8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestConfVar@@@details@w.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_47988717@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800CCB78 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_47988717@@@details@wil@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_24_10_NonSec@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B7348 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_24_10_NonSec@@@details@wil@@QE.c)
 */

char wil::details::RequiredFeatures<wil::Feature<__WilFeatureTraits_Feature_Standalone_24_10_NonSec>>::IsEnabled()
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_24_10_NonSec>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_Standalone_24_10_NonSec>::GetImpl'::`2'::impl);
  return 1;
}
