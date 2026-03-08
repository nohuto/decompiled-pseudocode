/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180202EA0
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x1800712A0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV-$CCommonTransferParameters@U-.c)
 * Callees:
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU3@@Z @ 0x1800DC580 (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEB.c)
 */

__m128 *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        unsigned __int64 *a2)
{
  __m128 *result; // rax
  unsigned int v3; // r13d
  unsigned int v4; // r15d
  __m128 v6; // xmm2
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  int v9; // edi
  __int64 v10; // rbx
  __m128 *v11; // rdx
  __m128 *v12; // rbp
  int v13; // r11d
  __int64 v14; // r10
  int v15; // [rsp+20h] [rbp-88h]
  int v16; // [rsp+20h] [rbp-88h]
  __m128 v17[3]; // [rsp+40h] [rbp-68h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  result = (__m128 *)&retaddr;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 40);
  v6 = (__m128)a2[6];
  v7 = *(_DWORD *)(a1 + 20);
  v17[0] = _mm_movelh_ps((__m128)*a2, (__m128)*a2);
  v8 = v4 >> 1;
  v17[1] = _mm_movelh_ps((__m128)a2[2], (__m128)a2[2]);
  v17[2] = v6;
  if ( v7 )
  {
    do
    {
      v9 = *(_DWORD *)(a1 + 64);
      v10 = *(_QWORD *)(a1 + 56);
      v11 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(v3 * *(_DWORD *)(a1 + 16)));
      v12 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v3 + 1)));
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        v17,
        v11,
        (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(v3 * *(_DWORD *)(a1 + 32))),
        *(double *)v11->m128_u64,
        v15,
        v8,
        (__m128 *)(v10 + (int)(v3 * v9)));
      result = VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
                 v17,
                 v12,
                 (__m128 *)(v14 + (int)((v3 + 1) * v13)),
                 *(double *)v12->m128_u64,
                 v16,
                 v8,
                 (__m128 *)(v10 + (int)((v3 + 1) * v9)));
      v3 += 2;
    }
    while ( v3 < v7 );
  }
  return result;
}
