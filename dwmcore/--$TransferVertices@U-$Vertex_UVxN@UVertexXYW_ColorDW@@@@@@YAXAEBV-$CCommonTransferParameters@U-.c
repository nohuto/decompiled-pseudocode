__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(__int64 a1, __int64 a2, unsigned int *a3)
{
  bool v4; // dl
  char v5; // al
  char v6; // cl
  char v7; // r9
  __m128 v8; // xmm2
  __m128 v9; // xmm7
  __m128 v10; // xmm5
  unsigned int v11; // r14d
  unsigned int v12; // r11d
  __m128 v13; // xmm4
  unsigned int v14; // ebp
  __m128 v15; // xmm5
  __m128 v16; // xmm6
  __int64 v17; // rdi
  __m128 *v18; // r10
  __m128 *v19; // r9
  int v20; // eax
  __m128 *v21; // r8
  __m128 *v22; // rbx
  _OWORD *m128_f32; // rax
  signed __int64 v24; // r10
  __int64 v25; // rcx
  _OWORD *v26; // rax
  signed __int64 v27; // r9
  __int64 v28; // rcx
  __int64 result; // rax
  unsigned int v30; // r11d
  unsigned int v31; // r15d
  __m128 v32; // xmm10
  unsigned int v33; // r9d
  __m128 v34; // xmm8
  __m128 v35; // xmm9
  __m128 v36; // xmm8
  __m128 v37; // xmm9
  __m128 v38; // xmm2
  __m128 *v39; // rdi
  __m128 *v40; // rbp
  __m128 *v41; // r10
  __m128 *v42; // r14
  __m128 *v43; // r8
  __m128 *v44; // rbx
  __m128 v45; // xmm3
  __m128 v46; // xmm0
  __m128 v47; // xmm4
  __m128 v48; // xmm4
  __m128 v49; // xmm0
  __m128 v50; // xmm2
  __m128 v51; // xmm3
  __int64 v52; // rcx
  signed __int64 v53; // rbx
  __m128 v54; // xmm3
  signed __int64 v55; // r10
  __m128 *v56; // rax
  __int64 v57; // rcx
  signed __int64 v58; // r8
  __m128 v59; // xmm2
  signed __int64 v60; // r14
  __m128 *v61; // rax
  __m128 v62; // xmm1
  __m128 v63; // xmm1
  __m128 v64; // xmm0
  char v65; // al
  char v66; // al

  v4 = (*(_BYTE *)(a1 + 40) & 1) == 0 && (*(_BYTE *)(a1 + 56) & 0xF) == 0;
  v5 = *((_BYTE *)a3 + 65);
  v6 = (char)(4 * v5) >> 6;
  if ( v6 )
  {
    if ( v6 != 1 )
      v6 = 0;
  }
  else
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(a3[7] & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(a3[3] & _xmm) * 61440.0))
                              + COERCE_FLOAT(a3[15] & _xmm))
                      - 1.0) & _xmm) >= 0.000081380211 )
    {
      v6 = 0;
      v7 = 48;
    }
    else
    {
      v6 = 1;
      v7 = 16;
    }
    *((_BYTE *)a3 + 65) = v7 | v5 & 0xCF;
  }
  if ( v6 )
  {
    v8 = (__m128)*a3;
    v9 = (__m128)a3[5];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8.m128_f32[0] - v9.m128_f32[0]) & _xmm) > 0.000081380211
      || (v10 = (__m128)a3[4],
          COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 1) - COERCE_FLOAT(a3[4] ^ _xmm)) & _xmm) > 0.000081380211)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)(v10.m128_f32[0] * v10.m128_f32[0]) + (float)(v8.m128_f32[0] * v8.m128_f32[0]))
                      - 1.0) & _xmm) >= 0.000081380211 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 44) - 1.0) & _xmm) >= 0.0000011920929 )
      {
        v66 = *(_BYTE *)(a1 + 48);
        if ( v4 )
        {
          if ( v66 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
              a1,
              a3);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              a1,
              a3);
        }
        else if ( v66 )
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            a1,
            a3);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            a1,
            a3);
        }
      }
      else if ( v4 )
      {
        v30 = 0;
        v31 = *(_DWORD *)(a1 + 20);
        v32 = (__m128)*((unsigned __int64 *)a3 + 6);
        v33 = *(_DWORD *)(a1 + 40) >> 1;
        v34 = _mm_unpacklo_ps(v8, (__m128)a3[1]);
        v35 = _mm_unpacklo_ps((__m128)a3[4], v9);
        v36 = _mm_movelh_ps(v34, v34);
        v37 = _mm_movelh_ps(v35, v35);
        if ( v31 )
        {
          do
          {
            v38 = (__m128)DirectX::g_XMOne;
            v39 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v30));
            v40 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v30 + 1)));
            v41 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v30));
            v42 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * (v30 + 1)));
            v43 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(*(_DWORD *)(a1 + 32) * (v30 + 1)));
            v44 = (__m128 *)(*(_QWORD *)(a1 + 24) + (int)(*(_DWORD *)(a1 + 32) * v30));
            v45 = *v44;
            v46 = _mm_sub_ps(_mm_shuffle_ps(*v39, DirectX::g_XMOne, 228), *v44);
            v47 = _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v46, v46, 85), v37),
                    _mm_mul_ps(_mm_shuffle_ps(v46, v46, 0), v36));
            if ( (_mm_movemask_ps(_mm_cmpeq_ps(v47, DirectX::g_XMZero)) & 3) != 3 )
            {
              v62 = _mm_mul_ps(v47, v47);
              v38.m128_f32[0] = 1.0 / fsqrt(v62.m128_f32[0] + _mm_shuffle_ps(v62, v62, 85).m128_f32[0]);
              v38 = _mm_mul_ps(_mm_shuffle_ps(v38, v38, 0), _mm_shuffle_ps(v45, v45, 170));
            }
            *v41 = _mm_shuffle_ps(
                     _mm_add_ps(
                       _mm_add_ps(
                         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v45, v45, 85), v37), v32),
                         _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), v36)),
                       _mm_mul_ps(v38, v47)),
                     _mm_or_ps(
                       _mm_and_ps(
                         *v39,
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                       _mm_andnot_ps(
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                         DirectX::g_XMOne)),
                     228);
            if ( v38.m128_f32[0] > 1.0 && v44->m128_f32[3] == 0.0 )
              v38 = (__m128)(unsigned int)FLOAT_1_0;
            if ( v33 )
            {
              v52 = v33;
              v53 = (char *)v44 - (char *)v39;
              v54 = _mm_shuffle_ps(v38, v38, 0);
              v55 = (char *)v41 - (char *)v39;
              v56 = v39 + 1;
              do
              {
                *(__m128 *)((char *)v56 + v55) = _mm_add_ps(
                                                   _mm_mul_ps(_mm_sub_ps(*v56, *(__m128 *)((char *)v56 + v53)), v54),
                                                   *(__m128 *)((char *)v56 + v53));
                ++v56;
                --v52;
              }
              while ( v52 );
            }
            v48 = *v43;
            v49 = _mm_sub_ps(_mm_shuffle_ps(*v40, DirectX::g_XMOne, 228), *v43);
            v50 = _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v49, v49, 85), v37),
                    _mm_mul_ps(_mm_shuffle_ps(v49, v49, 0), v36));
            if ( (_mm_movemask_ps(_mm_cmpeq_ps(v50, DirectX::g_XMZero)) & 3) == 3 )
            {
              v51 = (__m128)DirectX::g_XMOne;
            }
            else
            {
              v63 = _mm_mul_ps(v50, v50);
              v64 = (__m128)DirectX::g_XMOne;
              v64.m128_f32[0] = 1.0 / fsqrt(v63.m128_f32[0] + _mm_shuffle_ps(v63, v63, 85).m128_f32[0]);
              v51 = _mm_mul_ps(_mm_shuffle_ps(v48, v48, 170), _mm_shuffle_ps(v64, v64, 0));
            }
            *v42 = _mm_shuffle_ps(
                     _mm_add_ps(
                       _mm_add_ps(
                         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v48, v48, 85), v37), v32),
                         _mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v36)),
                       _mm_mul_ps(v51, v50)),
                     _mm_or_ps(
                       _mm_and_ps(
                         *v40,
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                       _mm_andnot_ps(
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                         DirectX::g_XMOne)),
                     228);
            if ( v51.m128_f32[0] > 1.0 && v43->m128_f32[3] == 0.0 )
              v51 = (__m128)(unsigned int)FLOAT_1_0;
            if ( v33 )
            {
              v57 = v33;
              v58 = (char *)v43 - (char *)v40;
              v59 = _mm_shuffle_ps(v51, v51, 0);
              v60 = (char *)v42 - (char *)v40;
              v61 = v40 + 1;
              do
              {
                *(__m128 *)((char *)v61 + v60) = _mm_add_ps(
                                                   _mm_mul_ps(_mm_sub_ps(*v61, *(__m128 *)((char *)v61 + v58)), v59),
                                                   *(__m128 *)((char *)v61 + v58));
                ++v61;
                --v57;
              }
              while ( v57 );
            }
            v30 += 2;
          }
          while ( v30 < v31 );
        }
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          a1,
          a3);
      }
      result = *(unsigned int *)(a1 + 20);
      dword_1803E2B18 += result;
    }
    else
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 44) - 1.0) & _xmm) >= 0.0000011920929 )
      {
        v65 = *(_BYTE *)(a1 + 48);
        if ( v4 )
        {
          if ( v65 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
              a1,
              a3);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              a1,
              a3);
        }
        else if ( v65 )
        {
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            a1,
            a3);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            a1,
            a3);
        }
      }
      else if ( v4 )
      {
        v11 = *(_DWORD *)(a1 + 20);
        v12 = 0;
        v13 = _mm_movelh_ps(_mm_unpacklo_ps(v8, (__m128)a3[1]), (__m128)0LL);
        v14 = *(_DWORD *)(a1 + 40) >> 1;
        v15 = _mm_movelh_ps(_mm_unpacklo_ps(v10, v9), (__m128)0LL);
        v16 = _mm_movelh_ps((__m128)*((unsigned __int64 *)a3 + 6), (__m128)_xmm);
        if ( v11 )
        {
          v17 = v14;
          do
          {
            v18 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(v12 * *(_DWORD *)(a1 + 16)));
            v19 = (__m128 *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * (v12 + 1)));
            v20 = *(_DWORD *)(a1 + 64);
            v21 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)((v12 + 1) * v20));
            v22 = (__m128 *)(*(_QWORD *)(a1 + 56) + (int)(v12 * v20));
            *v22 = _mm_or_ps(
                     _mm_andnot_ps(
                       (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                       _mm_add_ps(
                         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v18, *v18, 85), v15), v16),
                         _mm_mul_ps(_mm_shuffle_ps(*v18, *v18, 0), v13))),
                     _mm_and_ps(*v18, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
            if ( v14 )
            {
              m128_f32 = (_OWORD *)v22[1].m128_f32;
              v24 = (char *)v18 - (char *)v22;
              v25 = v17;
              do
              {
                *m128_f32 = *(_OWORD *)((char *)m128_f32 + v24);
                ++m128_f32;
                --v25;
              }
              while ( v25 );
            }
            *v21 = _mm_or_ps(
                     _mm_andnot_ps(
                       (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                       _mm_add_ps(
                         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v19, *v19, 85), v15), v16),
                         _mm_mul_ps(_mm_shuffle_ps(*v19, *v19, 0), v13))),
                     _mm_and_ps(*v19, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
            if ( v14 )
            {
              v26 = (_OWORD *)v21[1].m128_f32;
              v27 = (char *)v19 - (char *)v21;
              v28 = v17;
              do
              {
                *v26 = *(_OWORD *)((char *)v26 + v27);
                ++v26;
                --v28;
              }
              while ( v28 );
            }
            else
            {
              v17 = 0LL;
            }
            v12 += 2;
          }
          while ( v12 < v11 );
        }
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          a1,
          a3);
      }
      result = *(unsigned int *)(a1 + 20);
      dword_1803E2B14 += result;
    }
  }
  else
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 44) - 1.0) & _xmm) >= 0.0000011920929 )
    {
      if ( *(_BYTE *)(a1 + 48) )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          a1,
          a3);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          a1,
          a3);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        a1,
        a3);
    }
    result = *(unsigned int *)(a1 + 20);
    dword_1803E2B1C += result;
  }
  return result;
}
