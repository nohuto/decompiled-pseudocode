/*
 * XREFs of ??_GCHolographicInteropTexture@@MEAAPEAXI@Z @ 0x180258800
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1802583F4 (--1CHolographicInteropTexture@@MEAA@XZ.c)
 */

CHolographicInteropTexture *__fastcall CHolographicInteropTexture::`scalar deleting destructor'(
        CHolographicInteropTexture *this,
        char a2)
{
  CHolographicInteropTexture::~CHolographicInteropTexture(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x1A0);
    else
      operator delete(this);
  }
  return this;
}
