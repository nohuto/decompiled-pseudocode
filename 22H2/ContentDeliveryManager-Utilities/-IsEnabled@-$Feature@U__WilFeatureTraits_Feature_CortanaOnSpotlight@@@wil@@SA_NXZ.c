/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@wil@@SA_NXZ @ 0x180084510
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800847DC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@det.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::IsEnabled()
{
  unsigned int v0; // r8d
  int v2; // [rsp+50h] [rbp+8h] BYREF
  char v3; // [rsp+54h] [rbp+Ch]
  __int64 v4; // [rsp+58h] [rbp+10h]
  char v5; // [rsp+60h] [rbp+18h] BYREF

  v0 = `wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetCachedFeatureEnabledState(
                      &`wil::Feature<__WilFeatureTraits_Feature_CortanaOnSpotlight>::GetImpl'::`2'::impl,
                      &v5);
    v0 = v4;
  }
  v2 = 0;
  v3 = 3;
  wil::details::ReportUsageToService(
    (volatile signed __int32 *)&unk_18019D608,
    0xB02D78u,
    (v0 >> 10) & 1,
    (v0 >> 11) & 1,
    (__int64)&v2,
    1u,
    3);
  return 1;
}
