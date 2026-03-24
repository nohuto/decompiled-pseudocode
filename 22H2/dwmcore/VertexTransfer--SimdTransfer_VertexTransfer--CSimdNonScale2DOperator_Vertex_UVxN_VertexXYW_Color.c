/*
 * XREFs of VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180020E38
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180020714 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x180021468 (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?Transform@?$CSimdNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAQXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@T__m128@@1IPEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x1800214CC (-Transform@-$CSimdNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Vert.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180021658 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 */

__int16 __fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        CMILMatrix *a4)
{
  _UNKNOWN **v4; // rax
  _DWORD *v5; // r14
  __int64 v6; // r15
  __m128 v10; // xmm7
  __m128 v11; // xmm8
  __m128 v12; // xmm9
  int v13; // ebp
  __int128 v14; // xmm10
  unsigned int v15; // r12d
  unsigned int v16; // r10d
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  __m128 v19; // xmm2
  int v20; // eax
  __int64 v21; // rdi
  int v22; // r8d
  int v23; // r9d
  DirectX::PackedVector *v24; // rcx
  __int64 v25; // r11
  unsigned int v26; // r10d
  __m128 v27; // xmm6
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  unsigned __int16 v30; // ax
  __int64 v31; // r11
  DirectX::PackedVector *v32; // rcx
  unsigned __int16 v33; // ax
  __int64 v34; // r11
  DirectX::PackedVector *v35; // rcx
  DirectX::PackedVector *v36; // rcx
  int v37; // r10d
  __int128 v39; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v40[8]; // [rsp+40h] [rbp-98h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  v4 = &retaddr;
  v5 = a1 + 1;
  v6 = *a1;
  v10 = (__m128)DirectX::g_XMZero;
  v11 = (__m128)DirectX::g_XMZero;
  v12 = (__m128)DirectX::g_XMZero;
  v13 = *((_DWORD *)a1 + 10) >> 1;
  if ( a3 )
  {
    v10 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a3, (__m128)a3[2]), _mm_unpacklo_ps((__m128)a3[1], (__m128)0LL));
    v11 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[4], (__m128)a3[6]), _mm_unpacklo_ps((__m128)a3[5], (__m128)0LL));
    v12 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a3[12], (__m128)a3[14]), _mm_unpacklo_ps((__m128)a3[13], (__m128)0LL));
  }
  v14 = _xmm;
  if ( a3 && a4 )
  {
    LOWORD(v4) = CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v39, a4);
    v14 = v39;
  }
  v15 = *((_DWORD *)a1 + 5);
  v16 = 0;
  v17 = (__m128)a2[5];
  v40[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v18 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps(v17, (__m128)0LL));
  v19 = (__m128)a2[13];
  v40[1] = v18;
  for ( v40[2] = _mm_unpacklo_ps(
                   _mm_unpacklo_ps((__m128)a2[12], (__m128)(unsigned int)FLOAT_1_0),
                   _mm_unpacklo_ps(v19, (__m128)0LL)); v16 < v15; *(_WORD *)(v21 + 30) = (_WORD)v4 )
  {
    v20 = *((_DWORD *)a1 + 16);
    v21 = a1[7] + (int)((v16 + 1) * v20);
    VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v40,
      *v5 + v16 * v5[2],
      v16 + 1,
      *v5 + v5[2] * (v16 + 1),
      v13,
      a1[7] + (int)(v16 * v20));
    VertexTransfer::CSimdNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
      (unsigned int)v40,
      v23,
      v22,
      v23,
      v13,
      v21);
    v27 = *(__m128 *)(v6 + 16 * ((unsigned __int64)v26 >> 1));
    v28 = v27;
    if ( a3 )
    {
      v28 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v27, v27, 85), v11), v12),
              _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v10));
      v29 = _mm_shuffle_ps(
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v27, v27, 255), v11), v12),
                _mm_mul_ps(_mm_shuffle_ps(v27, v27, 170), v10)),
              DirectX::g_XMZero,
              228);
    }
    else
    {
      v29 = (__m128)_mm_unpackhi_pd((__m128d)v27, DirectX::g_XMZero);
    }
    *(__m128 *)(v25 + 16) = _mm_shuffle_ps(v28, DirectX::g_XMZero, 228);
    *(_OWORD *)(v25 + 32) = v14;
    *(__m128 *)(v21 + 16) = v29;
    *(_OWORD *)(v21 + 32) = v14;
    v30 = DirectX::PackedVector::XMConvertFloatToHalf(v24, 0.0);
    *(_WORD *)(v31 + 28) = v30;
    v33 = DirectX::PackedVector::XMConvertFloatToHalf(v32, 0.0);
    *(_WORD *)(v34 + 30) = v33;
    *(_WORD *)(v21 + 28) = DirectX::PackedVector::XMConvertFloatToHalf(v35, 0.0);
    LOWORD(v4) = DirectX::PackedVector::XMConvertFloatToHalf(v36, 0.0);
    v16 = v37 + 2;
  }
  return (__int16)v4;
}
