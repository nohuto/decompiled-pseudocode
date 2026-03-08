/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1800063E0
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x18000616C (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x1800068D8 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180006958 (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180006A74 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int128 v8; // xmm7
  __int64 *v9; // rcx
  int v10; // r12d
  unsigned int v11; // eax
  unsigned int v12; // r14d
  __int128 v13; // xmm2
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // r13
  int v17; // r11d
  int v18; // r10d
  int v19; // r9d
  DirectX::PackedVector *v20; // rcx
  __m128 v21; // xmm6
  __m128 v22; // xmm5
  __m128 v23; // xmm4
  __m128 v24; // xmm3
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  DirectX::PackedVector *v27; // rcx
  DirectX::PackedVector *v28; // rcx
  DirectX::PackedVector *v29; // rcx
  int v31; // [rsp+20h] [rbp-B8h]
  int v32; // [rsp+20h] [rbp-B8h]
  __int128 v33; // [rsp+40h] [rbp-98h] BYREF
  _OWORD v34[5]; // [rsp+50h] [rbp-88h] BYREF
  unsigned int i; // [rsp+E0h] [rbp+8h]
  __int64 v36; // [rsp+E8h] [rbp+10h]

  v6 = *a1;
  v8 = _xmm;
  v9 = a1 + 1;
  v10 = *((_DWORD *)a1 + 10) >> 1;
  v36 = v6;
  if ( a3 && a4 )
  {
    CalculateTBNFrameFrom3Vertices((unsigned int)&v33, v6, (_DWORD)v9, (_DWORD)a3, a4);
    v8 = v33;
    v9 = a1 + 1;
  }
  v11 = *((_DWORD *)a1 + 5);
  v12 = 0;
  v13 = a2[6];
  v34[0] = _mm_movelh_ps((__m128)*a2, (__m128)*a2);
  v34[1] = _mm_movelh_ps((__m128)a2[2], (__m128)a2[2]);
  v34[2] = v13;
  for ( i = v11; v12 < i; v9 = a1 + 1 )
  {
    v14 = *v9 + (int)(*((_DWORD *)v9 + 2) * (v12 + 1));
    v15 = a1[7] + (int)(v12 * *((_DWORD *)a1 + 16));
    v16 = a1[7] + (int)((v12 + 1) * *((_DWORD *)a1 + 16));
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v34,
      *(_DWORD *)v9 + v12 * *((_DWORD *)v9 + 2),
      a1[3] + v12 * *((_DWORD *)a1 + 8),
      a4,
      v31,
      v10,
      v15);
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v34,
      v14,
      v18 + (v12 + 1) * v17,
      v19,
      v32,
      v10,
      v16);
    v21 = *(__m128 *)(v36 + 16 * ((unsigned __int64)v12 >> 1));
    if ( a3 )
    {
      v22 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
      v23 = _mm_movelh_ps((__m128)a3[2], (__m128)*((unsigned int *)a3 + 6));
      v24 = _mm_movelh_ps((__m128)a3[6], (__m128)*((unsigned int *)a3 + 14));
      v25 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 85), v23), v24),
              _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v22));
      v26 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 255), v23), v24),
              _mm_mul_ps(_mm_shuffle_ps(v21, v21, 170), v22));
    }
    else
    {
      v25 = _mm_shuffle_ps(v21, DirectX::g_XMZero, 228);
      v26 = (__m128)_mm_unpackhi_pd((__m128d)v21, DirectX::g_XMZero);
    }
    *(__m128 *)(v15 + 16) = v25;
    *(_OWORD *)(v15 + 32) = v8;
    *(__m128 *)(v16 + 16) = v26;
    *(_OWORD *)(v16 + 32) = v8;
    *(_WORD *)(v15 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v20, v25.m128_f32[0]);
    *(_WORD *)(v15 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v27, v25.m128_f32[0]);
    *(_WORD *)(v16 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v28, v25.m128_f32[0]);
    LOWORD(v11) = DirectX::PackedVector::XMConvertFloatToHalf(v29, v25.m128_f32[0]);
    v12 += 2;
    *(_WORD *)(v16 + 30) = v11;
  }
  return v11;
}
