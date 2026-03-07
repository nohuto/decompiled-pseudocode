char *__fastcall COcclusionContext::CollectRectangleForOcclusion(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        struct tagRECT *a5)
{
  char *result; // rax
  int v8; // eax
  CMILMatrix *v9; // rcx
  int v10; // eax
  float v11; // xmm12_4
  __m128i v12; // xmm1
  LONG top; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  float v16; // xmm8_4
  float v17; // xmm10_4
  float v18; // xmm9_4
  float v19; // xmm11_4
  int v20; // eax
  __m128 v21; // xmm6
  float v22; // xmm3_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  int v26; // eax
  __m128 v27; // [rsp+28h] [rbp-E0h]
  struct tagRECT v28; // [rsp+38h] [rbp-D0h] BYREF
  const struct FastRegion::Internal::CRgnData *v29[10]; // [rsp+48h] [rbp-C0h] BYREF
  void *retaddr; // [rsp+130h] [rbp+28h] BYREF

  result = (char *)&retaddr;
  if ( *(float *)(a2 + 8) > *(float *)a2 && *(float *)(a2 + 12) > *(float *)(a2 + 4) )
  {
    v8 = *(_DWORD *)(a1 + 32);
    v27 = 0LL;
    if ( v8 )
      v9 = (CMILMatrix *)(*(_QWORD *)(a1 + 48) + 68LL * (unsigned int)(v8 - 1));
    else
      v9 = (CMILMatrix *)&CMILMatrix::Identity;
    CMILMatrix::Transform2DBoundsHelper<0>(v9, (struct MilRectF *)a2);
    v10 = *(_DWORD *)(a1 + 144);
    v11 = v27.m128_f32[0];
    if ( v10 )
    {
      v12 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 160) + 16LL * (unsigned int)(v10 - 1)));
      v28 = (struct tagRECT)v12;
      if ( v27.m128_f32[0] > *(float *)v12.m128i_i32 )
        v12.m128i_i32[0] = v27.m128_i32[0];
      top = v28.top;
      v14 = v27.m128_f32[1];
      v15 = *(float *)&v28.top;
      if ( v27.m128_f32[1] > *(float *)&v28.top )
      {
        top = v27.m128_i32[1];
        v15 = v27.m128_f32[1];
      }
      v16 = *(float *)&v28.right;
      v17 = v27.m128_f32[2];
      if ( *(float *)&v28.right > v27.m128_f32[2] )
        v16 = v27.m128_f32[2];
      v18 = *(float *)&v28.bottom;
      v19 = v27.m128_f32[3];
      if ( *(float *)&v28.bottom > v27.m128_f32[3] )
        v18 = v27.m128_f32[3];
      if ( v16 <= *(float *)v12.m128i_i32 || v18 <= v15 )
      {
        top = 0;
        v12.m128i_i32[0] = 0;
        v16 = 0.0;
        v18 = 0.0;
      }
      v28.top = top;
      *(float *)&v28.right = v16;
      *(float *)&v28.bottom = v18;
    }
    else
    {
      v14 = v27.m128_f32[1];
      v12.m128i_i32[0] = v27.m128_i32[0];
      v17 = v27.m128_f32[2];
      top = v27.m128_i32[1];
      v19 = v27.m128_f32[3];
      v16 = v27.m128_f32[2];
      *(_QWORD *)&v28.top = *(unsigned __int64 *)((char *)v27.m128_u64 + 4);
      v18 = v27.m128_f32[3];
      v28.bottom = v27.m128_i32[3];
    }
    v28.left = v12.m128i_i32[0];
    if ( a5 )
      *a5 = v28;
    if ( !a3 )
    {
      if ( **(_DWORD **)(a1 + 1344) )
      {
        v28.left = PixelAlign(*(float *)v12.m128i_i32, 1);
        v28.top = PixelAlign(*(float *)&top, 1);
        v28.right = PixelAlign(v16, 0);
        v28.bottom = PixelAlign(v18, 0);
        if ( !(unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(&v28) )
        {
          FastRegion::CRegion::CRegion((FastRegion::CRegion *)v29, &v28);
          v26 = FastRegion::CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)(a1 + 1344), v29);
          if ( v26 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v26, retaddr);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v29);
        }
      }
    }
    v20 = *(_DWORD *)(a1 + 176);
    if ( v20 )
    {
      v21 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 192) + 16LL * (unsigned int)(v20 - 1)));
      v27 = v21;
      v27.m128_i32[0] = v21.m128_i32[0];
      v22 = v21.m128_f32[0];
      if ( v11 > v21.m128_f32[0] )
      {
        v22 = v11;
        v27.m128_f32[0] = v11;
        v21 = v27;
      }
      v23 = _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
      if ( v14 > v23 )
      {
        v27.m128_f32[1] = v14;
        v23 = v14;
        v21 = v27;
      }
      v24 = _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
      if ( v24 > v17 )
      {
        v27.m128_f32[2] = v17;
        v24 = v17;
        v21 = v27;
      }
      v25 = _mm_shuffle_ps(v21, v21, 255).m128_f32[0];
      if ( v25 > v19 )
      {
        v27.m128_f32[3] = v19;
        v25 = v19;
        v21 = v27;
      }
      if ( v24 > v22 && v25 > v23 )
        goto LABEL_32;
      v27 = 0uLL;
    }
    v21 = v27;
LABEL_32:
    v28 = (struct tagRECT)v21;
    result = (char *)COcclusionContext::CheckOcclusionRelevance(a1, &v28);
    if ( (_BYTE)result )
    {
      result = detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::reserve_region(
                 (detail::liberal_expansion_policy *)(a1 + 840),
                 (__int64)(*(_QWORD *)(a1 + 848) - *(_QWORD *)(a1 + 840)) >> 4,
                 1uLL);
      *(__m128 *)result = v21;
    }
  }
  return result;
}
