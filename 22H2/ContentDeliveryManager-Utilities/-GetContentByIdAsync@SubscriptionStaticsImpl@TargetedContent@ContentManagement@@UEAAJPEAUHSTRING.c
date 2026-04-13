/*
 * XREFs of ?GetContentByIdAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@@Z @ 0x18007EF40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180048598 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@det.c)
 */

__int64 ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetContentByIdAsync()
{
  unsigned int v0; // r8d
  signed __int32 v2[6]; // [rsp+50h] [rbp-18h] BYREF
  int v3; // [rsp+88h] [rbp+20h] BYREF
  char v4; // [rsp+8Ch] [rbp+24h]

  v0 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl & 4) == 0 )
    v0 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentAPI>::GetCachedFeatureEnabledState(
                      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl,
                      v2);
  v3 = 0;
  v4 = 3;
  wil::details::ReportUsageToService(
    (volatile signed __int32 *)&unk_18019D1F8,
    0x7EA375u,
    (v0 >> 10) & 1,
    (v0 >> 11) & 1,
    (__int64)&v3,
    1u,
    3);
  return 2147500033LL;
}
