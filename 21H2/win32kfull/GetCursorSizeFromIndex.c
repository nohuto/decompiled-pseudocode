/*
 * XREFs of GetCursorSizeFromIndex @ 0x1C009AAF8
 * Callers:
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0025DC8 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C009A8A4 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E4D60 (_ScaleSystemMetricForDPIWithoutCache.c)
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
