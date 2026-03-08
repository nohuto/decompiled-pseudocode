/*
 * XREFs of ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008304
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180007F00 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800082AC (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 * Callees:
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180008350 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18001BF44 (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004C70C (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithLayerEffect(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rsi
  int Bounds; // ebx
  __int64 v6; // rcx
  __int64 *v7; // r9
  __int64 v8; // rcx
  float v9; // [rsp+40h] [rbp+8h] BYREF
  float v10; // [rsp+44h] [rbp+Ch]
  float v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = (_OWORD *)(a1 + 172);
  Bounds = 0;
  *a2 = *(_OWORD *)(a1 + 172);
  if ( *(_QWORD *)(a1 + 712) && (CVisual::GetEffectiveSize((CVisual *)a1, &v9, &v11) || *(_BYTE *)(v6 + 728)) )
  {
    v10 = v11;
    v8 = *v7;
    if ( *v7 )
      Bounds = CEffectBrush::GetBounds(v8, v2, &v9, a2);
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, Bounds, 0x1C7u, 0LL);
    }
    else if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a2) )
    {
      *a2 = *v2;
    }
  }
  return (unsigned int)Bounds;
}
