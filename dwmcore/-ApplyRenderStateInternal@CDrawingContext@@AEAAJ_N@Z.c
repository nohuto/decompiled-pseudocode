__int64 __fastcall CDrawingContext::ApplyRenderStateInternal(__m128 *this, char a2)
{
  char v2; // si
  unsigned int v3; // r15d
  __int64 result; // rax
  __int64 v6; // rax
  __m128 v7; // xmm6
  __int32 v8; // eax
  float v9; // xmm10_4
  float v10; // xmm9_4
  __m128 v11; // xmm8
  float v12; // xmm7_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  __m128 v16; // xmm6
  float v17; // xmm11_4
  int v18; // ecx
  __m128 v19; // xmm6
  __m128 v20; // xmm6
  __int64 v21; // r14
  __int64 v22; // r12
  int v23; // eax
  int v24; // ebx
  float v25; // xmm8_4
  int v26; // eax
  float v27; // xmm9_4
  int v28; // eax
  float v29; // xmm10_4
  int v30; // eax
  float v31; // xmm7_4
  __int64 v32; // rax
  int v33; // eax
  unsigned int v34; // ecx
  bool v35; // zf
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int128 v38; // xmm0
  CBatchOptimizer *v39; // rcx
  __int64 v40; // rdx
  struct ID2D1PrivateCompositorRenderer *v41; // rbx
  int v42; // eax
  unsigned int v43; // ecx
  float v44; // xmm3_4
  float v45; // xmm2_4
  float v46; // xmm0_4
  unsigned int v47; // [rsp+30h] [rbp-79h]
  __m128 v48; // [rsp+38h] [rbp-71h] BYREF
  __m128 v49; // [rsp+48h] [rbp-61h] BYREF
  __int64 v50; // [rsp+58h] [rbp-51h]

  v2 = 0;
  v3 = 0;
  if ( *(_BYTE *)(this[56].m128_u64[1] - 8) )
    v2 = a2;
  if ( !v2 )
  {
    v33 = CDrawingContext::FlushAllDeferredClipping((CDrawingContext *)this);
    v3 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x1B8u, 0LL);
      return v3;
    }
  }
  if ( !this[510].m128_i8[9] )
    return v3;
  v6 = this[56].m128_i64[1];
  v7 = 0LL;
  v49 = 0LL;
  v48 = 0LL;
  if ( v6 != this[56].m128_u64[0] && *(_QWORD *)(v6 - 184) && (v8 = this[199].m128_i32[0]) != 0 )
  {
    v48 = *(__m128 *)(this[200].m128_u64[0] + 16LL * (unsigned int)(v8 - 1));
    v9 = v48.m128_f32[2];
    v10 = v48.m128_f32[1];
    v11 = (__m128)v48.m128_u32[0];
    LODWORD(v12) = _mm_shuffle_ps(v48, v48, 255).m128_u32[0];
  }
  else
  {
    v12 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v9 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v10 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v11 = (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( !v2 && CScopedClipStack::HasClipBoundsInScope((CScopedClipStack *)&this[56]) )
  {
    v48 = 0LL;
    CBaseClipStack::Top(&this[201], &v48);
    if ( v48.m128_f32[0] > v11.m128_f32[0] )
      v11 = (__m128)v48.m128_u32[0];
    v44 = v10;
    if ( v48.m128_f32[1] > v10 )
    {
      v10 = v48.m128_f32[1];
      v44 = v48.m128_f32[1];
    }
    v45 = v9;
    if ( v9 > v48.m128_f32[2] )
    {
      v9 = v48.m128_f32[2];
      v45 = v48.m128_f32[2];
    }
    v46 = v12;
    if ( v12 > v48.m128_f32[3] )
    {
      v12 = v48.m128_f32[3];
      v46 = v48.m128_f32[3];
    }
    if ( v45 <= v11.m128_f32[0] || v46 <= v44 )
    {
      v12 = 0.0;
      v9 = 0.0;
      v10 = 0.0;
      v11.m128_i32[0] = 0;
LABEL_48:
      v17 = v49.m128_f32[3];
      v18 = 1;
      v15 = v49.m128_f32[2];
      v14 = v49.m128_f32[1];
      v13 = v49.m128_f32[0];
      goto LABEL_14;
    }
  }
  if ( v9 <= v11.m128_f32[0] || v12 <= v10 )
    goto LABEL_48;
  v13 = v11.m128_f32[0];
  v14 = v10;
  v15 = v9;
  v16 = _mm_shuffle_ps(v11, v11, 225);
  v17 = v12;
  v16.m128_f32[0] = v10;
  v18 = 0;
  v19 = _mm_shuffle_ps(v16, v16, 198);
  v19.m128_f32[0] = v9;
  v20 = _mm_shuffle_ps(v19, v19, 39);
  v20.m128_f32[0] = v12;
  v7 = _mm_shuffle_ps(v20, v20, 57);
  v49 = v7;
LABEL_14:
  v21 = this[2].m128_i64[1];
  v22 = 0LL;
  v47 = v18;
  v23 = *(_DWORD *)(v21 + 368);
  if ( v23 )
    v22 = *(_QWORD *)(*(_QWORD *)(v21 + 344) + 8LL * (unsigned int)(v23 - 1));
  if ( !*(_BYTE *)(v21 + 453)
    || *(_BYTE *)(v21 + 455)
    || v18 != *(_DWORD *)(v21 + 432)
    || v13 != *(float *)(v21 + 416)
    || v14 != *(float *)(v21 + 420)
    || v15 != *(float *)(v21 + 424)
    || v17 != *(float *)(v21 + 428) )
  {
    if ( *(_QWORD *)(v21 + 152) )
    {
      v39 = *(CBatchOptimizer **)(v21 + 160);
      if ( v39 )
        CBatchOptimizer::Flush(v39);
      v40 = *(_QWORD *)(v21 + 152);
      *(_DWORD *)(v40 + 52) = *(_DWORD *)(v21 + 48);
      *(_QWORD *)(v40 + 40) = 0LL;
      v41 = *(struct ID2D1PrivateCompositorRenderer **)(v21 + 152);
      *(_QWORD *)(v21 + 152) = 0LL;
      if ( v41 )
      {
        v42 = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)(v21 + 16), v41);
        if ( v42 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x21Eu, 0LL);
        CMILRefCountBaseT<IMILRefCount>::InternalRelease((char *)v41 + 8);
      }
    }
    v35 = *(_BYTE *)(v22 + 73) == 0;
    *(_DWORD *)(v22 + 68) = v47;
    *(__m128 *)(v22 + 52) = v7;
    if ( !v35 )
    {
      v36 = *(_QWORD *)(v22 + 16);
      v49 = *(__m128 *)&_xmm;
      v50 = 0LL;
      (*(void (__fastcall **)(_QWORD, __m128 *))(**(_QWORD **)(v36 + 200) + 240LL))(*(_QWORD *)(v36 + 200), &v49);
      v37 = *(_QWORD *)(v36 + 208);
      *(_BYTE *)(v36 + 439) = 0;
      v38 = *(_OWORD *)(v22 + 52);
      *(_DWORD *)(v36 + 416) = v47;
      *(_OWORD *)(v36 + 400) = v38;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v37 + 80LL))(v37, v22 + 52, v47);
    }
    *(_BYTE *)(v22 + 72) = 1;
  }
  v24 = 0x7FFFFFFF;
  v25 = v11.m128_f32[0] - 0.5;
  v49.m128_i32[0] = 0;
  if ( v25 < -2147483600.0 )
  {
    v26 = 0x80000000;
  }
  else if ( v25 >= 2147483600.0 )
  {
    v26 = 0x7FFFFFFF;
  }
  else
  {
    v26 = (int)ceilf_0(v25);
  }
  v27 = v10 - 0.5;
  v49.m128_f32[1] = (float)v26;
  if ( v27 < -2147483600.0 )
  {
    v28 = 0x80000000;
  }
  else if ( v27 >= 2147483600.0 )
  {
    v28 = 0x7FFFFFFF;
  }
  else
  {
    v28 = (int)ceilf_0(v27);
  }
  v29 = v9 - 0.5;
  v49.m128_f32[2] = (float)v28;
  if ( v29 < -2147483600.0 )
  {
    v30 = 0x80000000;
  }
  else if ( v29 >= 2147483600.0 )
  {
    v30 = 0x7FFFFFFF;
  }
  else
  {
    v30 = (int)ceilf_0(v29);
  }
  v31 = v12 - 0.5;
  v49.m128_f32[3] = (float)v30;
  if ( v31 < -2147483600.0 )
  {
    v24 = 0x80000000;
  }
  else if ( v31 < 2147483600.0 )
  {
    v24 = (int)ceilf_0(v31);
  }
  this[510].m128_i8[9] = 0;
  this[14] = v49;
  *(float *)&v50 = (float)v24;
  this[15].m128_f32[0] = (float)v24;
  if ( !v2 )
    return v3;
  v32 = this[56].m128_i64[1];
  if ( v32 == this[56].m128_u64[0] || !*(_QWORD *)(v32 - 176) )
    return v3;
  result = v3;
  if ( *(_QWORD *)(this[173].m128_u64[0] - 24) )
    this[510].m128_i8[10] = 1;
  return result;
}
