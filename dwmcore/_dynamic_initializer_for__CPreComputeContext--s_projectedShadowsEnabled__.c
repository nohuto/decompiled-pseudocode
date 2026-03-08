/*
 * XREFs of _dynamic_initializer_for__CPreComputeContext::s_projectedShadowsEnabled__ @ 0x180001360
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18010E2B0 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details.c)
 */

__int64 dynamic_initializer_for__CPreComputeContext::s_projectedShadowsEnabled__()
{
  __int64 result; // rax

  result = wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::GetImpl'::`2'::impl);
  CPreComputeContext::s_projectedShadowsEnabled = CCommonRegistryData::DisableProjectedShadows == 0;
  return result;
}
