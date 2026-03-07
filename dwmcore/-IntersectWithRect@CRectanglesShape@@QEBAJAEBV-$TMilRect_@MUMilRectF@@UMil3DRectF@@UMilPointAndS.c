__int64 __fastcall CRectanglesShape::IntersectWithRect(struct CRectanglesShape *a1, float *a2, CRectanglesShape **a3)
{
  char *v3; // rsi
  unsigned int v4; // r15d
  unsigned int v5; // ebx
  struct CRectanglesShape *v8; // r14
  char *i; // rdi
  float v10; // xmm2_4
  __m128 v11; // xmm0
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm3_4
  struct CObjectCache *ObjectCache; // rax
  CRectanglesShape *v20; // rcx
  int v21; // r8d
  char *v22; // r14
  CRectanglesShape *v23; // rax
  CRectanglesShape *v24; // rbx
  int v25; // eax
  __int64 v26; // rcx
  __int128 v28; // [rsp+30h] [rbp-30h] BYREF
  char *v29; // [rsp+40h] [rbp-20h]
  __m128 v30; // [rsp+48h] [rbp-18h] BYREF

  v3 = 0LL;
  v4 = 0;
  *a3 = 0LL;
  v5 = 0;
  v29 = 0LL;
  v8 = a1;
  v28 = 0LL;
  for ( i = 0LL; v5 < *((_DWORD *)v8 + 10); ++v5 )
  {
    v10 = *a2;
    a1 = (struct CRectanglesShape *)(2LL * v5);
    v11 = (__m128)_mm_loadu_si128((const __m128i *)(*((_QWORD *)v8 + 2) + 16LL * v5));
    v30 = v11;
    v30.m128_i32[0] = v11.m128_i32[0];
    v12 = v11.m128_f32[0];
    if ( v10 > v11.m128_f32[0] )
    {
      v30.m128_f32[0] = v10;
      v12 = v10;
      v11 = v30;
    }
    v13 = a2[1];
    v14 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
    if ( v13 > v14 )
    {
      v30.m128_f32[1] = a2[1];
      v14 = v13;
      v11 = v30;
    }
    v15 = a2[2];
    v16 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
    if ( v16 > v15 )
    {
      v30.m128_f32[2] = a2[2];
      v16 = v15;
      v11 = v30;
    }
    v17 = a2[3];
    v18 = _mm_shuffle_ps(v11, v11, 255).m128_f32[0];
    if ( v18 > v17 )
    {
      v30.m128_f32[3] = a2[3];
      v18 = v17;
      v11 = v30;
    }
    if ( v16 > v12 && v18 > v14 )
    {
      if ( i == v3 )
      {
        std::vector<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const &>(
          (char **)&v28,
          i,
          &v30);
        v3 = v29;
        i = (char *)*((_QWORD *)&v28 + 1);
      }
      else
      {
        *(__m128 *)i = v11;
        i += 16;
        *((_QWORD *)&v28 + 1) = i;
      }
    }
  }
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v20 = 0LL;
  v21 = *((_DWORD *)ObjectCache + 1);
  if ( v21 )
  {
    v20 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v20;
    *((_DWORD *)ObjectCache + 1) = v21 - 1;
  }
  if ( !v20 )
    v20 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL);
  v22 = (char *)v28;
  if ( v20 && (v23 = CRectanglesShape::CRectanglesShape(v20), (v24 = v23) != 0LL) )
  {
    if ( v22 == i || (v25 = CRectanglesShape::BuildFromRectFs(v23, v22, (i - v22) >> 4), v4 = v25, v25 >= 0) )
    {
      *a3 = v24;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x12Du, 0LL);
      CRectanglesShape::`scalar deleting destructor'(v24, 1);
    }
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v20, 0LL, 0, -2147024882, 0x128u, 0LL);
  }
  if ( v22 )
    std::_Deallocate<16,0>(v22, (v3 - v22) & 0xFFFFFFFFFFFFFFF0uLL);
  return v4;
}
