/*
 * XREFs of ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801E7348
 * Callers:
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1801E6860 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1801E9CA4 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801EC0A4 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 *     ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CREATE@@@Z @ 0x1801ED2BC (-ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTAR.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x1801ED64C (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTAR.c)
 * Callees:
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800A875C (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800A8DE4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::UpdatePixelFormatInfo(COffScreenRenderTarget *this, int a2)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // edx
  __int64 v8; // r8

  if ( IsValidPixelFormat(a2) )
  {
    *(_DWORD *)(v4 + 112) = v2;
    v6 = HasAlphaChannel(v2);
    *(_DWORD *)(v8 + 116) = v6 != 0 ? 1 : 3;
    v5 = 0;
    *(_DWORD *)(v8 + 120) = v7 == 10;
  }
  else
  {
    v5 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003292288, 0x9Eu, 0LL);
  }
  return v5;
}
