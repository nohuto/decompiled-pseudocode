/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180017A50
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180018454 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800181A4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DmaSsoMSACompliance@@@de.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DmaSsoMSACompliance>::__private_IsEnabled(
        _DWORD *a1)
{
  char v2; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DmaSsoMSACompliance>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  if ( (*a1 & 4) == 0 )
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DmaSsoMSACompliance>::GetCachedFeatureEnabledState(a1, &v5);
  return v2;
}
