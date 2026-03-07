char __fastcall CGeometry::TryGetAxisAlignedRectangle(CGeometry *a1, const struct D2D_SIZE_F *a2, _DWORD *a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  a3[3] = 0;
  a3[2] = 0;
  a3[1] = 0;
  *a3 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( (int)CGeometry::GetShapeData(a1, a2, (struct CShapePtr *)&v5) >= 0
    && CShapePtr::IsAxisAlignedRectangle((CShapePtr *)&v5)
    && (int)CShapePtr::GetTightBounds(&v5, a3, 0LL) >= 0 )
  {
    CShapePtr::Release((CShapePtr *)&v5);
    return 1;
  }
  else
  {
    CShapePtr::Release((CShapePtr *)&v5);
    return 0;
  }
}
