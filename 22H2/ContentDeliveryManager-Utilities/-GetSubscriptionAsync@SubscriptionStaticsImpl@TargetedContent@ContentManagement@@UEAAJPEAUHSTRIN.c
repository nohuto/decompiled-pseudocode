/*
 * XREFs of ?GetSubscriptionAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@78@@Z @ 0x18007EEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180048598 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@det.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetSubscriptionAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned int v4; // r8d
  signed __int32 v6[6]; // [rsp+50h] [rbp-18h] BYREF
  int v7; // [rsp+88h] [rbp+20h] BYREF
  char v8; // [rsp+8Ch] [rbp+24h]

  *a4 = 0LL;
  v4 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl & 4) == 0 )
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentAPI>::GetCachedFeatureEnabledState(
                      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl,
                      v6);
  v7 = 0;
  v8 = 3;
  wil::details::ReportUsageToService(
    (volatile signed __int32 *)&unk_18019D1F8,
    0x7EA375u,
    (v4 >> 10) & 1,
    (v4 >> 11) & 1,
    (__int64)&v7,
    1u,
    3);
  return 2147500033LL;
}
