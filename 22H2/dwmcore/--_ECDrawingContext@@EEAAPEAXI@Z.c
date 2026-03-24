/*
 * XREFs of ??_ECDrawingContext@@EEAAPEAXI@Z @ 0x18003E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x18003E1F4 (--1CDrawingContext@@EEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CDrawingContext *__fastcall CDrawingContext::`vector deleting destructor'(CDrawingContext *this, char a2)
{
  unsigned int v4; // r8d

  CDrawingContext::~CDrawingContext(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x1750, v4);
    else
      operator delete(this);
  }
  return this;
}
