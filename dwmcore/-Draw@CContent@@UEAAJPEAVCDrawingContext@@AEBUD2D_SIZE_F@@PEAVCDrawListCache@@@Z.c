__int64 __fastcall CContent::Draw(
        CContent *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // rax
  struct CDrawListCache *v5; // rbx
  const struct D2D_SIZE_F *v8; // r12
  int v9; // r13d
  char *v11; // r15
  int v12; // eax
  int v13; // xmm6_4
  int v14; // eax
  bool v15; // r12
  void *v16; // r15
  ClipPlaneIterator *v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // esi
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  CComposition *v26; // r10
  __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int i; // eax
  int v31; // eax
  unsigned int v32; // ecx
  __int64 v33; // rsi
  float v34; // xmm1_4
  float v35; // xmm0_4
  __int64 v36; // rax
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // r10
  __int64 TopByReference; // rax
  FLOAT v42; // xmm1_4
  __int64 v43; // rax
  int v44; // r9d
  int updated; // eax
  unsigned int v46; // ecx
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int ActiveLightCount; // eax
  unsigned int v50; // ecx
  __m128 v51; // xmm2
  float width; // xmm0_4
  FLOAT height; // xmm1_4
  int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // [rsp+28h] [rbp-E0h]
  struct CDrawListCache *v57; // [rsp+38h] [rbp-D0h] BYREF
  const struct D2D_SIZE_F *v58; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v59; // [rsp+48h] [rbp-C0h]
  __int128 v60; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+60h] [rbp-A8h]
  __int64 v62; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v63; // [rsp+70h] [rbp-98h]
  __int64 v64; // [rsp+78h] [rbp-90h]
  _OWORD v65[4]; // [rsp+80h] [rbp-88h] BYREF
  int v66; // [rsp+C0h] [rbp-48h]
  _OWORD v67[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v68; // [rsp+108h] [rbp+0h]
  _BYTE v69[64]; // [rsp+118h] [rbp+10h] BYREF
  int v70; // [rsp+158h] [rbp+50h]
  __int64 v71; // [rsp+168h] [rbp+60h] BYREF
  float v72; // [rsp+170h] [rbp+68h]
  float v73; // [rsp+174h] [rbp+6Ch]
  __int128 v74; // [rsp+178h] [rbp+70h] BYREF

  v4 = *((_QWORD *)this - 10);
  v5 = 0LL;
  v8 = a3;
  v9 = 0;
  v11 = (char *)this - 96;
  v58 = a3;
  v57 = 0LL;
  if ( !*(_DWORD *)(v4 + 1112)
    || (*(unsigned __int8 (__fastcall **)(char *, __int64))(*(_QWORD *)v11 + 56LL))((char *)this - 96, 129LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(char *, __int64))(*(_QWORD *)v11 + 56LL))(v11, 129LL)
      && CComposition::IsTextureMemoryHeatMapEnabled(*((CComposition **)this - 10)) )
    {
      goto LABEL_18;
    }
    if ( a4 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(char *, struct CDrawListCache *, struct CDrawingContext *, const struct D2D_SIZE_F *, _QWORD))(*(_QWORD *)v11 + 224LL))(
             v11,
             a4,
             a2,
             v8,
             0LL) )
      {
        CDrawListCache::Invalidate(a4);
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v57);
      v24 = CDrawListCache::InternalCreate(1, &v57);
      v20 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, &dword_180338CB8, 3u, v24, 0x7Eu, 0LL);
        v5 = v57;
        goto LABEL_25;
      }
      v5 = v57;
      a4 = v57;
    }
    if ( !*((_QWORD *)a4 + 4) )
    {
      v22 = (*(__int64 (__fastcall **)(char *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)v11 + 232LL))(
              v11,
              a2,
              v8,
              a4);
      v20 = v22;
      if ( v22 < 0 )
      {
        v56 = 133;
LABEL_58:
        v44 = v22;
        goto LABEL_59;
      }
    }
    v12 = *((_DWORD *)a2 + 812);
    v13 = v12 ? *(_DWORD *)(*((_QWORD *)a2 + 408) + 4LL * (unsigned int)(v12 - 1)) : (int)FLOAT_1_0;
    if ( COERCE_FLOAT(v13 & _xmm) < 0.0000011920929 )
    {
LABEL_18:
      if ( !g_ShowLightingHeatmap )
        goto LABEL_19;
      ActiveLightCount = CDrawingContext::GetActiveLightCount(a2);
      if ( !ActiveLightCount )
        goto LABEL_19;
      v50 = 3;
      v71 = 0LL;
      v62 = 1LL;
      if ( ActiveLightCount < 3 )
        v50 = ActiveLightCount;
      v51 = xmmword_1803B49B0[v50];
      v63 = &v71;
      LODWORD(v74) = v51.m128_i32[0];
      DWORD1(v74) = _mm_shuffle_ps(v51, v51, 85).m128_u32[0];
      width = v8->width;
      DWORD2(v74) = _mm_shuffle_ps(v51, v51, 170).m128_u32[0];
      height = v8->height;
      v72 = width;
      v73 = height;
      HIDWORD(v74) = _mm_shuffle_ps(v51, v51, 255).m128_u32[0];
      v54 = CDrawingContext::FillRectanglesWithSolidColor(a2, &v62, &v74);
      v20 = v54;
      if ( v54 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v55, &dword_180338CB8, 3u, v54, 0xA0u, 0LL);
      else
LABEL_19:
        v20 = 0;
LABEL_20:
      v9 = 0;
      goto LABEL_21;
    }
    v14 = *((_DWORD *)a2 + 100);
    v15 = 0;
    if ( v14 )
      v16 = (void *)(*((_QWORD *)a2 + 52) + 68LL * (unsigned int)(v14 - 1));
    else
      v16 = &CMILMatrix::Identity;
    if ( *((_QWORD *)a2 + 428) )
    {
      updated = CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(a2);
      v20 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, updated, 0x3ABu, 0LL);
LABEL_35:
        if ( v20 != -2003304441 && v20 < 0 )
        {
          v44 = v20;
          v56 = 136;
LABEL_59:
          MilInstrumentationCheckHR_MaybeFailFast(v23, &dword_180338CB8, 3u, v44, v56, 0LL);
          goto LABEL_21;
        }
LABEL_17:
        v8 = v58;
        goto LABEL_18;
      }
      v17 = (struct CDrawingContext *)((char *)a2 + 3432);
      v15 = *((_BYTE *)a2 + 3432) == 0;
    }
    else
    {
      v17 = (struct CDrawingContext *)((char *)a2 + 3432);
    }
    if ( v15 )
      goto LABEL_64;
    while ( 1 )
    {
      v18 = CDrawListCache::Render(a4, a2, v16);
      v20 = v18;
      if ( v18 < 0 )
        break;
      if ( !v15 || !ClipPlaneIterator::HasMoreClipPlanes((struct CDrawingContext *)((char *)a2 + 3432)) )
        goto LABEL_17;
      v17 = (struct CDrawingContext *)((char *)a2 + 3432);
LABEL_64:
      v47 = ClipPlaneIterator::UpdateClippingPlanes(v17);
      v20 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x3B7u, 0LL);
        goto LABEL_35;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3BDu, 0LL);
    goto LABEL_35;
  }
  if ( !CComposition::IsTextureMemoryHeatMapEnabled(*((CComposition **)this - 10)) )
  {
    if ( CComposition::IsOverdrawHeatMapEnabled(v26) )
    {
      TopByReference = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v40 + 1112);
      if ( (unsigned __int8)CContent::IsIncludedInOverdrawContentKinds(v11, *(unsigned int *)(TopByReference + 20), a2) )
      {
        v42 = v8->height;
        v72 = v8->width;
        v73 = v42;
        v71 = 0LL;
        v43 = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference((char *)g_pComposition + 1112);
        v62 = 1LL;
        v63 = &v71;
        v22 = CDrawingContext::FillRectanglesWithSolidColor(a2, &v62, v43 + 4);
        v20 = v22;
        if ( v22 < 0 )
        {
          v56 = 105;
          goto LABEL_58;
        }
      }
    }
    goto LABEL_18;
  }
  v27 = *(_QWORD *)v11;
  v60 = 0LL;
  v61 = 0LL;
  v28 = (*(__int64 (__fastcall **)(char *, const struct D2D_SIZE_F *, __int128 *))(v27 + 272))(v11, v8, &v60);
  v20 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, &dword_180338CB8, 3u, v28, 0x42u, 0LL);
    v39 = v60;
    if ( !(_QWORD)v60 )
      goto LABEL_21;
  }
  else
  {
    for ( i = 0; ; i = v59 + 1 )
    {
      v59 = i;
      if ( i >= 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)&v60 + 1) - v60) >> 3) )
      {
        if ( (_QWORD)v60 )
          std::_Deallocate<16,0>(v60, 8 * ((v61 - (__int64)v60) >> 3));
        goto LABEL_18;
      }
      v70 = 0;
      v64 = 5LL * i;
      CMILMatrix::CMILMatrix((CMILMatrix *)v65, (const struct D2D_MATRIX_3X2_F *)(v60 + 40LL * i));
      v67[0] = v65[0];
      v68 = v66;
      v67[1] = v65[1];
      v67[2] = v65[2];
      v67[3] = v65[3];
      v31 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v67, 1, 1);
      v20 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, &dword_180338CB8, 3u, v31, 0x4Cu, 0LL);
        if ( (_QWORD)v60 )
          std::_Deallocate<16,0>(v60, 8 * ((v61 - (__int64)v60) >> 3));
        goto LABEL_20;
      }
      v33 = v64;
      v9 = 1;
      v74 = *(_OWORD *)(v60 + 8 * v64 + 24);
      CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 400), (struct CMILMatrix *)v69);
      CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)v69, (float *)&v58, (float *)&v57);
      v34 = *(float *)(v60 + 8 * v33 + 36) - *(float *)(v60 + 8 * v33 + 28);
      v35 = *(float *)(v60 + 8 * v33 + 32) - *(float *)(v60 + 8 * v33 + 24);
      v71 = 0LL;
      v73 = v34 / *(float *)&v57;
      v72 = v35 / *(float *)&v58;
      v36 = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference((char *)g_pComposition + 1112);
      v62 = 1LL;
      v63 = &v71;
      v37 = CDrawingContext::FillRectanglesWithSolidColor(a2, &v62, v36 + 4);
      v20 = v37;
      if ( v37 < 0 )
        break;
      CDrawingContext::PopTransformInternal(a2, 1);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v38, &dword_180338CB8, 3u, v37, 0x5Au, 0LL);
    v39 = v60;
    if ( !(_QWORD)v60 )
      goto LABEL_21;
  }
  std::_Deallocate<16,0>(v39, 8 * ((v61 - v39) >> 3));
LABEL_21:
  if ( a4 && (*((_DWORD *)a4 + 22) & 0x100) != 0 )
    CDrawListCache::Invalidate(a4);
  for ( ; v9; --v9 )
    CDrawingContext::PopTransformInternal(a2, 1);
LABEL_25:
  if ( v5 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v5);
  return (unsigned int)v20;
}
