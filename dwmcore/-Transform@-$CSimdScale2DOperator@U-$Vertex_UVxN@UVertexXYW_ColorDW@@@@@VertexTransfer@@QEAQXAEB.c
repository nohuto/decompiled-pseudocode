/*
 * XREFs of ?Transform@?$CSimdScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@T__m128@@2IPEAU3@@Z @ 0x1800DC580
 * Callers:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800DC3E0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1800DC3E0.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180202EA0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180202EA0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 *__fastcall VertexTransfer::CSimdScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        __m128 *a1,
        __m128 *a2,
        __m128 *a3,
        double a4,
        int a5,
        unsigned int a6,
        __m128 *a7)
{
  __m128 v7; // xmm4
  __m128 v9; // xmm6
  __m128 v10; // xmm3
  __m128 v11; // xmm5
  __m128 v12; // xmm3
  __m128 *result; // rax
  __m128 v14; // xmm1
  __m128 v15; // xmm1
  char *v16; // r8
  __m128 v17; // xmm1
  char *v18; // rdx
  __int64 v19; // r9

  v9 = *a3;
  v10 = _mm_sub_ps(_mm_shuffle_ps(*(__m128 *)&a4, DirectX::g_XMOne, 228), *a3);
  v11 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v10, v10, 85), a1[1]), _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), *a1));
  v12 = (__m128)DirectX::g_XMOne;
  result = (__m128 *)(_mm_movemask_ps(_mm_cmpeq_ps(v11, DirectX::g_XMZero)) & 3);
  if ( (_BYTE)result != 3 )
  {
    v14 = _mm_mul_ps(v11, v11);
    v12.m128_f32[0] = 1.0 / fsqrt(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0]);
    v12 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), _mm_shuffle_ps(v9, v9, 170));
  }
  v15 = (__m128)(unsigned int)FLOAT_1_0;
  *a7 = _mm_shuffle_ps(
          _mm_add_ps(
            _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 85), a1[1]), a1[2]),
              _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *a1)),
            _mm_mul_ps(v12, v11)),
          _mm_or_ps(
            _mm_andnot_ps(
              (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
              DirectX::g_XMOne),
            _mm_and_ps(v7, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask)),
          228);
  if ( v12.m128_f32[0] <= 1.0 || a3->m128_f32[3] != 0.0 )
    v15 = v12;
  if ( a6 )
  {
    v16 = (char *)((char *)a3 - (char *)a2);
    v17 = _mm_shuffle_ps(v15, v15, 0);
    v18 = (char *)((char *)a7 - (char *)a2);
    result = a2 + 1;
    v19 = a6;
    do
    {
      *(__m128 *)((char *)result + (_QWORD)v18) = _mm_add_ps(
                                                    _mm_mul_ps(
                                                      _mm_sub_ps(*result, *(__m128 *)((char *)result + (_QWORD)v16)),
                                                      v17),
                                                    *(__m128 *)((char *)result + (_QWORD)v16));
      ++result;
      --v19;
    }
    while ( v19 );
  }
  return result;
}
