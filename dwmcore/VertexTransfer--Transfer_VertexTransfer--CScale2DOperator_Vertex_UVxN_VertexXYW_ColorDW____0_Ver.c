/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1802042A4
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x1800712A0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV-$CCommonTransferParameters@U-.c)
 * Callees:
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x18001AC84 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        float *a2)
{
  unsigned int v2; // r14d
  unsigned int i; // ebp
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 result; // rax
  float v9; // [rsp+68h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 20);
  for ( i = 0; i < v2; *(_DWORD *)(v7 + 12) = result )
  {
    v6 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * i);
    v7 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * i);
    Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
      (float *)v6,
      (float *)(*(_QWORD *)(a1 + 24) + (int)(*(_DWORD *)(a1 + 32) * i++)),
      *(_DWORD *)(a1 + 40),
      a2,
      (float *)v7,
      &v9);
    *(_DWORD *)(v7 + 8) = 1065353216;
    result = *(unsigned int *)(v6 + 12);
  }
  return result;
}
