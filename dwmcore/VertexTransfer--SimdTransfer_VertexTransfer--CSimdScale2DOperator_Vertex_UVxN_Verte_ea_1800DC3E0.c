/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800DC3E0
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x1800712A0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV-$CCommonTransferParameters@U-.c)
 * Callees:
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU3@@Z @ 0x1800DC580 (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEB.c)
 */

_UNKNOWN **__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        int a4)
{
  _UNKNOWN **result; // rax
  unsigned int v5; // r13d
  unsigned int v6; // r15d
  __m128 v8; // xmm2
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // rbp
  int v14; // r11d
  int v15; // r10d
  int v16; // r9d
  int v17; // [rsp+20h] [rbp-88h]
  int v18; // [rsp+20h] [rbp-88h]
  __m128 v19[3]; // [rsp+40h] [rbp-68h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 40);
  v8 = (__m128)a2[6];
  v9 = *(_DWORD *)(a1 + 20);
  v19[0] = _mm_movelh_ps((__m128)*a2, (__m128)*a2);
  v10 = v6 >> 1;
  v19[1] = _mm_movelh_ps((__m128)a2[2], (__m128)a2[2]);
  v19[2] = v8;
  if ( v9 )
  {
    do
    {
      v11 = *(_DWORD *)(a1 + 64);
      v12 = *(_QWORD *)(a1 + 56);
      v13 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v5 + 1));
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        (unsigned int)v19,
        *(_DWORD *)(a1 + 8) + v5 * *(_DWORD *)(a1 + 16),
        *(_QWORD *)(a1 + 24) + v5 * *(_DWORD *)(a1 + 32),
        a4,
        v17,
        v10,
        v12 + (int)(v5 * v11));
      result = (_UNKNOWN **)VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
                              (unsigned int)v19,
                              v13,
                              v15 + (v5 + 1) * v14,
                              v16,
                              v18,
                              v10,
                              v12 + (int)((v5 + 1) * v11));
      v5 += 2;
    }
    while ( v5 < v9 );
  }
  return result;
}
