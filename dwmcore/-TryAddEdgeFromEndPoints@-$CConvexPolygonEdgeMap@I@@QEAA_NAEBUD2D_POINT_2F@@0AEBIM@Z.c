/*
 * XREFs of ?TryAddEdgeFromEndPoints@?$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_POINT_2F@@0AEBIM@Z @ 0x1801FDF84
 * Callers:
 *     ?AddEdgeFlags@CPolygonMapStrategy@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x1801FC384 (-AddEdgeFlags@CPolygonMapStrategy@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMat.c)
 * Callees:
 *     ?IsClosePointF@@YA_NAEBUMilPoint2F@@0M@Z @ 0x1801AF7A0 (-IsClosePointF@@YA_NAEBUMilPoint2F@@0M@Z.c)
 *     ?CalcDirectionVector@@YA?AUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@0@Z @ 0x1801FDBA0 (-CalcDirectionVector@@YA-AUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@0@Z.c)
 *     ?TryAddEdge@?$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBIM@Z @ 0x1801FDE94 (-TryAddEdge@-$CConvexPolygonEdgeMap@I@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBIM@Z.c)
 */

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
