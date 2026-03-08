/*
 * XREFs of ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18010E2B0
 * Callers:
 *     _dynamic_initializer_for__CPreComputeContext::s_projectedShadowsEnabled__ @ 0x180001360 (_dynamic_initializer_for__CPreComputeContext--s_projectedShadowsEnabled__.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180039260 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAAX_NW4R.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::__private_IsEnabledPreCheck(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::ReportUsage(a1, 1u, 0, a4);
  return 1;
}
