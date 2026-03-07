__int64 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm8
  unsigned int v10; // r12d
  __int64 result; // rax
  unsigned int v12; // ebp
  __m128 v13; // xmm2
  __m128 *v14; // rdx
  __m128 *v15; // rdi
  __int64 v16; // r15
  __int64 v17; // r13
  int v18; // r11d
  __int64 v19; // r10
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
  int v30; // [rsp+20h] [rbp-C8h]
  int v31; // [rsp+20h] [rbp-C8h]
  __int128 v32; // [rsp+40h] [rbp-A8h] BYREF
  __m128 v33[6]; // [rsp+50h] [rbp-98h] BYREF
  unsigned int i; // [rsp+F0h] [rbp+8h]
  __int64 v35; // [rsp+F8h] [rbp+10h]

  v7 = *(_QWORD *)a1;
  v8 = a1 + 8;
  v9 = _xmm;
  v10 = *(_DWORD *)(a1 + 40) >> 1;
  v35 = v7;
  if ( a3 && a4 )
  {
    v30 = a4;
    CalculateTBNFrameFrom3Vertices((__int64)&v32, v7, (__int64 *)v8);
    v9 = v32;
    v8 = a1 + 8;
  }
  result = *(unsigned int *)(a1 + 20);
  v12 = 0;
  v13 = (__m128)a2[6];
  v33[0] = _mm_movelh_ps((__m128)*a2, (__m128)*a2);
  v33[1] = _mm_movelh_ps((__m128)a2[2], (__m128)a2[2]);
  v33[2] = v13;
  for ( i = result; v12 < i; v8 = a1 + 8 )
  {
    v14 = (__m128 *)(*(_QWORD *)v8 + (int)(v12 * *(_DWORD *)(v8 + 8)));
    v15 = (__m128 *)(*(_QWORD *)v8 + (int)(*(_DWORD *)(v8 + 8) * (v12 + 1)));
    v16 = *(_QWORD *)(a1 + 56) + (int)(v12 * *(_DWORD *)(a1 + 64));
    v17 = *(_QWORD *)(a1 + 56) + (int)((v12 + 1) * *(_DWORD *)(a1 + 64));
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      v33,
      v14,
      (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(v12 * *(_DWORD *)(a1 + 32))),
      *(double *)v14->m128_u64,
      v30,
      v10,
      (__m128 *)v16);
    VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      v33,
      v15,
      (__m128 *)(v19 + (int)((v12 + 1) * v18)),
      *(double *)v15->m128_u64,
      v31,
      v10,
      (__m128 *)v17);
    v21 = *(__m128 *)(v35 + 16 * ((unsigned __int64)v12 >> 1));
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
    *(__m128 *)(v16 + 16) = v25;
    *(_OWORD *)(v16 + 32) = v9;
    *(__m128 *)(v17 + 16) = v26;
    *(_OWORD *)(v17 + 32) = v9;
    *(_WORD *)(v16 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v20, v25.m128_f32[0]);
    *(_WORD *)(v16 + 30) = DirectX::PackedVector::XMConvertFloatToHalf(v27, v25.m128_f32[0]);
    *(_WORD *)(v17 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v28, v25.m128_f32[0]);
    result = DirectX::PackedVector::XMConvertFloatToHalf(v29, v25.m128_f32[0]);
    v12 += 2;
    *(_WORD *)(v17 + 30) = result;
  }
  return result;
}
