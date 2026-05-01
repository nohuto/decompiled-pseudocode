/*
 * XREFs of ?IsEnabled@?$RequiredFeatures@V?$Feature@U__WilFeatureTraits_Feature_Servicing_54865933@@@wil@@@details@wil@@SA_NXZ @ 0x1800A7BA8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800A56F4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56277908@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800A57A8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56277908@@@details@wil@.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_54865933@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800AB870 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_54865933@@@details@wil@.c)
 */

bool wil::details::RequiredFeatures<wil::Feature<__WilFeatureTraits_Feature_Servicing_54865933>>::IsEnabled()
{
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_54865933>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_54865933>::GetImpl'::`2'::impl) != 0;
}
