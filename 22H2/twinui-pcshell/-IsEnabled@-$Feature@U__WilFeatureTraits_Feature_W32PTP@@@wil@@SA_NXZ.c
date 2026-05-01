/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_W32PTP@@@wil@@SA_NXZ @ 0x1800C6F30
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W32PTP@@@details@wil@@QEAA_NXZ @ 0x1800C7158 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W32PTP@@@details@wil@@QEAA_NXZ.c)
 */

bool wil::Feature<__WilFeatureTraits_Feature_W32PTP>::IsEnabled()
{
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_W32PTP>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W32PTP>::GetImpl'::`2'::impl) != 0;
}
