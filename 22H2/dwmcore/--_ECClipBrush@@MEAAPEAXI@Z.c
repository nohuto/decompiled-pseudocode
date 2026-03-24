/*
 * XREFs of ??_ECClipBrush@@MEAAPEAXI@Z @ 0x1801B76B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x1801B762C (--1CClipBrush@@MEAA@XZ.c)
 */

CClipBrush *__fastcall CClipBrush::`vector deleting destructor'(CClipBrush *this, char a2)
{
  CClipBrush::~CClipBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x90);
    else
      operator delete(this);
  }
  return this;
}
