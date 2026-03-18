/*
 * XREFs of DriverUnload @ 0x1C002CE40
 * Callers:
 *     <none>
 * Callees:
 *     wil_UninitializeFeatureStaging @ 0x1C0085008 (wil_UninitializeFeatureStaging.c)
 *     ?DxgMmsDeInitDebug@@YAXXZ @ 0x1C00DFCB4 (-DxgMmsDeInitDebug@@YAXXZ.c)
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C00E0FB0 (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
 */

__int64 DriverUnload()
{
  DxgMmsDeInitDebug();
  VIDMM_GLOBAL::DeInitGlobals();
  return wil_UninitializeFeatureStaging();
}
