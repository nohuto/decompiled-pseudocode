/*
 * XREFs of ?DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1802239F4
 * Callers:
 *     ?Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D8670 (-Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCD.c)
 * Callees:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000D094 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18000D468 (-DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV-$TMil.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::DrawLetterboxingMargins(
        CCompositionSurfaceBitmap *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // rcx
  _BYTE v9[64]; // [rsp+30h] [rbp-88h] BYREF
  int v10; // [rsp+70h] [rbp-48h]
  __int128 v11; // [rsp+80h] [rbp-38h] BYREF

  v4 = 0;
  v10 = 0;
  v11 = 0LL;
  CCompositionSurfaceBitmap::CalcImageTransform(this, a3, (CMILMatrix *)v9, &v11);
  if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v11) )
  {
    v6 = CCompositionSurfaceBitmap::DrawLetterboxingMarginsInternal(
           this,
           a2,
           (float *)&v11,
           (const struct CMILMatrix *)v9);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x2EEu, 0LL);
  }
  return v4;
}
