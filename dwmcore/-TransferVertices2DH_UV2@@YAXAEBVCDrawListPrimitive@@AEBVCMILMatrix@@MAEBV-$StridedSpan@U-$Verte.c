/*
 * XREFs of ?TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180206584
 * Callers:
 *     ?EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1802B4F40 (-EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCo.c)
 * Callees:
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x180205378 (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z @ 0x18026DC28 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z.c)
 */

_QWORD *__fastcall TransferVertices2DH_UV2(__int64 a1, CMILMatrix *a2, float a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned int v5; // edi
  _QWORD *result; // rax
  int i; // r12d
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rcx

  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0;
  result = (_QWORD *)*(unsigned int *)(a1 + 16);
  for ( i = 8 * (_DWORD)result + 16; v5 < *(_DWORD *)(a1 + 8); ++v5 )
  {
    v11 = v4 + (int)(v5 * i);
    v12 = *(_QWORD *)a4 + (int)(*(_DWORD *)(a4 + 8) * v5);
    CMILMatrix::Transform(a2, (const struct D2D_POINT_2F *)v11, (struct HomogeneousPoint2D *)v12, a4);
    *(_DWORD *)(v12 + 12) = BlendPremultipliedColorDW(*(_DWORD *)(v11 + 12), a3);
    v13 = v11 - v12;
    result = (_QWORD *)(v12 + 16);
    v14 = 2LL;
    do
    {
      *result = *(_QWORD *)((char *)result + v13);
      ++result;
      --v14;
    }
    while ( v14 );
  }
  return result;
}
