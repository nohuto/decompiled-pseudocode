char __fastcall CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
        int a1,
        FLOAT *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  int v7; // r13d
  float v9; // xmm14_4
  float left; // xmm15_4
  float v11; // xmm12_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float bottom; // xmm10_4
  __int64 v15; // r9
  float v16; // xmm4_4
  float v17; // xmm5_4
  __m128 v19; // xmm11
  float *v20; // rdx
  __m128 v21; // xmm9
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  float top; // xmm8_4
  char v27; // cl
  float *v28; // rax
  float v29; // xmm2_4
  float v30; // xmm1_4
  float right; // xmm7_4
  float *v32; // rax
  float v33; // xmm5_4
  float v34; // xmm1_4
  float v35; // xmm6_4
  float v36; // xmm10_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  __int64 v39; // r9
  float v40; // xmm0_4
  FLOAT v41; // xmm4_4
  unsigned int v42; // ebx
  FLOAT v43; // xmm0_4
  unsigned int v44; // edi
  float v45; // xmm2_4
  FLOAT v46; // xmm1_4
  unsigned int v47; // edi
  float v48; // [rsp+38h] [rbp-D0h]
  struct D2D_RECT_F v49; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_RECT_F v50; // [rsp+58h] [rbp-B0h] BYREF

  v7 = a4;
  CRoundedRectangleGeometryData::GetBaseRect(a4, (__int64)&v50);
  v9 = *a2;
  left = v50.left;
  if ( v50.left < *a2 )
    v49.left = *a2;
  else
    v49.left = v50.left;
  v11 = a2[1];
  if ( v50.top < v11 )
    v49.top = a2[1];
  else
    v49.top = v50.top;
  v12 = a2[2];
  if ( v12 < v50.right )
    v49.right = a2[2];
  else
    v49.right = v50.right;
  v13 = a2[3];
  bottom = v50.bottom;
  if ( v13 < v50.bottom )
    v49.bottom = a2[3];
  else
    v49.bottom = v50.bottom;
  if ( IsEmpty(&v49) )
    return 0;
  v48 = (float)a1;
  if ( (float)a1 > Area(&v49) )
    return 0;
  v19 = (__m128)_mm_loadu_si128((const __m128i *)a2);
  v20 = (float *)(v15 + 16);
  v21 = v19;
  v22 = *(float *)(v15 + 20);
  v23 = *(float *)(v15 + 16) + left;
  v49 = (struct D2D_RECT_F)v19;
  v50 = (struct D2D_RECT_F)v19;
  v24 = v22 + v16;
  if ( (float)(v23 - v9) > 0.015625 && (float)(v24 - v11) > 0.015625 )
  {
    v25 = v19.m128_f32[0];
    LODWORD(v49.left) = v19.m128_i32[0];
    if ( v19.m128_f32[0] <= v23 )
    {
      v49.left = v23;
      v25 = v23;
      v19 = (__m128)v49;
    }
    top = _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
    v50.top = top;
    if ( top <= v24 )
    {
      v50.top = v24;
      top = v24;
      v21 = (__m128)v50;
    }
  }
  else
  {
    v25 = v49.left;
    top = v50.top;
  }
  v27 = *(_BYTE *)(v15 + 52);
  v28 = (float *)(v15 + 16);
  if ( !v27 )
    v28 = (float *)(v15 + 24);
  v29 = v17 - *v28;
  v30 = v28[1] + v16;
  if ( (float)(v12 - v29) > 0.015625 && (float)(v30 - v11) > 0.015625 )
  {
    right = _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
    v49.right = right;
    if ( v29 <= right )
    {
      v49.right = v29;
      right = v29;
      v19 = (__m128)v49;
    }
    if ( top <= v30 )
    {
      v50.top = v30;
      top = v30;
      v21 = (__m128)v50;
    }
  }
  else
  {
    right = v49.right;
  }
  v32 = (float *)(v15 + 16);
  if ( !v27 )
    v32 = (float *)(v15 + 32);
  v33 = v17 - *v32;
  v34 = bottom - v32[1];
  if ( (float)(a2[2] - v33) <= 0.015625 || (float)(v13 - v34) <= 0.015625 )
  {
    v35 = v50.bottom;
  }
  else
  {
    if ( v33 <= right )
    {
      v49.right = v33;
      right = v33;
      v19 = (__m128)v49;
    }
    v35 = _mm_shuffle_ps(v21, v21, 255).m128_f32[0];
    v50.bottom = v35;
    if ( v34 <= v35 )
    {
      v50.bottom = v34;
      v35 = v34;
      v21 = (__m128)v50;
    }
  }
  if ( !v27 )
    v20 = (float *)(v15 + 40);
  v36 = bottom - v20[1];
  v37 = *v20 + left;
  if ( (float)(v37 - v9) > 0.015625 && (float)(a2[3] - v36) > 0.015625 )
  {
    if ( v25 <= v37 )
    {
      v49.left = *v20 + left;
      v25 = v37;
      v19 = (__m128)v49;
    }
    if ( v36 <= v35 )
    {
      v35 = v36;
      v50.bottom = v36;
      v21 = (__m128)v50;
    }
  }
  v38 = Area(&v50);
  v40 = Area(&v49);
  if ( v38 >= v40 )
  {
    if ( v48 <= v38 )
    {
      v42 = a3;
      if ( top > v11 )
      {
        v49.right = a2[2];
        v49.left = v9;
        v49.top = v11;
        v49.bottom = top;
        v42 = a3 & 0xFFFFFFFC;
        if ( !(unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                                 a1,
                                 (unsigned int)&v49,
                                 a3 & 0xFFFCFFFF,
                                 v39,
                                 a5) )
        {
          v50 = v49;
          detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::emplace_back<D2D_RECT_F,enum D2D1_EDGE_FLAGS,bool>(
            a5,
            &v50,
            a3 & 0xFFFCFFFF,
            0LL);
        }
      }
      v45 = a2[3];
      if ( v45 > v35 )
      {
        v46 = a2[2];
        v47 = a3 & 0xFFFFFFFC;
        v49.left = *a2;
        v49.right = v46;
        v49.top = v35;
        v49.bottom = v45;
        v42 &= 0xFFFCFFFF;
        if ( !(unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                                 a1,
                                 (unsigned int)&v49,
                                 v47,
                                 v7,
                                 a5) )
        {
          v50 = v49;
          detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::emplace_back<D2D_RECT_F,enum D2D1_EDGE_FLAGS,bool>(
            a5,
            &v50,
            v47,
            0LL);
        }
      }
      v49 = (struct D2D_RECT_F)v21;
      goto LABEL_45;
    }
    return 0;
  }
  if ( v48 > v40 )
    return 0;
  v42 = a3;
  if ( v25 > v9 )
  {
    v49.left = v9;
    v49.top = v11;
    v49.right = v25;
    v49.bottom = v41;
    v42 = a3 & 0xFCFFFFFF;
    if ( !(unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                             a1,
                             (unsigned int)&v49,
                             a3 & 0xFFFFFCFF,
                             v39,
                             a5) )
    {
      v50 = v49;
      detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::emplace_back<D2D_RECT_F,enum D2D1_EDGE_FLAGS,bool>(
        a5,
        &v50,
        a3 & 0xFFFFFCFF,
        0LL);
    }
  }
  if ( a2[2] > right )
  {
    v43 = a2[1];
    v49.right = a2[2];
    v44 = a3 & 0xFCFFFFFF;
    v49.bottom = a2[3];
    v49.left = right;
    v49.top = v43;
    v42 &= 0xFFFFFCFF;
    if ( !(unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                             a1,
                             (unsigned int)&v49,
                             v44,
                             v7,
                             a5) )
    {
      v50 = v49;
      detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::emplace_back<D2D_RECT_F,enum D2D1_EDGE_FLAGS,bool>(
        a5,
        &v50,
        v44,
        0LL);
    }
  }
  v49 = (struct D2D_RECT_F)v19;
LABEL_45:
  LOBYTE(v39) = 1;
  detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::emplace_back<D2D_RECT_F,enum D2D1_EDGE_FLAGS,bool>(
    a5,
    &v49,
    v42,
    v39);
  return 1;
}
