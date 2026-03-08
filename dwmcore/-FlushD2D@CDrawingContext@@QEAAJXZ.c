/*
 * XREFs of ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18001A0FC
 * Callers:
 *     ?PostRestoreState@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18001A0B0 (-PostRestoreState@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PostRestoreState@CColorSpaceLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F0310 (-PostRestoreState@CColorSpaceLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801F1810 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x1801F19F0 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAn.c)
 *     ?RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F2A40 (-RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x18001A140 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawingContext::FlushD2D(CDrawingContext *this)
{
  int v1; // eax
  unsigned int v2; // ecx
  unsigned int v3; // ebx

  v1 = CD2DContext::FlushD2D(
         (CD2DContext *)(*((_QWORD *)this + 5) + 16LL),
         (const struct ID2DContextOwner *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)));
  v3 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v1, 0xA5Du, 0LL);
  return v3;
}
