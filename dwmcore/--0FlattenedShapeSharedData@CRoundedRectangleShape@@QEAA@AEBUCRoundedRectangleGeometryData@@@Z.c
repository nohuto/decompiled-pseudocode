/*
 * XREFs of ??0FlattenedShapeSharedData@CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1801AF6D4
 * Callers:
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180061AC0 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18007F1B0 (--0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 */

CRoundedRectangleShape::FlattenedShapeSharedData *__fastcall CRoundedRectangleShape::FlattenedShapeSharedData::FlattenedShapeSharedData(
        CRoundedRectangleShape::FlattenedShapeSharedData *this,
        const struct CRoundedRectangleGeometryData *a2)
{
  CRoundedRectangleShape::SharedData::SharedData(this, a2);
  *(_QWORD *)this = &CRoundedRectangleShape::FlattenedShapeSharedData::`vftable';
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  return this;
}
