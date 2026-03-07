__int64 __fastcall CGeometry::GetBoundsSafe(CGeometry *a1, const struct D2D_SIZE_F *a2, _OWORD *a3)
{
  int ShapeData; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int TightBounds; // eax
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]

  v10 = 0LL;
  v11 = 0;
  ShapeData = CGeometry::GetShapeData(a1, a2, (struct CShapePtr *)&v10);
  v6 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, ShapeData, 0x62u, 0LL);
  }
  else
  {
    TightBounds = CShapePtr::GetTightBounds(&v10);
    v6 = TightBounds;
    if ( TightBounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, TightBounds, 0x63u, 0LL);
  }
  if ( v6 == -2003304438 )
  {
    v6 = 0;
    *a3 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  CShapePtr::Release((CShapePtr *)&v10);
  return v6;
}
