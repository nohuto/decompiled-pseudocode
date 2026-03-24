/*
 * XREFs of ?DumpVisualTree@CDebugTreeDumper@@SAJPEAVCVisualTree@@PEAVIDeviceTarget@@@Z @ 0x1800BF258
 * Callers:
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800BEFD8 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x18018C380 (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TreeDumping@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180197B00 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TreeDumping@@@details@wil@@QEAAX_NW4Repor.c)
 */

__int64 __fastcall CDebugTreeDumper::DumpVisualTree(struct CVisualTree *a1, struct IDeviceTarget *a2)
{
  if ( g_fDumpTreeOnNextFrame )
  {
    g_fDumpTreeOnNextFrame = 0;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TreeDumping>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TreeDumping>::GetImpl'::`2'::impl,
      0LL);
  }
  return 0LL;
}
