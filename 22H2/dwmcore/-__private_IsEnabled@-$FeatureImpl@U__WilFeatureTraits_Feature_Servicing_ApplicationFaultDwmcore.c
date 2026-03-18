/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorldTransform@@@details@wil@@QEAA_NXZ @ 0x180118A24
 * Callers:
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800B3790 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1802140D8 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorldTransform@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801187D0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ApplicationFau.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorldTransform@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801189A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorld.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorldTransform>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorldTransform>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorldTransform>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
