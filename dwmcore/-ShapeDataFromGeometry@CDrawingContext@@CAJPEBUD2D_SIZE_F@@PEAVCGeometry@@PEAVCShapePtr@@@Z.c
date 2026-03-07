__int64 __fastcall CDrawingContext::ShapeDataFromGeometry(
        const struct D2D_SIZE_F *a1,
        struct CGeometry *this,
        struct CShapePtr *a3)
{
  unsigned int v6; // esi
  int ShapeData; // eax
  __int64 v8; // rcx
  int v9; // ebp
  int TightBounds; // eax
  __int64 v11; // rcx
  char v12; // di
  __int64 v13; // rbx
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  char v16; // [rsp+38h] [rbp-50h]
  __int128 v17; // [rsp+40h] [rbp-48h]

  v17 = 0LL;
  CShapePtr::Release(a3);
  v6 = 0;
  v15 = 0LL;
  v16 = 0;
  ShapeData = CGeometry::GetShapeData(this, a1, (struct CShapePtr *)&v15);
  v9 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ShapeData, 0x952u, 0LL);
  }
  else
  {
    TightBounds = CShapePtr::GetTightBounds(&v15);
    v9 = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, TightBounds, 0x953u, 0LL);
    }
    else
    {
      v12 = v16;
      v13 = v15;
      CShapePtr::Release(a3);
      *(_QWORD *)a3 = v13;
      *((_BYTE *)a3 + 8) = v12;
      v15 = 0LL;
      v16 = 0;
    }
  }
  if ( v9 != -2003304438 )
    v6 = v9;
  CShapePtr::Release((CShapePtr *)&v15);
  return v6;
}
