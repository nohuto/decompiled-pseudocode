__int64 dynamic_initializer_for__CPreComputeContext::s_projectedShadowsEnabled__()
{
  __int64 result; // rax

  result = wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::GetImpl'::`2'::impl);
  CPreComputeContext::s_projectedShadowsEnabled = CCommonRegistryData::DisableProjectedShadows == 0;
  return result;
}
