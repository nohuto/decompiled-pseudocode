/*
 * XREFs of DriverUnload @ 0x1C002CF70
 * Callers:
 *     <none>
 * Callees:
 *     wil_UninitializeFeatureStaging @ 0x1C0085008 (wil_UninitializeFeatureStaging.c)
 *     ?DxgMmsDeInitDebug@@YAXXZ @ 0x1C00DFFD0 (-DxgMmsDeInitDebug@@YAXXZ.c)
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C00E12CC (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
 */

__int64 DriverUnload()
{
  DxgMmsDeInitDebug();
  VIDMM_GLOBAL::DeInitGlobals();
  return wil_UninitializeFeatureStaging();
}
