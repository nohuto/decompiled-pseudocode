/*
 * XREFs of ?GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800D2C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CPolygonShape::GetD2DGeometry(
        CPolygonShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  return CTransformedGeometryHelper::TransformGeometry(a2, *(struct ID2D1Geometry **)(*((_QWORD *)this + 2) + 16LL), a3);
}
