/*
 * XREFs of ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800118BC
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18000E7D0 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007598C (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1800C515C (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x1800C5170 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 */

void __fastcall CLayerVisual::GetUpdatedDropShadowBounds(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  CDropShadow *v3; // rcx
  __int128 *v4; // rdx
  CDropShadow *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  float v8[4]; // [rsp+20h] [rbp-20h]
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF

  *a3 = *a2;
  v3 = *(CDropShadow **)(a1 + 704);
  if ( v3 && !CDropShadow::GetMaskForLayerVisualNoRef(v3) )
  {
    v9 = *v4;
    CDropShadow::GetRadius(v5);
    *(_QWORD *)v8 = *(_QWORD *)(v6 + 96);
    if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v9) )
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v9);
      *((float *)&v9 + 1) = *((float *)&v9 + 1) + v8[1];
      *(float *)&v9 = *(float *)&v9 + v8[0];
      *((float *)&v9 + 2) = *((float *)&v9 + 2) + v8[0];
      *((float *)&v9 + 3) = *((float *)&v9 + 3) + v8[1];
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v7, &v9);
    }
  }
}
