__int64 __fastcall CWindowNode::GetGeometryBounds(__int64 a1, CGeometry *a2)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v3 = 0LL;
  v4 = 0;
  CGeometry::GetShapeData(a2, (const struct D2D_SIZE_F *)(a1 + 140), (struct CShapePtr *)&v3);
  CShapePtr::GetTightBounds(&v3);
  CShapePtr::Release((CShapePtr *)&v3);
  return 0LL;
}
