__int64 __fastcall CComplexShape::GetD2DGeometry(
        struct ID2D1Geometry **this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v3 = CTransformedGeometryHelper::TransformGeometry(a2, this[2], a3);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x15u, 0LL);
  return v5;
}
