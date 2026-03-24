/*
 * XREFs of ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801D2238
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180004E48 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180058560 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18006AEEC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006C310 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1801BEF40 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 */

void __fastcall CLayerVisual::GetUpdatedDropShadowBounds(__int64 a1, _OWORD *a2, float *a3)
{
  CDropShadow *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  float v9[4]; // [rsp+20h] [rbp-20h]
  __int128 v10; // [rsp+30h] [rbp-10h] BYREF

  *(_OWORD *)a3 = *a2;
  v6 = *(CDropShadow **)(a1 + 616);
  if ( v6 && !CDropShadow::GetMaskForLayerVisualNoRef(v6) )
  {
    v7 = *(_QWORD *)(a1 + 616);
    v10 = *a2;
    *(_QWORD *)v9 = *(_QWORD *)(v7 + 104);
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v10) )
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(
        (float *)&v10,
        *(float *)(v8 + 96),
        *(float *)(v8 + 96));
      *((float *)&v10 + 1) = *((float *)&v10 + 1) + v9[1];
      *(float *)&v10 = *(float *)&v10 + v9[0];
      *((float *)&v10 + 2) = *((float *)&v10 + 2) + v9[0];
      *((float *)&v10 + 3) = *((float *)&v10 + 3) + v9[1];
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, (float *)&v10);
    }
  }
}
