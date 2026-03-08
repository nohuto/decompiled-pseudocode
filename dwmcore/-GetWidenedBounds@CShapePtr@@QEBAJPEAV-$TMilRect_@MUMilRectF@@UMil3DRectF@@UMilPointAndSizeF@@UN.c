/*
 * XREFs of ?GetWidenedBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D8FB0
 * Callers:
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1800D8EBC (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D8FE4 (-GetWidenedBounds@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 */

__int64 __fastcall CShapePtr::GetWidenedBounds(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int WidenedBounds; // eax
  __int64 v7; // rcx

  v4 = *a1;
  v5 = -2003292412;
  if ( v4 )
  {
    WidenedBounds = CShape::GetWidenedBounds(v4, a2, a3, a4);
    v5 = WidenedBounds;
    if ( WidenedBounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, WidenedBounds, 0x150u, 0LL);
  }
  return v5;
}
