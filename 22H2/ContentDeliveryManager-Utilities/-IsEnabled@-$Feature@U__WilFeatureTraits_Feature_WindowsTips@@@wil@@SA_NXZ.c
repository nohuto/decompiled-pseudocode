/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_WindowsTips@@@wil@@SA_NXZ @ 0x180033D90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsTips@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180039F08 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowsTips@@@details@wi.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::IsEnabled()
{
  unsigned int v0; // r8d
  int v2; // [rsp+50h] [rbp+8h] BYREF
  char v3; // [rsp+54h] [rbp+Ch]
  __int64 v4; // [rsp+58h] [rbp+10h]
  char v5; // [rsp+60h] [rbp+18h] BYREF

  v0 = `wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowsTips>::GetCachedFeatureEnabledState(
                      &`wil::Feature<__WilFeatureTraits_Feature_WindowsTips>::GetImpl'::`2'::impl,
                      &v5);
    v0 = v4;
  }
  v2 = 3;
  v3 = 3;
  wil::details::ReportUsageToService(
    (volatile signed __int32 *)&unk_18019D150,
    0xAD46C0u,
    (v0 >> 10) & 1,
    (v0 >> 11) & 1,
    (__int64)&v2,
    1u,
    3);
  return 1;
}
