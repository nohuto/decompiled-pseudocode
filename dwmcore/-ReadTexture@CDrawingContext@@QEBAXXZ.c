/*
 * XREFs of ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x1801E48FC
 * Callers:
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180021F1C (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801E5AE4 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801EDD64 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x1801F19F0 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAn.c)
 *     ?RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F2A40 (-RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::ReadTexture(CDrawingContext *this)
{
  __int64 v1; // r9

  v1 = *((_QWORD *)this + 4) + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(v1 + 8) + 24LL))(
    v1 + 8,
    ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
}
