/*
 * XREFs of ??1CMatrixTransform@@MEAA@XZ @ 0x1800C82C4
 * Callers:
 *     ??_ECMatrixTransform@@MEAAPEAXI@Z @ 0x1800C8280 (--_ECMatrixTransform@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

void __fastcall CMatrixTransform::~CMatrixTransform(
        CMatrixTransform *this,
        const struct D2D1_BEZIER_SEGMENT *a2,
        unsigned int a3)
{
  *(_QWORD *)this = &CMatrixTransform::`vftable';
  CDrawListPolygonBuilder::AddBeziers(this, a2, a3);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
