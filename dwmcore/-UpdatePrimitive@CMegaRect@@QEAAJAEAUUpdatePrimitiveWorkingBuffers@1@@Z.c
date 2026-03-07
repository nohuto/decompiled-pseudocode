__int64 __fastcall CMegaRect::UpdatePrimitive(CMegaRect *this, struct CMegaRect::UpdatePrimitiveWorkingBuffers *a2)
{
  __int64 *v2; // r15
  __int64 *v3; // r14
  __int64 *v4; // rdi
  int v6; // eax
  unsigned int v7; // r12d
  size_t v8; // rax
  __int64 v9; // rcx
  char *v10; // r9
  char *v11; // rdx
  unsigned __int64 v12; // r13
  char *v13; // rcx
  unsigned __int64 v14; // rsi
  char *v15; // rbx
  __int64 v16; // rdx
  char *v17; // rcx
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  CMegaRect *v20; // r14
  _QWORD *v21; // rsi
  __int64 v22; // rcx
  __int16 v23; // bx
  int v24; // eax
  int v25; // r12d
  __int64 v26; // r8
  float v27; // xmm0_4
  _WORD *v28; // rdx
  _WORD *v29; // rdx
  _WORD *v30; // rdx
  __int16 v31; // r15
  _WORD *v32; // rdx
  _WORD *v33; // rdx
  _WORD *v34; // rdx
  __m128 v35; // xmm6
  __m128 v36; // xmm6
  int v37; // xmm1_4
  unsigned int v38; // xmm0_4
  int v39; // xmm1_4
  float v40; // xmm0_4
  CMegaRectBatchCommand *v41; // rcx
  int v42; // r8d
  struct CDrawListPrimitive *Primitive; // rax
  __int64 v44; // rbx
  char v45; // si
  gsl::details *v46; // rcx
  int v47; // r8d
  unsigned int v48; // ecx
  int v49; // ebx
  __int64 v50; // rdx
  unsigned __int64 v52; // rbx
  char *v53; // rax
  size_t v54; // rsi
  char *v55; // rax
  int v56; // [rsp+30h] [rbp-A1h]
  int v57; // [rsp+48h] [rbp-89h] BYREF
  int v58; // [rsp+4Ch] [rbp-85h]
  int v59; // [rsp+50h] [rbp-81h]
  char *v60; // [rsp+58h] [rbp-79h]
  __int64 v61; // [rsp+60h] [rbp-71h] BYREF
  unsigned int v62; // [rsp+68h] [rbp-69h]
  int v63; // [rsp+6Ch] [rbp-65h]
  int v64; // [rsp+70h] [rbp-61h]
  int v65; // [rsp+74h] [rbp-5Dh]
  int v66; // [rsp+78h] [rbp-59h]
  size_t v67; // [rsp+80h] [rbp-51h] BYREF
  CMegaRect *v68; // [rsp+88h] [rbp-49h]
  int v69[2]; // [rsp+90h] [rbp-41h] BYREF
  unsigned int v70; // [rsp+98h] [rbp-39h]
  int v71; // [rsp+9Ch] [rbp-35h]
  __int64 v72; // [rsp+A8h] [rbp-29h]
  __int64 v73; // [rsp+B0h] [rbp-21h]
  int v74[2]; // [rsp+B8h] [rbp-19h] BYREF
  unsigned int v75; // [rsp+C0h] [rbp-11h]
  int v76; // [rsp+C4h] [rbp-Dh]
  __int64 v77[2]; // [rsp+C8h] [rbp-9h] BYREF
  char v78; // [rsp+D8h] [rbp+7h]

  v2 = (__int64 *)((char *)a2 + 24);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a2;
  v3 = (__int64 *)((char *)a2 + 48);
  v4 = (__int64 *)((char *)a2 + 72);
  *((_QWORD *)a2 + 4) = *((_QWORD *)a2 + 3);
  *((_QWORD *)a2 + 7) = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 10) = *((_QWORD *)a2 + 9);
  v6 = *((_DWORD *)this + 6);
  v68 = this;
  v77[0] = (__int64)a2;
  v76 = 4;
  v7 = 8 * v6 + 16;
  v8 = *((_QWORD *)this + 2);
  v9 = *((_QWORD *)this + 1);
  v67 = v8;
  *(_QWORD *)v74 = v8;
  LODWORD(v61) = v7;
  v75 = v7;
  CRegion::GetRectangles<std::back_insert_iterator<std::vector<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>>>>(v9);
  v10 = (char *)v2[1];
  v11 = (char *)*v2;
  v12 = (__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 4;
  v13 = &v10[-*v2];
  v60 = v10;
  v14 = 4 * v12 * v7;
  *(_QWORD *)v69 = 4 * v12;
  if ( v14 < (unsigned __int64)v13 )
  {
    v53 = &v11[v14];
  }
  else
  {
    if ( v14 <= (unsigned __int64)v13 )
      goto LABEL_5;
    if ( v14 > v2[2] - (__int64)v11 )
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v2, 4 * v12 * v7);
      goto LABEL_5;
    }
    v52 = v14 - (_QWORD)v13;
    memset_0(v10, 0, v14 - (_QWORD)v13);
    v53 = &v60[v52];
  }
  v2[1] = (__int64)v53;
LABEL_5:
  v15 = (char *)v3[1];
  v16 = *v3;
  v17 = &v15[-*v3];
  v60 = (char *)*v2;
  if ( v14 < (unsigned __int64)v17 )
  {
    v55 = (char *)(v16 + v14);
  }
  else
  {
    if ( v14 <= (unsigned __int64)v17 )
      goto LABEL_9;
    if ( v14 > v3[2] - v16 )
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v3, 4 * v12 * v7);
      goto LABEL_9;
    }
    v54 = v14 - (_QWORD)v17;
    memset_0(v15, 0, v54);
    v55 = &v15[v54];
  }
  v3[1] = (__int64)v55;
LABEL_9:
  v18 = *v3;
  v19 = (v4[2] - *v4) >> 1;
  v72 = *v3;
  if ( 6 * v12 > v19 )
  {
    if ( 6 * v12 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<unsigned short>::_Reallocate_exactly(v4);
  }
  v20 = v68;
  v62 = 0;
  if ( v12 )
  {
    v21 = (_QWORD *)v77[0];
    v59 = 3 * v7;
    v66 = 4 * v7;
    v22 = 0LL;
    v58 = 3 * v7;
    v23 = 0;
    v64 = -2 * v7;
    v24 = -3 * v7;
    v65 = -v7;
    v25 = 0;
    v63 = v24;
    do
    {
      *(__m128 *)v77 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)(*v21 + 16 * v22))), (__m128)_xmm);
      v27 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v77);
      v28 = (_WORD *)v4[1];
      LOWORD(v57) = v23;
      v25 += (int)v27;
      if ( v28 == (_WORD *)v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v28, &v57);
        v26 = 2LL;
      }
      else
      {
        *v28 = v23;
        v4[1] += v26;
      }
      v29 = (_WORD *)v4[1];
      LOWORD(v57) = v23 + 1;
      if ( v29 == (_WORD *)v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v29, &v57);
        v26 = 2LL;
      }
      else
      {
        *v29 = v23 + 1;
        v4[1] += v26;
      }
      v30 = (_WORD *)v4[1];
      v31 = v26 + v23;
      LOWORD(v57) = v26 + v23;
      if ( v30 == (_WORD *)v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v30, &v57);
        v26 = 2LL;
      }
      else
      {
        *v30 = v26 + v23;
        v4[1] += v26;
      }
      v32 = (_WORD *)v4[1];
      LOWORD(v57) = v23;
      if ( v32 == (_WORD *)v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v32, &v57);
        v26 = 2LL;
      }
      else
      {
        *v32 = v23;
        v4[1] += v26;
      }
      v33 = (_WORD *)v4[1];
      LOWORD(v57) = v31;
      if ( v33 == (_WORD *)v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v33, &v57);
        v26 = 2LL;
      }
      else
      {
        *v33 = v31;
        v4[1] += v26;
      }
      v34 = (_WORD *)v4[1];
      LOWORD(v57) = v23 + 3;
      if ( v34 == (_WORD *)v4[2] )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v4, v34, &v57);
      }
      else
      {
        *v34 = v23 + 3;
        v4[1] += v26;
      }
      v18 = v72;
      v35 = (__m128)HIDWORD(v77[0]);
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)LODWORD(v77[0]), (__m128)HIDWORD(v77[0])).m128_u32[0],
        (unsigned int)v74,
        *((_DWORD *)v20 + 6),
        (_DWORD)v60 + v63 + v59,
        v72 + v63 + v58);
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)LODWORD(v77[1]), v35).m128_u32[0],
        (unsigned int)v74,
        *((_DWORD *)v20 + 6),
        (_DWORD)v60 + v64 + v59,
        v18 + v64 + v58);
      v36 = (__m128)HIDWORD(v77[1]);
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)LODWORD(v77[0]), (__m128)HIDWORD(v77[1])).m128_u32[0],
        (unsigned int)v74,
        *((_DWORD *)v20 + 6),
        (_DWORD)v60 + v59,
        v18 + v58);
      CreateMegaRectVertex(
        _mm_unpacklo_ps((__m128)LODWORD(v77[1]), v36).m128_u32[0],
        (unsigned int)v74,
        *((_DWORD *)v20 + 6),
        (_DWORD)v60 + v65 + v59,
        v18 + v65 + v58);
      v23 += 4;
      v58 += v66;
      v59 += v66;
      v22 = ++v62;
    }
    while ( v62 < v12 );
    v57 = v25;
    v7 = v61;
  }
  v37 = *(_DWORD *)(v67 + 4);
  v74[0] = *(_DWORD *)v67;
  v38 = *(_DWORD *)((int)(2 * v7) + v67);
  v74[1] = v37;
  v39 = *(_DWORD *)((int)(2 * v7) + v67 + 4);
  v75 = v38;
  v76 = v39;
  v40 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v74);
  v41 = *(CMegaRectBatchCommand **)v20;
  v61 = 0LL;
  v77[1] = 0LL;
  CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved += (int)v40 - v42;
  v77[0] = (__int64)&v61;
  v78 = 1;
  v67 = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  Primitive = CMegaRectBatchCommand::GetPrimitive(v41);
  v44 = *v4;
  v45 = *((_BYTE *)Primitive + 104);
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v74, (v4[1] - *v4) >> 1);
  if ( *(_QWORD *)v74 == -1LL || !v44 && *(_QWORD *)v74 )
  {
    gsl::details::terminate(v46);
    __debugbreak();
  }
  v47 = *((_DWORD *)v20 + 6);
  v72 = *(_QWORD *)v74;
  v76 = v69[0];
  *(_QWORD *)v69 = v60;
  v71 = v76;
  LOBYTE(v56) = v45;
  *(_QWORD *)v74 = v18;
  v75 = v7;
  v70 = v7;
  v73 = v44;
  v49 = CDrawListPrimitive::Create((int)v69, (int)v74, v47, (size_t)&v67, v56, (__int64)&v77[1]);
  if ( v78 )
  {
    v50 = *(_QWORD *)v77[0];
    *(_QWORD *)v77[0] = v77[1];
    if ( v50 )
      std::default_delete<CDrawListPrimitive>::operator()();
  }
  if ( v49 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v49, 0x1A2u, 0LL);
  else
    CMegaRectBatchCommand::SetMegaRectPrimitive(*(_QWORD *)v20, &v61);
  if ( v61 )
    std::default_delete<CDrawListPrimitive>::operator()();
  return (unsigned int)v49;
}
