/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_RemoveUserQueryParam@@@details@wil@@QEAA_NXZ @ 0x1801167F4
 * Callers:
 *     ?GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV23@@Z @ 0x180109D34 (-GetEnablementCheckURL@ShellFeedsAvailabilityHelpers@@YAJAEBV-$basic_string@GU-$char_traits@G@st.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_RemoveUserQueryParam@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180109708 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_RemoveUs.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_RemoveUserQueryParam@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180116408 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_Feeds_RemoveUserQueryParam@@@de.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds_RemoveUserQueryParam>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds_RemoveUserQueryParam>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_Feeds_RemoveUserQueryParam>::ReportUsage(
    a1,
    v5 & 1,
    v3);
  return v2;
}
