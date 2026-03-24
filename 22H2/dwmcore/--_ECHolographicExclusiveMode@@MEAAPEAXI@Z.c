/*
 * XREFs of ??_ECHolographicExclusiveMode@@MEAAPEAXI@Z @ 0x180256680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CHolographicExclusiveMode@@MEAA@XZ @ 0x180256630 (--1CHolographicExclusiveMode@@MEAA@XZ.c)
 */

CHolographicExclusiveMode *__fastcall CHolographicExclusiveMode::`vector deleting destructor'(
        CHolographicExclusiveMode *this,
        char a2)
{
  CHolographicExclusiveMode::~CHolographicExclusiveMode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x60);
    else
      operator delete(this);
  }
  return this;
}
