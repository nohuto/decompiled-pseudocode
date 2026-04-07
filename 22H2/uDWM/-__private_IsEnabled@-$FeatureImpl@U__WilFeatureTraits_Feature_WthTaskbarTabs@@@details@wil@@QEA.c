/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAA_NXZ @ 0x180056D4C
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001437C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180044708 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x1800454D8 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?IsLivePreview@@YA_NPEAVCWindowData@@@Z @ 0x180056FC0 (-IsLivePreview@@YA_NPEAVCWindowData@@@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180057000 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180083B0C (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005661C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056C00 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAAX_NW4Re.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
