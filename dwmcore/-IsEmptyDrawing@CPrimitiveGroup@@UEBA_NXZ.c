/*
 * XREFs of ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x1800F2590
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall CPrimitiveGroup::IsEmptyDrawing(CPrimitiveGroup *this)
{
  char v1; // dl

  if ( !*((_QWORD *)this + 62)
    || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)this + 27) )
  {
    return 1;
  }
  return v1;
}
