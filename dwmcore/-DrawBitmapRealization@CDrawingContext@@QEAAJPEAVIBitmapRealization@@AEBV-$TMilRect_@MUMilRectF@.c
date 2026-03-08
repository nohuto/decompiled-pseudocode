/*
 * XREFs of ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x18000EF44
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000EC20 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 *     ?RenderMask@CTreeEffectLayer@@AEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x18000EE54 (-RenderMask@CTreeEffectLayer@@AEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D1564 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x1801EFFD0 (-RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CColorSpaceLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F0360 (-RenderLayer@CColorSpaceLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F1670 (-RenderLayer@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x18000EFB4 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_18000EFB4.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800B52D4 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        int a7)
{
  struct MilRectF *v7; // rdx
  struct IBitmapRealization *v8; // r10
  CDrawingContext *v9; // r11
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-48h]
  _BYTE v14[40]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  MILMatrix3x2::InferAffineMatrix(v14, a4);
  v10 = CDrawingContext::DrawBitmapRealization(v9, v8, v7, (struct MILMatrix3x2 *)v14, a5, a6, a7);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8DF,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
    (const char *)(unsigned int)v10,
    v13);
  return v11;
}
