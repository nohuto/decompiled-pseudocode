/*
 * XREFs of ??_GCRenderData@@MEAAPEAXI@Z @ 0x180036E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderData@@MEAA@XZ @ 0x1800370DC (--1CRenderData@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CRenderData *__fastcall CRenderData::`scalar deleting destructor'(CRenderData *this, char a2)
{
  unsigned int v4; // r8d

  CRenderData::~CRenderData(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x138, v4);
    else
      operator delete(this);
  }
  return this;
}
