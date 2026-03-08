/*
 * XREFs of ?IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18029EEB0
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18029D6B0 (-CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPO.c)
 *     ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacySwapChain@@@Z @ 0x18029E67C (-Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall CConversionSwapChain::IsSupportedFakeOverlayColorSpace(unsigned int a1)
{
  unsigned __int8 result; // al
  int v2; // edx

  result = 0;
  if ( a1 <= 0xE )
  {
    v2 = 20483;
    return _bittest(&v2, a1);
  }
  return result;
}
