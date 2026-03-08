/*
 * XREFs of ??0?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@QEAA@AEBVCDrawListPrimitive@@M_NAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180049CAC
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180049C3C (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180206548 (-TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXY.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonTransferParameters<Vertex_UVxN<VertexXYW_ColorDW>>::CCommonTransferParameters<Vertex_UVxN<VertexXYW_ColorDW>>(
        __int64 a1,
        __int64 a2,
        float a3,
        char a4,
        __int64 a5)
{
  int v5; // esi
  __int64 v6; // rax
  int v7; // edi
  __int64 v8; // r11
  __int64 v9; // r8
  int v10; // ebx
  int v11; // r10d

  v5 = *(_DWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 48);
  v7 = *(_DWORD *)(a2 + 12);
  v8 = *(_QWORD *)(a2 + 40);
  v9 = *(_QWORD *)(a2 + 32);
  v10 = 8 * v5 + 16;
  v11 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = v10;
  *(_DWORD *)(a1 + 32) = v10;
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 36) = v7;
  *(_DWORD *)(a1 + 40) = v5;
  *(float *)(a1 + 44) = a3;
  *(_QWORD *)(a1 + 8) = v9;
  *(_DWORD *)(a1 + 20) = v11;
  *(_QWORD *)(a1 + 24) = v8;
  *(_BYTE *)(a1 + 48) = a4;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)a5;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a5 + 12);
  return a1;
}
