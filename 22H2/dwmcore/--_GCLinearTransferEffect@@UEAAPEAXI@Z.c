/*
 * XREFs of ??_GCLinearTransferEffect@@UEAAPEAXI@Z @ 0x1801D2CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x18016B85C (--1CFilterEffect@@MEAA@XZ.c)
 */

CLinearTransferEffect *__fastcall CLinearTransferEffect::`scalar deleting destructor'(
        CLinearTransferEffect *this,
        char a2)
{
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xC8);
    else
      operator delete(this);
  }
  return this;
}
