/*
 * XREFs of ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801D01D8
 * Callers:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180007AF0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802B56B0 (-DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180008844 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180090D28 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800DB304 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::CalcLocalSpaceClippedBounds(__int64 a1, _OWORD *a2, float *a3)
{
  CMILMatrix *TopByReference; // rax
  char result; // al
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  *(_OWORD *)a3 = *a2;
  v11 = 0LL;
  CDrawingContext::GetClipBoundsWorld(a1, (float *)&v11);
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 400));
  result = CMILMatrix::Get2DBoundsUsing2DInverse(TopByReference, (float *)&v11);
  if ( result )
  {
    v7 = *a3;
    if ( *a3 < 0.0 )
    {
      *a3 = 0.0;
      v7 = 0.0;
    }
    v8 = a3[1];
    if ( v8 < 0.0 )
    {
      a3[1] = 0.0;
      v8 = 0.0;
    }
    v9 = a3[2];
    if ( v9 > 0.0 )
    {
      a3[2] = 0.0;
      v9 = 0.0;
    }
    v10 = a3[3];
    if ( v10 > 0.0 )
    {
      a3[3] = 0.0;
      v10 = 0.0;
    }
    if ( v9 <= v7 || v10 <= v8 )
    {
      *((_QWORD *)a3 + 1) = 0LL;
      *(_QWORD *)a3 = 0LL;
    }
  }
  return result;
}
