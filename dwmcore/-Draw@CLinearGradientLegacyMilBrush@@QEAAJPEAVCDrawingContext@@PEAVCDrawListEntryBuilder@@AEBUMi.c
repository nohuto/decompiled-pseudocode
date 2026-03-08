/*
 * XREFs of ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@@Z @ 0x18021B06C
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800951C0 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18004A77C (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C160 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18007E788 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18007EFB0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094528 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180094614 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800D3A9C (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800D5814 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x1800F9B40 (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x18021B560 (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 *     ?GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z @ 0x18021B828 (-GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::Draw(
        CLinearGradientLegacyMilBrush *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        const struct MilRectF *a4)
{
  __int64 v7; // rcx
  double v8; // xmm1_8
  double v9; // xmm2_8
  float v10; // xmm0_4
  float v11; // xmm0_4
  __int128 v12; // xmm1
  float v13; // xmm0_4
  float v14; // xmm0_4
  int v15; // eax
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdi
  __int64 v19; // rcx
  const __m128i *v20; // rbx
  __int64 v21; // rcx
  __m128 v22; // xmm1
  __int64 v23; // rcx
  __m128 v24; // xmm1
  __int64 v25; // rcx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // xmm0_4
  int v31; // xmm1_4
  int v32; // xmm2_4
  CGeometryOnlyDrawListBrush *v33; // rcx
  int v34; // xmm0_4
  struct D2D_SIZE_F v35; // rax
  __int64 v36; // rcx
  int DrawList; // eax
  __int64 v38; // r9
  int v39; // r9d
  unsigned int v41; // [rsp+20h] [rbp-E0h]
  _DWORD v42[2]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v43[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v44[2]; // [rsp+70h] [rbp-90h] BYREF
  int v45; // [rsp+80h] [rbp-80h]
  int v46; // [rsp+CCh] [rbp-34h]
  char v47; // [rsp+D0h] [rbp-30h]
  struct D2D_SIZE_F v48[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct CGeometryOnlyDrawListBrush *v49[2]; // [rsp+F0h] [rbp-10h] BYREF
  char v50; // [rsp+100h] [rbp+0h]
  _BYTE v51[8]; // [rsp+110h] [rbp+10h] BYREF
  int v52; // [rsp+118h] [rbp+18h]
  int v53; // [rsp+11Ch] [rbp+1Ch]

  v48[0].width = *((float *)a4 + 2) - *(float *)a4;
  v48[0].height = *((float *)a4 + 3) - *((float *)a4 + 1);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v51, a2, v48);
  v46 = 257;
  v44[1] = 0LL;
  v45 = 0;
  v47 = 0;
  memset(v43, 0, sizeof(v43));
  CGradientLegacyMilBrush::GetGradientColorData(this, (struct CGradientColorData *)v43);
  *(_OWORD *)v49 = *(_OWORD *)a4;
  if ( operator!=((float *)this + 42, (float *)v49) || *((_BYTE *)this + 216) )
  {
    v7 = *((_QWORD *)this + 23);
    v8 = *((double *)this + 18);
    v9 = *((double *)this + 20);
    v10 = *((double *)this + 17);
    *(float *)v42 = v10;
    v11 = v8;
    v12 = *(_OWORD *)((char *)this + 152);
    *(float *)&v42[1] = v11;
    v13 = *(double *)&v12;
    *(float *)v49 = v13;
    v14 = v9;
    *((float *)v49 + 1) = v14;
    if ( v7 )
    {
      CPtrArrayBase::Remove((CPtrArrayBase *)(v7 + 24), (unsigned __int64 *)this);
      *((_QWORD *)this + 23) = 0LL;
    }
    v15 = CLinearGradientLegacyMilBrush::EnsureDrawlistBrush(this);
    v17 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x3Cu, 0LL);
      goto LABEL_23;
    }
    ((void (__fastcall *)(_QWORD, void *, _DWORD *))xmmword_1803E1970)(
      *((_QWORD *)this + 24) + SDWORD2(xmmword_1803E1970),
      &CLinearGradientBrush::sc_StartPoint,
      v42);
    ((void (__fastcall *)(_QWORD, void *, struct CGeometryOnlyDrawListBrush **))xmmword_1803E19A8)(
      *((_QWORD *)this + 24) + SDWORD2(xmmword_1803E19A8),
      &CLinearGradientBrush::sc_EndPoint,
      v49);
    v18 = *((_QWORD *)&v43[1] + 1);
    v19 = *((_QWORD *)this + 25) + SDWORD2(xmmword_1803E12F0);
    v48[0].width = *(FLOAT *)*((_DWORD **)&v43[1] + 1);
    ((void (__fastcall *)(__int64, void *, struct D2D_SIZE_F *))xmmword_1803E12F0)(
      v19,
      &CColorGradientStop::sc_Offset,
      v48);
    v20 = *(const __m128i **)&v43[0];
    v21 = *((_QWORD *)this + 25) + SDWORD2(xmmword_1803E1328);
    v22 = (__m128)_mm_loadu_si128(*(const __m128i **)&v43[0]);
    LODWORD(v48[0].width) = v22.m128_i32[0];
    LODWORD(v48[1].height) = _mm_shuffle_ps(v22, v22, 255).m128_u32[0];
    LODWORD(v48[0].height) = _mm_shuffle_ps(v22, v22, 85).m128_u32[0];
    LODWORD(v48[1].width) = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
    ((void (__fastcall *)(__int64, void *, struct D2D_SIZE_F *))xmmword_1803E1328)(
      v21,
      &CColorGradientStop::sc_Color,
      v48);
    v23 = *((_QWORD *)this + 26) + SDWORD2(xmmword_1803E12F0);
    v48[0].width = *(FLOAT *)(v18 + 4);
    ((void (__fastcall *)(__int64, void *, struct D2D_SIZE_F *))xmmword_1803E12F0)(
      v23,
      &CColorGradientStop::sc_Offset,
      v48);
    v24 = (__m128)_mm_loadu_si128(v20 + 1);
    v25 = *((_QWORD *)this + 26) + SDWORD2(xmmword_1803E1328);
    LODWORD(v48[0].width) = v24.m128_i32[0];
    LODWORD(v48[1].height) = _mm_shuffle_ps(v24, v24, 255).m128_u32[0];
    LODWORD(v48[0].height) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
    LODWORD(v48[1].width) = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
    ((void (__fastcall *)(__int64, void *, struct D2D_SIZE_F *))xmmword_1803E1328)(
      v25,
      &CColorGradientStop::sc_Color,
      v48);
    Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(*((_QWORD *)this + 24) + 24LL));
    v28 = CPtrArrayBase::InsertAt(v27, (unsigned __int64)this, Count);
    v17 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x4Cu, 0LL);
      goto LABEL_23;
    }
    *((_QWORD *)this + 23) = *((_QWORD *)this + 24);
    v30 = *((_DWORD *)a4 + 1);
    v31 = *((_DWORD *)a4 + 2);
    v32 = *((_DWORD *)a4 + 3);
    *((_DWORD *)this + 42) = *(_DWORD *)a4;
    *((_DWORD *)this + 43) = v30;
    *((_DWORD *)this + 44) = v31;
    *((_DWORD *)this + 45) = v32;
    *((_BYTE *)this + 216) = 0;
  }
  v48[0] = 0LL;
  v49[0] = (struct CGeometryOnlyDrawListBrush *)v48;
  v49[1] = 0LL;
  v50 = 1;
  v17 = CGeometryOnlyDrawListBrush::Create(&v49[1]);
  if ( v50 )
  {
    v33 = *(CGeometryOnlyDrawListBrush **)v49[0];
    *(_QWORD *)v49[0] = v49[1];
    if ( v33 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v33, 1);
  }
  if ( v17 < 0 )
  {
    v39 = v17;
    v41 = 88;
  }
  else
  {
    v34 = v53;
    v35 = v48[0];
    v49[0] = 0LL;
    LODWORD(v49[1]) = v52;
    *(_BYTE *)(*(_QWORD *)v48 + 52LL) = 1;
    *(_DWORD *)(*(_QWORD *)&v35 + 48LL) = 50529027;
    HIDWORD(v49[1]) = v34;
    *(_OWORD *)(*(_QWORD *)&v35 + 32LL) = *(_OWORD *)v49;
    v36 = *((_QWORD *)this + 24);
    v44[0] = v48[0];
    DrawList = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v36 + 312LL))(v36, v51);
    v17 = DrawList;
    if ( DrawList < 0 )
    {
      v41 = 96;
    }
    else
    {
      DrawList = CBrushDrawListGenerator::GenerateDrawList(
                   (CBrushDrawListGenerator *)v51,
                   (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v44,
                   a3,
                   v38);
      v17 = DrawList;
      if ( DrawList >= 0 )
        goto LABEL_19;
      v41 = 97;
    }
    v39 = DrawList;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v33, 0LL, 0, v39, v41, 0LL);
LABEL_19:
  if ( v48[0] )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(*(CGeometryOnlyDrawListBrush **)v48, 1);
LABEL_23:
  std::vector<float>::_Tidy((__int64)&v43[1] + 8);
  if ( *(_QWORD *)&v43[0] )
    std::_Deallocate<16,0>(*(void **)&v43[0], (*(_QWORD *)&v43[1] - *(_QWORD *)&v43[0]) & 0xFFFFFFFFFFFFFFF0uLL);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v51);
  return (unsigned int)v17;
}
