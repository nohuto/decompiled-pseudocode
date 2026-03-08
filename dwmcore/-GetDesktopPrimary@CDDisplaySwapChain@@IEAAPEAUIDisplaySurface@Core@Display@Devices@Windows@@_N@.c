/*
 * XREFs of ?GetDesktopPrimary@CDDisplaySwapChain@@IEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@_N@Z @ 0x180286BE8
 * Callers:
 *     ?CreateScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180285F34 (-CreateScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4ScanoutScale.c)
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180286728 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPE.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1802868DC (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4S.c)
 *     ?Present@CDDisplaySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180287FC0 (-Present@CDDisplaySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@.c)
 * Callees:
 *     <none>
 */

struct Windows::Devices::Display::Core::IDisplaySurface *__fastcall CDDisplaySwapChain::GetDesktopPrimary(
        CDDisplaySwapChain *this,
        char a2)
{
  __int64 v3; // rcx

  if ( a2 )
    v3 = *((unsigned int *)this + 107);
  else
    v3 = *((unsigned int *)this + 106);
  return *(struct Windows::Devices::Display::Core::IDisplaySurface **)(32 * v3 + *((_QWORD *)this + 50));
}
