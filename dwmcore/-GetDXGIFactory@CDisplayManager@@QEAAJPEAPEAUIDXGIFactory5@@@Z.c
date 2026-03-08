/*
 * XREFs of ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800CE090
 * Callers:
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800CDDA8 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x1801B9848 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVICompositionSwapChain@@@Z @ 0x180289464 (-CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800733C4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800CE1BC (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 */

__int64 __fastcall CDisplayManager::GetDXGIFactory(CDisplayManager *this, struct IDXGIFactory5 **a2)
{
  int DXGIFactory; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  CDisplayManager *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  DXGIFactory = CDisplayManager::InternalGetDXGIFactory(this, a2);
  LODWORD(v6) = DXGIFactory;
  v4 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_180355808, 2u, DXGIFactory, 0x3Au, 0LL);
    TranslateDXGIorD3DErrorInContext(v4, 4, &v6);
    return (unsigned int)v6;
  }
  return v4;
}
