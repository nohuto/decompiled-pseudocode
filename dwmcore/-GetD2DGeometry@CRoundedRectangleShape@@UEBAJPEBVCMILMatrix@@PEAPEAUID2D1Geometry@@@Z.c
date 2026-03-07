__int64 __fastcall CRoundedRectangleShape::GetD2DGeometry(
        CRoundedRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx

  v6 = CRoundedRectangleShape::EnsureD2DGeometry(this);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xCBu, 0LL);
  }
  else
  {
    v9 = CTransformedGeometryHelper::TransformGeometry(a2, *(struct ID2D1Geometry **)(*((_QWORD *)this + 2) + 72LL), a3);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xCCu, 0LL);
  }
  return v8;
}
