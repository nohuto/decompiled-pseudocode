char __fastcall CConvexPolygonEdgeMap<unsigned int>::TryAddEdgeFromEndPoints(
        __int64 *a1,
        struct D2D_POINT_2F *a2,
        FLOAT *a3,
        int *a4,
        float a5)
{
  FLOAT v6; // xmm1_4
  FLOAT x; // xmm0_4
  FLOAT y; // xmm1_4
  const struct D2D_POINT_2F *v11; // r8
  struct D2D_VECTOR_2F v13; // [rsp+48h] [rbp+10h] BYREF
  FLOAT v14; // [rsp+50h] [rbp+18h] BYREF
  FLOAT v15; // [rsp+54h] [rbp+1Ch]

  v6 = a3[1];
  v13.x = *a3;
  x = a2->x;
  v13.y = v6;
  y = a2->y;
  v14 = x;
  v15 = y;
  if ( IsClosePointF((const struct MilPoint2F *)&v14, (const struct MilPoint2F *)&v13, 0.0000011920929) )
    return 0;
  v13 = CalcDirectionVector(a2, v11);
  return CConvexPolygonEdgeMap<unsigned int>::TryAddEdge(a1, (__int64)&v13, (float *)a2, a4, a5);
}
