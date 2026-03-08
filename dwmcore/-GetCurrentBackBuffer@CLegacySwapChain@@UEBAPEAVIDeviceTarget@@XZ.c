/*
 * XREFs of ?GetCurrentBackBuffer@CLegacySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x1800E8B80
 * Callers:
 *     ?GetCurrentBackBuffer@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAPEAVIDeviceTarget@@XZ @ 0x18011B670 (-GetCurrentBackBuffer@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAPEAVIDeviceTarget@@XZ.c)
 *     ?GetCurrentBackBuffer@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAPEAVIDeviceTarget@@XZ @ 0x18011C6F0 (-GetCurrentBackBuffer@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAPEAVIDeviceTarget@@XZ.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E5694 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CLegacySwapChain::GetCurrentBackBuffer(CLegacySwapChain *this)
{
  __int64 v1; // rdx
  struct IDeviceTarget *result; // rax

  v1 = *((_QWORD *)this + 16);
  result = 0LL;
  if ( v1 )
    return (struct IDeviceTarget *)(*(int *)(*(_QWORD *)(v1 + 8) + 24LL) + v1 + 8);
  return result;
}
