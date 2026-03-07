__int64 __fastcall CRoundedRectangleShape::EnsureD2DGeometry(CRoundedRectangleShape *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v8; // eax
  __int64 v9; // rcx
  struct ID2D1Geometry *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 2);
  if ( !*(_QWORD *)(v3 + 72) )
  {
    v10 = 0LL;
    if ( CRoundedRectangleGeometryData::HasIntersectingCorners((CRoundedRectangleGeometryData *)(v3 + 16)) )
    {
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v10);
      v8 = CRoundedRectangleShape::CreateIntersectedD2DGeometry(this, &v10);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xDCu, 0LL);
        goto LABEL_5;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v10);
      v4 = CRoundedRectangleShape::CreateNonIntersectedD2DGeometry(this, &v10);
      v2 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xE0u, 0LL);
        goto LABEL_5;
      }
    }
    v6 = -(__int64)(_InterlockedCompareExchange64(
                      (volatile signed __int64 *)(*((_QWORD *)this + 2) + 72LL),
                      (signed __int64)v10,
                      0LL) != 0);
    v10 = (struct ID2D1Geometry *)(v6 & (unsigned __int64)v10);
LABEL_5:
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v10);
  }
  return v2;
}
