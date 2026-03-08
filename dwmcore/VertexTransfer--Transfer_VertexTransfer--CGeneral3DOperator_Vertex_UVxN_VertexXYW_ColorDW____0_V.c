/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180203814
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x1800712A0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV-$CCommonTransferParameters@U-.c)
 * Callees:
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x1802056F0 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU-.c)
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x18026C95C (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        CMILMatrix *a2)
{
  __int64 v4; // rax
  unsigned int v5; // r15d
  unsigned int v6; // ebp
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  _OWORD v13[4]; // [rsp+30h] [rbp-B8h] BYREF
  int i; // [rsp+70h] [rbp-78h]
  __int64 v15; // [rsp+80h] [rbp-68h] BYREF

  v4 = CMILMatrix::ComputeAdjointIgnoreZ(&v15);
  v5 = *(_DWORD *)(a1 + 20);
  v6 = 0;
  v7 = *(_OWORD *)(v4 + 16);
  v13[0] = *(_OWORD *)v4;
  v13[1] = v7;
  v8 = *(_OWORD *)(v4 + 32);
  v9 = *(_OWORD *)(v4 + 48);
  result = *(unsigned int *)(v4 + 64);
  v13[2] = v8;
  v13[3] = v9;
  for ( i = result; v6 < v5; *(_DWORD *)(v12 + 12) = result )
  {
    v11 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v6);
    v12 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v6);
    VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform((CMILMatrix *)v13, a2, v12);
    result = *(unsigned int *)(v11 + 12);
    ++v6;
  }
  return result;
}
