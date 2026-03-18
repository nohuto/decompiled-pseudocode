/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon_Ni@@@details@wil@@QEAA_NXZ @ 0x18011941C
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1801DB8A4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon_Ni@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180118A60 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMo.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon_Ni@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119224 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon_Ni@@@details@wi.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon_Ni>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon_Ni>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_NoAdvancedDFlipOnMultiMon_Ni>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
