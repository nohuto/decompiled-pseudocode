/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180015E24
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180020714 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x180021468 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x180021530 (-Transform@-$CSimdScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexT.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180021658 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  __m128 v6; // xmm7
  __m128 v8; // xmm8
  unsigned int v9; // r12d
  __m128 v10; // xmm9
  __m128 v11; // xmm10
  __int64 v12; // rax
  __int64 *v13; // rcx
  unsigned int v14; // r12d
  __m128 v15; // xmm10
  __int128 v16; // xmm11
  unsigned int v17; // ebp
  unsigned int v18; // eax
  __m128 v19; // xmm0
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  __int64 v23; // rdi
  __int64 v24; // r15
  __int64 v25; // r13
  int v26; // r11d
  int v27; // r10d
  float v28; // xmm1_4
  int v29; // r9d
  DirectX::PackedVector *v30; // rcx
  __m128 v31; // xmm6
  __m128 v32; // xmm2
  __m128 v33; // xmm3
  DirectX::PackedVector *v34; // rcx
  DirectX::PackedVector *v35; // rcx
  DirectX::PackedVector *v36; // rcx
  int v38; // [rsp+20h] [rbp-F8h]
  int v39; // [rsp+20h] [rbp-F8h]
  __int128 v40; // [rsp+40h] [rbp-D8h] BYREF
  _OWORD v41[9]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v42; // [rsp+120h] [rbp+8h]
  __int64 v43; // [rsp+128h] [rbp+10h]

  v6 = (__m128)DirectX::g_XMZero;
  v8 = (__m128)DirectX::g_XMZero;
  v9 = *((_DWORD *)a1 + 10);
  v10 = (__m128)DirectX::g_XMZero;
  v11 = (__m128)*((unsigned int *)a1 + 11);
  v12 = *a1;
  v13 = a1 + 1;
  v14 = v9 >> 1;
  v43 = v12;
  v15 = _mm_shuffle_ps(v11, v11, 0);
  if ( a3 )
  {
    v6 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v8 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]), _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v10 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]), _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v16 = _xmm;
  if ( a3 && a4 )
  {
    CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v40, a4);
    v16 = v40;
    v13 = a1 + 1;
  }
  v17 = 0;
  v18 = *((_DWORD *)a1 + 5);
  v19 = (__m128)a2[4];
  v20 = (__m128)a2[5];
  v41[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v21 = _mm_unpacklo_ps(_mm_unpacklo_ps(v19, v19), _mm_unpacklo_ps(v20, v20));
  v22 = (__m128)a2[13];
  v41[1] = v21;
  v41[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v22, (__m128)0LL));
  v42 = v18;
  if ( v18 )
  {
    do
    {
      v23 = *v13 + (int)(*((_DWORD *)v13 + 2) * (v17 + 1));
      v24 = a1[7] + (int)(v17 * *((_DWORD *)a1 + 16));
      v25 = a1[7] + (int)((v17 + 1) * *((_DWORD *)a1 + 16));
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v41,
        *(_DWORD *)v13 + v17 * *((_DWORD *)v13 + 2),
        a1[3] + v17 * *((_DWORD *)a1 + 8),
        (_DWORD)a4,
        v38,
        v14,
        v24);
      LODWORD(v28) = _mm_andnot_ps(
                       (__m128)`DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask,
                       v15).m128_u32[0] | `DirectX::Internal::PermuteHelper<228,1,1,1,0>::Permute'::`2'::selectMask & DirectX::g_XMOne;
      VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (unsigned int)v41,
        v23,
        v27 + (v17 + 1) * v26,
        v29,
        v39,
        v14,
        v25);
      v31 = *(__m128 *)(v43 + 16 * ((unsigned __int64)v17 >> 1));
      v32 = v31;
      if ( a3 )
      {
        v32 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 85), v8), v10),
                _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v6));
        v33 = _mm_shuffle_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 255), v8), v10),
                  _mm_mul_ps(_mm_shuffle_ps(v31, v31, 170), v6)),
                DirectX::g_XMZero,
                228);
      }
      else
      {
        v33 = (__m128)_mm_unpackhi_pd((__m128d)v31, DirectX::g_XMZero);
      }
      *(__m128 *)(v24 + 16) = _mm_shuffle_ps(v32, DirectX::g_XMZero, 228);
      *(_OWORD *)(v24 + 32) = v16;
      *(__m128 *)(v25 + 16) = v33;
      *(_OWORD *)(v25 + 32) = v16;
      *(_WORD *)(v24 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v30, v28);
      *(_WORD *)(v24 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v34, v28);
      *(_WORD *)(v25 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v35, v28);
      LOWORD(v18) = DirectX::PackedVector::XMConvertFloatToHalf(v36, v28);
      v17 += 2;
      *(_WORD *)(v25 + 30) = v18;
      v13 = a1 + 1;
    }
    while ( v17 < v42 );
  }
  return v18;
}
