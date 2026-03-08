/*
 * XREFs of ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180226640
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18002EEE0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18002EF40 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18002FFF8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x180030870 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180059E30 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C160 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18007CF6C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18007E788 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18007EFB0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094528 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800945A4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180094614 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800946C0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18009598C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800B2368 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800B2BDC (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x1800C5170 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180117650 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x180225F30 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x180226ED8 (-GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z.c)
 */

__int64 __fastcall CDropShadow::GenerateDrawList(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v8; // esi
  float Radius; // xmm6_4
  struct CVisual *v10; // rax
  float *EffectiveShadowIntermediates; // rax
  struct CDrawingContext *v12; // rdx
  float v13; // xmm2_4
  float v14; // xmm2_4
  int v15; // xmm1_4
  struct CDrawListBrush *v16; // rcx
  int ShadowOpacityBrush; // ebx
  __int64 (__fastcall ***v18)(_QWORD, __int64); // rax
  __int64 v19; // rcx
  FLOAT width; // xmm1_4
  float v21; // xmm5_4
  float height; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm5_4
  float v25; // xmm10_4
  float v26; // xmm7_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm6_4
  FLOAT v30; // xmm4_4
  float v31; // xmm6_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  CGeometryOnlyDrawListBrush *v34; // rcx
  CGeometryOnlyDrawListBrush *v35; // rax
  __int128 v36; // xmm0
  CNineGridDrawListBrush *v37; // rcx
  float v38; // xmm0_4
  __int64 v39; // r9
  int DrawList; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  CGeometryOnlyDrawListBrush *v44; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_RECT_F v45; // [rsp+38h] [rbp-C8h] BYREF
  char v46; // [rsp+48h] [rbp-B8h]
  struct CDrawListBrush *v47[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v48; // [rsp+60h] [rbp-A0h]
  __int128 v49; // [rsp+68h] [rbp-98h] BYREF
  char v50; // [rsp+78h] [rbp-88h]
  CNineGridDrawListBrush *v51; // [rsp+80h] [rbp-80h] BYREF
  __int128 v52; // [rsp+90h] [rbp-70h] BYREF
  int v53; // [rsp+A0h] [rbp-60h]
  int v54; // [rsp+ECh] [rbp-14h]
  char v55; // [rsp+F0h] [rbp-10h]
  _BYTE v56[64]; // [rsp+100h] [rbp+0h] BYREF
  int v57; // [rsp+140h] [rbp+40h]
  _BYTE v58[16]; // [rsp+150h] [rbp+50h] BYREF
  int v59; // [rsp+160h] [rbp+60h]
  __int128 v60; // [rsp+164h] [rbp+64h]
  _BYTE v61[4480]; // [rsp+1A0h] [rbp+A0h] BYREF

  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v58, a2, a3);
  v54 = 257;
  v53 = 0;
  v52 = 0LL;
  v55 = 0;
  v8 = 0;
  v51 = 0LL;
  Radius = CDropShadow::GetRadius(this);
  v10 = (struct CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
  EffectiveShadowIntermediates = (float *)CDropShadow::GetEffectiveShadowIntermediates(this, v10);
  v13 = *((float *)this + 23) * EffectiveShadowIntermediates[16];
  if ( v13 >= 1.0 )
  {
    v60 = *(_OWORD *)((char *)this + 72);
  }
  else
  {
    v14 = v13 * *((float *)this + 21);
    v15 = *((_DWORD *)this + 19);
    LODWORD(v60) = *((_DWORD *)this + 18);
    DWORD2(v60) = *((_DWORD *)this + 20);
    *((float *)&v60 + 3) = v14;
    DWORD1(v60) = v15;
  }
  v44 = 0LL;
  v47[0] = (struct CDrawListBrush *)&v44;
  v47[1] = 0LL;
  v48 = 1;
  ShadowOpacityBrush = CDropShadow::ShadowIntermediates::CreateShadowOpacityBrush(
                         (CDropShadow::ShadowIntermediates *)EffectiveShadowIntermediates,
                         v12,
                         a3,
                         Radius,
                         &v47[1]);
  if ( v48 )
  {
    v16 = v47[1];
    v18 = *(__int64 (__fastcall ****)(_QWORD, __int64))v47[0];
    *(_QWORD *)v47[0] = v47[1];
    if ( v18 )
      std::default_delete<CDrawListBrush>::operator()((__int64)v16, v18);
  }
  if ( ShadowOpacityBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, &dword_1803B5248, 3u, ShadowOpacityBrush, 0x163u, 0LL);
    if ( v44 )
      std::default_delete<CDrawListBrush>::operator()(v42, (__int64 (__fastcall ***)(_QWORD, __int64))v44);
    goto LABEL_45;
  }
  if ( v44 )
  {
    CBrushDrawListGenerator::AttachInput((__int64)v58, 1u, (__int64 *)&v44);
    if ( v44 )
      std::default_delete<CDrawListBrush>::operator()(v19, (__int64 (__fastcall ***)(_QWORD, __int64))v44);
  }
  v57 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 400), (struct CMILMatrix *)v56);
  if ( COERCE_FLOAT(*((_DWORD *)this + 26) & _xmm) >= 0.0000011920929 && !CMILMatrix::ProducesUniformZ<1>((__int64)v56) )
    goto LABEL_36;
  width = a3->width;
  v47[0] = 0LL;
  LODWORD(v21) = *((_DWORD *)this + 25) ^ _xmm;
  height = a3->height;
  v47[1] = (struct CDrawListBrush *)__PAIR64__(LODWORD(height), LODWORD(width));
  v23 = v21 + *((float *)this + 28);
  v24 = v21 + *((float *)this + 30);
  v45.top = v23;
  v49 = *(_OWORD *)v47;
  v25 = 0.0 - Radius;
  v26 = 0.0 - Radius;
  v27 = *(float *)&v47[1] + Radius;
  v28 = height + Radius;
  v45.bottom = v24;
  LODWORD(v29) = *((_DWORD *)this + 24) ^ _xmm;
  *(_QWORD *)&v49 = __PAIR64__(LODWORD(v26), LODWORD(v25));
  v30 = v29 + *((float *)this + 27);
  v31 = v29 + *((float *)this + 29);
  *((_QWORD *)&v49 + 1) = __PAIR64__(LODWORD(v28), LODWORD(v27));
  v45.left = v30;
  v45.right = v31;
  if ( v30 < v25 )
    v45.left = v25;
  if ( v23 < v26 )
  {
    v45.top = v26;
    v23 = v26;
  }
  if ( v27 < v31 )
  {
    v45.right = v27;
    v31 = v27;
  }
  if ( v28 < v24 )
    v45.bottom = v28;
  if ( IsEmpty(&v45) )
    goto LABEL_36;
  v44 = 0LL;
  *(_QWORD *)&v45.right = 0LL;
  v46 = 1;
  *(float *)v47 = v32 - v25;
  *((float *)v47 + 1) = v23 - v26;
  *(float *)&v47[1] = v27 - v31;
  *((float *)&v47[1] + 1) = v28 - v33;
  *(_QWORD *)&v45.left = &v44;
  ShadowOpacityBrush = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v45.right);
  if ( v46 )
  {
    v34 = **(CGeometryOnlyDrawListBrush ***)&v45.left;
    **(_QWORD **)&v45.left = *(_QWORD *)&v45.right;
    if ( v34 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v34, 1);
  }
  if ( ShadowOpacityBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v34, &dword_1803B5248, 3u, ShadowOpacityBrush, 0x186u, 0LL);
LABEL_40:
    if ( v44 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v44, 1);
    goto LABEL_45;
  }
  v35 = v44;
  v36 = v49;
  *((_QWORD *)&v49 + 1) = 0LL;
  v50 = 1;
  *((_BYTE *)v44 + 52) = 1;
  *((_OWORD *)v35 + 2) = v36;
  *((_DWORD *)v35 + 12) = 50529027;
  *(_QWORD *)&v49 = &v51;
  *(_QWORD *)&v45.left = v44;
  v44 = 0LL;
  ShadowOpacityBrush = CNineGridDrawListBrush::Create(
                         (struct CNineGridDrawListBrush *)&v45,
                         (int)v47,
                         (int)v47,
                         1,
                         (CNineGridDrawListBrush **)&v49 + 1);
  if ( *(_QWORD *)&v45.left )
    std::default_delete<CDrawListBrush>::operator()(
      (__int64)v37,
      *(__int64 (__fastcall ****)(_QWORD, __int64))&v45.left);
  if ( v50 )
  {
    v37 = *(CNineGridDrawListBrush **)v49;
    *(_QWORD *)v49 = *((_QWORD *)&v49 + 1);
    if ( v37 )
      CNineGridDrawListBrush::`scalar deleting destructor'(v37, 1);
  }
  if ( ShadowOpacityBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v37, &dword_1803B5248, 3u, ShadowOpacityBrush, 0x18Eu, 0LL);
    goto LABEL_40;
  }
  LODWORD(v38) = *((_DWORD *)this + 26) & _xmm;
  *(_QWORD *)&v52 = v51;
  if ( v38 >= 0.0000011920929 )
    v8 = 128;
  if ( v44 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v44, 1);
LABEL_36:
  v59 = v8;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v61);
  DrawList = CBrushDrawListGenerator::GenerateDrawList(
               (CBrushDrawListGenerator *)v58,
               (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v52,
               (struct CDrawListEntryBuilder *)v61,
               v39);
  ShadowOpacityBrush = DrawList;
  if ( DrawList >= 0 )
  {
    CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v61);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v61);
    goto LABEL_46;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v41, &dword_1803B5248, 3u, DrawList, 0x1A2u, 0LL);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v61);
LABEL_45:
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v58);
LABEL_46:
  if ( v51 )
    CNineGridDrawListBrush::`scalar deleting destructor'(v51, 1);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v58);
  return (unsigned int)ShadowOpacityBrush;
}
