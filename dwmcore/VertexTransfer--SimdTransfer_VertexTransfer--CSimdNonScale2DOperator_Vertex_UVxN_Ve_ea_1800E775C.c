/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800E775C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x1800712A0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV-$CCommonTransferParameters@U-.c)
 * Callees:
 *     ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@T__m128@@1IPEAU3@@Z @ 0x1800E7900 (-Transform@-$CSimdNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQX.c)
 */

_UNKNOWN **__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned __int64 *a2,
        int a3)
{
  _UNKNOWN **result; // rax
  unsigned int v4; // ebp
  unsigned int v5; // esi
  __m128 v7; // xmm3
  unsigned int v8; // r14d
  unsigned int v9; // esi
  __int64 v10; // rbx
  int v11; // r10d
  int v12; // r11d
  int v13; // r8d
  __int64 v14; // r9
  __m128 v15[3]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 40);
  v7 = (__m128)a2[2];
  v8 = *(_DWORD *)(a1 + 20);
  v15[0] = (__m128)*a2;
  v9 = v5 >> 1;
  v15[2] = _mm_movelh_ps((__m128)a2[6], (__m128)_xmm);
  v15[1] = v7;
  if ( v8 )
  {
    do
    {
      v10 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v4 + 1));
      VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        (unsigned int)v15,
        *(_DWORD *)(a1 + 8) + v4 * *(_DWORD *)(a1 + 16),
        a3,
        *(_QWORD *)(a1 + 56),
        v9,
        *(_QWORD *)(a1 + 56) + (int)(v4 * *(_DWORD *)(a1 + 64)));
      result = (_UNKNOWN **)VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
                              (unsigned int)v15,
                              v10,
                              v13,
                              v14,
                              v9,
                              v14 + v12 * v11);
      v4 += 2;
    }
    while ( v4 < v8 );
  }
  return result;
}
