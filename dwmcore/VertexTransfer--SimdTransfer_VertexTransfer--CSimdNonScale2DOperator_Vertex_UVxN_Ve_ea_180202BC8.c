/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180202BC8
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x18000616C (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x1800068D8 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180006A74 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@T__m128@@1IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180205A14 (-Transform@-$CSimdNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Vert.c)
 */

_UNKNOWN **__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  _UNKNOWN **result; // rax
  __int64 v5; // r13
  __int64 v6; // r12
  int v10; // r14d
  __int128 v11; // xmm8
  unsigned int v12; // r11d
  __int128 v13; // xmm3
  unsigned int v14; // r15d
  int v15; // eax
  __int64 v16; // rbp
  __int64 v17; // rdi
  int v18; // r8d
  int v19; // r9d
  DirectX::PackedVector *v20; // rcx
  unsigned int v21; // r11d
  __m128 v22; // xmm6
  __m128 v23; // xmm5
  __m128 v24; // xmm4
  __m128 v25; // xmm3
  __m128 v26; // xmm1
  __m128 v27; // xmm2
  DirectX::PackedVector *v28; // rcx
  DirectX::PackedVector *v29; // rcx
  DirectX::PackedVector *v30; // rcx
  int v31; // r11d
  __int128 v32; // [rsp+30h] [rbp-98h] BYREF
  _OWORD v33[6]; // [rsp+40h] [rbp-88h] BYREF
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a1 + 8;
  v6 = *(_QWORD *)a1;
  v10 = *(_DWORD *)(a1 + 40) >> 1;
  v11 = _xmm;
  if ( a3 && a4 )
  {
    result = (_UNKNOWN **)CalculateTBNFrameFrom3Vertices((__int64)&v32, v6, (__int64 *)v5);
    v11 = v32;
  }
  v12 = 0;
  v13 = a2[2];
  v14 = *(_DWORD *)(a1 + 20);
  v33[0] = *a2;
  v33[2] = _mm_movelh_ps((__m128)a2[6], (__m128)_xmm);
  v33[1] = v13;
  if ( v14 )
  {
    do
    {
      v15 = *(_DWORD *)(a1 + 64);
      v16 = *(_QWORD *)(a1 + 56) + (int)((v12 + 1) * v15);
      v17 = *(_QWORD *)(a1 + 56) + (int)(v12 * v15);
      VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v33,
        *(_DWORD *)v5 + v12 * *(_DWORD *)(v5 + 8),
        *(_DWORD *)v5 + v12 * *(_DWORD *)(v5 + 8),
        *(_DWORD *)v5 + *(_DWORD *)(v5 + 8) * (v12 + 1),
        v10,
        v17);
      VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v33,
        v19,
        v18,
        v19,
        v10,
        v16);
      v22 = *(__m128 *)(v6 + 16 * ((unsigned __int64)v21 >> 1));
      if ( a3 )
      {
        v23 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
        v24 = _mm_movelh_ps((__m128)a3[2], (__m128)*((unsigned int *)a3 + 6));
        v25 = _mm_movelh_ps((__m128)a3[6], (__m128)*((unsigned int *)a3 + 14));
        v26 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v22, v22, 85), v24), v25),
                _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v23));
        v27 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v22, v22, 255), v24), v25),
                _mm_mul_ps(_mm_shuffle_ps(v22, v22, 170), v23));
      }
      else
      {
        v26 = _mm_shuffle_ps(v22, DirectX::g_XMZero, 228);
        v27 = (__m128)_mm_unpackhi_pd((__m128d)v22, DirectX::g_XMZero);
      }
      *(__m128 *)(v17 + 16) = v26;
      *(_OWORD *)(v17 + 32) = v11;
      *(__m128 *)(v16 + 16) = v27;
      *(_OWORD *)(v16 + 32) = v11;
      *(_WORD *)(v17 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v20, v26.m128_f32[0]);
      *(_WORD *)(v17 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v28, v26.m128_f32[0]);
      *(_WORD *)(v16 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v29, v26.m128_f32[0]);
      result = (_UNKNOWN **)DirectX::PackedVector::XMConvertFloatToHalf(v30, v26.m128_f32[0]);
      v12 = v31 + 2;
      *(_WORD *)(v16 + 30) = (_WORD)result;
    }
    while ( v12 < v14 );
  }
  return result;
}
