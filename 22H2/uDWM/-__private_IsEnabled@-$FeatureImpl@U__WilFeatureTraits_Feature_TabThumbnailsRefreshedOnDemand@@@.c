/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAA_NXZ @ 0x1800570FC
 * Callers:
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18004560C (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180056DBC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOn.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180057068 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
