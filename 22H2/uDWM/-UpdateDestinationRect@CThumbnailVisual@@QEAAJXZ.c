/*
 * XREFs of ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000E33C
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180010F60 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z @ 0x18000D8D0 (-Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18000E2A4 (-Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18000E5C0 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180011540 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180011894 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800118B8 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180014E98 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001FEE0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x1800C0324 (--$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateDestinationRect(CThumbnailVisual *this)
{
  unsigned int v2; // edi
  bool IsImmersiveIconic; // r15
  bool IsThumbnailCVIStatic; // al
  __int64 v5; // rdx
  __m128i v6; // xmm6
  bool v7; // r9
  char v8; // r13
  int v9; // esi
  int v10; // r14d
  CRectResourceProxy *v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  signed int v14; // eax
  __m128i v15; // xmm2
  signed int v16; // eax
  double v17; // xmm2_8
  __m128i v18; // xmm1
  double v19; // xmm1_8
  int v20; // eax
  __int128 v21; // xmm0
  int v22; // r12d
  int v23; // r15d
  int v24; // r14d
  int v25; // esi
  struct CRectangleGeometryProxy **v26; // rbx
  int v27; // eax
  _DWORD *v29; // r8
  int v30; // ecx
  __int32 v31; // eax
  int v32; // ecx
  int v33; // ecx
  __int32 v34; // eax
  int v35; // ecx
  int v36; // eax
  __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // rax
  int v40; // eax
  int v41; // ecx
  float v42; // xmm1_4
  __int64 v43; // rax
  unsigned int v44; // eax
  float v45; // xmm2_4
  __int64 v46; // rcx
  __m128i v47; // xmm0
  int v48; // eax
  __int64 v49; // rcx
  CRectResourceProxy *v50; // rcx
  int v51; // eax
  __int64 v52; // rdx
  int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // ecx
  signed int v57; // edx
  int v58; // ecx
  __m128i v59; // xmm2
  signed int v60; // edx
  int RectangleGeometry; // eax
  int v62; // edx
  int v63; // r8d
  int v64; // ecx
  int v65; // r8d
  int v66; // ecx
  __int128 v67; // [rsp+38h] [rbp-29h] BYREF
  __m128i v68; // [rsp+48h] [rbp-19h] BYREF
  int v69[4]; // [rsp+58h] [rbp-9h] BYREF
  float v70; // [rsp+68h] [rbp+7h] BYREF
  float v71; // [rsp+6Ch] [rbp+Bh]
  float v72; // [rsp+70h] [rbp+Fh]
  float v73; // [rsp+74h] [rbp+13h]

  v2 = 0;
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic(this);
  IsThumbnailCVIStatic = CThumbnailVisual::_IsThumbnailCVIStatic(this);
  v5 = *((_QWORD *)this + 46);
  v6 = 0LL;
  v7 = IsThumbnailCVIStatic;
  v68 = 0LL;
  v8 = *(_BYTE *)(v5 + 34);
  if ( !v8 )
  {
    if ( v5 )
    {
      v29 = *(_DWORD **)(v5 + 16);
      if ( v29 )
      {
        v30 = 0;
        v68.m128i_i32[0] = -*((_DWORD *)this + 28);
        v68.m128i_i32[1] = -*((_DWORD *)this + 29);
        if ( v29[47] - v29[45] >= 0 )
          v30 = v29[47] - v29[45];
        v31 = v68.m128i_i32[2];
        v32 = v30 - v29[62] - v29[61];
        if ( v32 > 0 )
          v31 = v32;
        v33 = 0;
        v68.m128i_i32[2] = v31;
        if ( v29[48] - v29[46] >= 0 )
          v33 = v29[48] - v29[46];
        v34 = v68.m128i_i32[3];
        v35 = v33 - v29[64] - v29[63];
        if ( v35 > 0 )
          v34 = v35;
        v68.m128i_i32[3] = v34;
        v6 = _mm_loadu_si128(&v68);
      }
    }
  }
  if ( v7 )
  {
    *(__m128i *)((char *)this + 532) = v6;
    return v2;
  }
  if ( *((_QWORD *)this + 50) && *((_QWORD *)this + 51) )
  {
    v9 = *((_DWORD *)this + 30);
    v10 = *((_DWORD *)this + 31);
    *((_QWORD *)&v67 + 1) = __PAIR64__(v10, v9);
    *(_QWORD *)&v67 = 0LL;
    if ( !v8 && v5 && *(_QWORD *)(v5 + 16) && (*(_DWORD *)(v5 + 36) & 0x100000) != 0 && *((_BYTE *)this + 474) )
      CThumbnailVisual::SetDirtyFlags(this, 0x10000u);
    if ( IsImmersiveIconic )
    {
      v36 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
      v2 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x3F1u);
        return v2;
      }
      v37 = *((_QWORD *)this + 47);
      v38 = 0;
      v39 = *(_QWORD *)(v37 + 376);
      if ( v39 )
        v38 = *(_DWORD *)(v39 + 120);
      v40 = v9 / 2 - v38 / 2;
      v41 = 0;
      v42 = (float)v40;
      v70 = (float)v40;
      v43 = *(_QWORD *)(v37 + 376);
      if ( v43 )
        v41 = *(_DWORD *)(v43 + 124);
      v44 = 0;
      v45 = (float)(v10 / 2 - v41 / 2);
      v71 = v45;
      v46 = *(_QWORD *)(v37 + 376);
      if ( v46 )
        v44 = *(_DWORD *)(v46 + 120);
      v47 = _mm_cvtsi32_si128(v44);
      v48 = 0;
      v72 = _mm_cvtepi32_ps(v47).m128_f32[0] + v42;
      v49 = *(_QWORD *)(v37 + 376);
      if ( v49 )
        v48 = *(_DWORD *)(v49 + 124);
      v50 = (CRectResourceProxy *)*((_QWORD *)this + 50);
      v73 = (float)v48 + v45;
      v51 = CRectResourceProxy::Update(v50, (const struct MilRectF *)&v70);
      v2 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v51, 0x3F9u);
        return v2;
      }
    }
    else
    {
      v11 = (CRectResourceProxy *)*((_QWORD *)this + 50);
      v70 = 0.0;
      v71 = 0.0;
      v72 = (float)v9 + 0.0;
      v73 = (float)v10 + 0.0;
      v12 = CRectResourceProxy::Update(v11, (const struct MilRectF *)&v70);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x404u);
        return v2;
      }
    }
    v13 = *((_QWORD *)this + 58);
    if ( v13 && *((_BYTE *)this + 474) )
    {
LABEL_20:
      if ( v8 )
        *(_OWORD *)v69 = v67;
      else
        IntersectRectT<MilPointAndSizeL>(v69, &v67, &v68);
      if ( CThumbnailVisual::_HasBorder(this) && *((_QWORD *)this + 53) )
      {
        v25 = v69[3];
        v24 = v69[2];
        v23 = v69[1];
        v22 = v69[0];
        RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                              v69[0],
                              v69[1],
                              v69[2],
                              v69[3],
                              (struct CRectangleGeometryProxy **)this + 53);
        v2 = RectangleGeometry;
        if ( RectangleGeometry < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x43Au);
          return v2;
        }
        v62 = *((_DWORD *)this + 124);
        v63 = *((_DWORD *)this + 30);
        v64 = *((_DWORD *)this + 31);
        LODWORD(v67) = v62;
        DWORD1(v67) = v62;
        v65 = v63 - 2 * v62;
        v66 = v64 - 2 * v62;
        *((_QWORD *)&v67 + 1) = __PAIR64__(v66, v65);
        if ( v65 <= 0 || v66 <= 0 )
          goto LABEL_24;
        if ( v8 )
        {
          v22 = v62;
          v23 = v62;
          v24 = v65;
          v25 = v66;
          goto LABEL_24;
        }
        IntersectRectT<MilPointAndSizeL>(v69, &v67, &v68);
      }
      v22 = v69[0];
      v23 = v69[1];
      v24 = v69[2];
      v25 = v69[3];
LABEL_24:
      *(_OWORD *)((char *)this + 500) = v67;
      *(__m128i *)((char *)this + 532) = v6;
      v26 = (struct CRectangleGeometryProxy **)((char *)this + 416);
      if ( *v26 )
      {
        v27 = ResourceHelper::CreateRectangleGeometry(v22, v23, v24, v25, v26);
        v2 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x453u);
      }
      return v2;
    }
    *(_OWORD *)v69 = 0LL;
    if ( IsImmersiveIconic )
    {
      v52 = *((_QWORD *)this + 47);
      v53 = 0;
      v54 = *(_QWORD *)(v52 + 376);
      if ( v54 )
        v53 = *(_DWORD *)(v54 + 120);
      v16 = 0;
      v17 = (double)v53;
      *(double *)v69 = (double)v53;
      v55 = *(_QWORD *)(v52 + 376);
      if ( v55 )
        v16 = *(_DWORD *)(v55 + 124);
    }
    else
    {
      if ( v13 )
      {
        v56 = 0;
        v57 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 45);
        if ( *((_DWORD *)this + 78) - *((_DWORD *)this + 76) >= 0 )
          v56 = *((_DWORD *)this + 78) - *((_DWORD *)this + 76);
        if ( v56 < v57 )
          v57 = v56;
        v58 = 0;
        if ( *((_DWORD *)this + 79) - *((_DWORD *)this + 77) >= 0 )
          v58 = *((_DWORD *)this + 79) - *((_DWORD *)this + 77);
        v59 = _mm_cvtsi32_si128(v57);
        v60 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 46);
        *(_QWORD *)&v17 = *(_OWORD *)&_mm_cvtepi32_pd(v59);
        if ( v58 < v60 )
          v60 = v58;
        v18 = _mm_cvtsi32_si128(v60);
        *(double *)v69 = v17;
LABEL_17:
        *(_QWORD *)&v19 = *(_OWORD *)&_mm_cvtepi32_pd(v18);
        *(double *)&v69[2] = v19;
        if ( !*((_BYTE *)this + 474)
          || (*((double *)this + 60) != v17 || *((double *)this + 61) != v19)
          && (*(_DWORD *)(*((_QWORD *)this + 46) + 36LL) & 0x100000) == 0 )
        {
          v20 = CSizeResourceProxy::Update(*((CSizeResourceProxy **)this + 51), (const struct MilSizeD *)v69);
          v2 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x424u);
            return v2;
          }
          v21 = *(_OWORD *)v69;
          *((_BYTE *)this + 474) = 1;
          *((_OWORD *)this + 30) = v21;
        }
        goto LABEL_20;
      }
      v14 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 45);
      if ( v9 < v14 )
        v14 = v9;
      v15 = _mm_cvtsi32_si128(v14);
      v16 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 46);
      *(_QWORD *)&v17 = *(_OWORD *)&_mm_cvtepi32_pd(v15);
      if ( v10 < v16 )
        v16 = v10;
      *(double *)v69 = v17;
    }
    v18 = _mm_cvtsi32_si128(v16);
    goto LABEL_17;
  }
  return v2;
}
