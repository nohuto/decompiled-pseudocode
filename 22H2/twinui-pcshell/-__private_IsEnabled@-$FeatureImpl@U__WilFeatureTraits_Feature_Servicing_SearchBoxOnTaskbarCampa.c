/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxOnTaskbarCampaign@@@details@wil@@QEAA_NXZ @ 0x1800C0D08
 * Callers:
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180073944 (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxOnTaskbarCampaign@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BF7A4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxOnTas.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxOnTaskbarCampaign@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C04E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxOnTaskbarCampaign@@@de.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxOnTaskbarCampaign>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxOnTaskbarCampaign>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxOnTaskbarCampaign>::ReportUsage(
    a1,
    v5 & 1,
    v3);
  return v2;
}
