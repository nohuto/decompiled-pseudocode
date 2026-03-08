/*
 * XREFs of ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@T__m128@@1IPEAU3@@Z @ 0x1800E7900
 * Callers:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800E775C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1800E775C.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        __m128 *a1,
        __int64 a2,
        double a3,
        double a4,
        unsigned int a5,
        __m128 *a6)
{
  _OWORD *m128_f32; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  *a6 = _mm_or_ps(
          _mm_andnot_ps(
            (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
            _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 85), a1[1]), a1[2]),
              _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a3, 0), *a1))),
          _mm_and_ps(*(__m128 *)&a4, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
  if ( a5 )
  {
    m128_f32 = (_OWORD *)a6[1].m128_f32;
    v7 = a2 - (_QWORD)a6;
    v8 = a5;
    do
    {
      *m128_f32 = *(_OWORD *)((char *)m128_f32 + v7);
      ++m128_f32;
      --v8;
    }
    while ( v8 );
  }
}
