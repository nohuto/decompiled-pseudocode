/*
 * XREFs of GetCursorSizeFromIndex @ 0x1C003AB10
 * Callers:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C001D944 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C003BA40 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0060888 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C07C0 (_ScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCursorSizeFromIndex(int a1)
{
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return 32LL;
  v2 = a1 - 1;
  if ( !v2 )
    return 48LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 64LL;
  if ( v3 == 1 )
    return 96LL;
  return 128LL;
}
