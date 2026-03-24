/*
 * XREFs of ??_GCCompositionMipmapSurface@@UEAAPEAXI@Z @ 0x1801B9FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x1801B9F30 (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 */

CCompositionMipmapSurface *__fastcall CCompositionMipmapSurface::`scalar deleting destructor'(
        CCompositionMipmapSurface *this,
        char a2)
{
  CCompositionMipmapSurface::~CCompositionMipmapSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xA8);
    else
      operator delete(this);
  }
  return this;
}
