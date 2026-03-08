/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18000662C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x18000616C (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x1800068D8 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180006A74 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  _UNKNOWN **v4; // rax
  __int64 *v5; // r13
  __int64 v6; // r15
  unsigned int v10; // edi
  __int128 v11; // xmm10
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  __m128 v14; // xmm7
  __m128 v15; // xmm8
  __m128 v16; // xmm9
  unsigned __int64 v17; // r10
  __m128 *v18; // r9
  __m128 *v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r11
  _OWORD *v23; // rax
  char *v24; // r9
  _OWORD *v25; // rax
  char *v26; // r8
  __m128 v27; // xmm6
  __m128 v28; // xmm5
  __m128 v29; // xmm4
  __m128 v30; // xmm3
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  DirectX::PackedVector *v33; // rcx
  DirectX::PackedVector *v34; // rcx
  unsigned __int16 v35; // ax
  __int64 v36; // r11
  DirectX::PackedVector *v37; // rcx
  __int64 v38; // r11
  __int128 v40; // [rsp+30h] [rbp-88h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF

  v4 = &retaddr;
  v5 = a1 + 1;
  v6 = *a1;
  v10 = *((_DWORD *)a1 + 10) >> 1;
  v11 = _xmm;
  if ( a3 && a4 )
  {
    LOWORD(v4) = CalculateTBNFrameFrom3Vertices((unsigned int)&v40, v6, (_DWORD)v5, (_DWORD)a3, a4);
    v11 = v40;
  }
  v12 = 0;
  v13 = *((_DWORD *)a1 + 5);
  v14 = (__m128)*a2;
  v15 = (__m128)a2[2];
  v16 = _mm_movelh_ps((__m128)a2[6], (__m128)_xmm);
  if ( v13 )
  {
    v17 = v10;
    do
    {
      v18 = (__m128 *)(*v5 + (int)(v12 * *((_DWORD *)v5 + 2)));
      v19 = (__m128 *)(*v5 + (int)(*((_DWORD *)v5 + 2) * (v12 + 1)));
      v20 = (v12 + 1) * *((_DWORD *)a1 + 16);
      v21 = a1[7] + (int)(v12 * *((_DWORD *)a1 + 16));
      v22 = a1[7] + (int)v20;
      *(__m128 *)v21 = _mm_or_ps(
                         _mm_andnot_ps(
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                           _mm_add_ps(
                             _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v18, *v18, 85), v15), v16),
                             _mm_mul_ps(_mm_shuffle_ps(*v18, *v18, 0), v14))),
                         _mm_and_ps(
                           *v18,
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v10 )
      {
        v23 = (_OWORD *)(v21 + 48);
        v20 = v10;
        v24 = (char *)v18 - v21;
        do
        {
          *v23 = *(_OWORD *)((char *)v23 + (_QWORD)v24 - 32);
          ++v23;
          --v20;
        }
        while ( v20 );
      }
      *(__m128 *)v22 = _mm_or_ps(
                         _mm_andnot_ps(
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                           _mm_add_ps(
                             _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v19, *v19, 85), v15), v16),
                             _mm_mul_ps(_mm_shuffle_ps(*v19, *v19, 0), v14))),
                         _mm_and_ps(
                           *v19,
                           (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
      if ( v10 )
      {
        v25 = (_OWORD *)(v22 + 48);
        v26 = (char *)v19 - v22;
        v20 = v17;
        do
        {
          *v25 = *(_OWORD *)((char *)v25 + (_QWORD)v26 - 32);
          ++v25;
          --v20;
        }
        while ( v20 );
      }
      v27 = *(__m128 *)(v6 + 16 * ((unsigned __int64)v12 >> 1));
      if ( a3 )
      {
        v28 = _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2));
        v29 = _mm_movelh_ps((__m128)a3[2], (__m128)*((unsigned int *)a3 + 6));
        v30 = _mm_movelh_ps((__m128)a3[6], (__m128)*((unsigned int *)a3 + 14));
        v31 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v27, v27, 85), v29), v30),
                _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v28));
        v32 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v27, v27, 255), v29), v30),
                _mm_mul_ps(_mm_shuffle_ps(v27, v27, 170), v28));
      }
      else
      {
        v31 = _mm_shuffle_ps(v27, DirectX::g_XMZero, 228);
        v32 = (__m128)_mm_unpackhi_pd((__m128d)v27, DirectX::g_XMZero);
      }
      *(__m128 *)(v21 + 16) = v31;
      *(_OWORD *)(v21 + 32) = v11;
      *(__m128 *)(v22 + 16) = v32;
      *(_OWORD *)(v22 + 32) = v11;
      *(_WORD *)(v21 + 28) = DirectX::PackedVector::XMConvertFloatToHalf((DirectX::PackedVector *)v20, v31.m128_f32[0]);
      *(_WORD *)(v21 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v33, v31.m128_f32[0]);
      v35 = DirectX::PackedVector::XMConvertFloatToHalf(v34, v31.m128_f32[0]);
      *(_WORD *)(v36 + 28) = v35;
      LOWORD(v4) = DirectX::PackedVector::XMConvertFloatToHalf(v37, v31.m128_f32[0]);
      v12 += 2;
      *(_WORD *)(v38 + 30) = (_WORD)v4;
      v17 = v10;
    }
    while ( v12 < v13 );
  }
  return (__int16)v4;
}
