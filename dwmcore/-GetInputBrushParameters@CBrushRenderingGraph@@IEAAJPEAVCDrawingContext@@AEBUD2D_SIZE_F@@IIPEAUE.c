/*
 * XREFs of ?GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18002E744
 * Callers:
 *     ?GetEffectStageInput@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x18002E680 (-GetEffectStageInput@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 * Callees:
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x1800136D0 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x180013730 (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180018B14 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x180018BC0 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x180019998 (-SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     FindBaseSimpleInputBrush @ 0x18002EB28 (FindBaseSimpleInputBrush.c)
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x18002ECBC (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     ??$?4U?$default_delete@VCDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002ECEC (--$-4U-$default_delete@VCDrawListBrush@@@std@@$0A@@-$unique_ptr@VCDrawListBrush@@U-$default_dele.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x18002FA38 (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18002FFF8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x180030870 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?GetSurfaceTransform@CBrushRenderingGraph@@IEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x180030BE0 (-GetSurfaceTransform@CBrushRenderingGraph@@IEBAPEBUD2D_MATRIX_3X2_F@@I@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18007E788 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18007EFB0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800803C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800942A0 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094528 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800945A4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180094614 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D79D0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801F9678 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?DoesSurfaceHaveBorder@CRenderingTechnique@@QEBA_NI@Z @ 0x1802B6510 (-DoesSurfaceHaveBorder@CRenderingTechnique@@QEBA_NI@Z.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetInputBrushParameters(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        unsigned int a4,
        unsigned int a5,
        struct EffectInput *a6)
{
  CSurfaceDrawListBrush *v8; // rbx
  __int64 v9; // r12
  struct CBrush *NamedInput; // rdi
  int IntermediateSurfaceBrush; // esi
  CSurfaceDrawListBrush *v13; // rcx
  __int64 v14; // rcx
  const struct D2D1::Matrix3x2F *SurfaceTransform; // rax
  __int64 BaseSimpleInputBrush; // rax
  __int64 v17; // rdi
  struct _D3DCOLORVALUE *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdi
  char v21; // al
  CD3DDevice **v22; // rdi
  _BYTE *v23; // rax
  __int64 v24; // rcx
  FLOAT v26; // xmm0_4
  FLOAT v27; // xmm1_4
  CEmptyRegionDrawListBrush *v28; // rcx
  __int128 v29; // xmm0
  int v30; // eax
  int v31; // eax
  unsigned int v32; // ecx
  CColorDrawListBrush *v33; // rcx
  __int64 v34; // xmm1_8
  __int64 v35; // rdx
  CGeometryOnlyDrawListBrush *v36; // rcx
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  CDrawListBrush *v39; // rax
  CSurfaceDrawListBrush *v40; // rcx
  __int64 v41; // rdx
  int v42; // edi
  CColorDrawListBrush *v43; // rcx
  CDrawListBrush *v44; // rcx
  CDrawListBrush *v45; // rax
  CSurfaceDrawListBrush *v46; // rdx
  __int64 v47; // rax
  CDrawListBrush *v48; // rcx
  CDrawListBrush *v49; // [rsp+30h] [rbp-D0h] BYREF
  CSurfaceDrawListBrush *v50; // [rsp+38h] [rbp-C8h] BYREF
  CSurfaceDrawListBrush *v51; // [rsp+40h] [rbp-C0h] BYREF
  struct D2D_RECT_F v52; // [rsp+48h] [rbp-B8h] BYREF
  char v53; // [rsp+58h] [rbp-A8h]
  CColorDrawListBrush *v54; // [rsp+60h] [rbp-A0h] BYREF
  struct CColorDrawListBrush *v55[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v56; // [rsp+78h] [rbp-88h]
  __int128 v57; // [rsp+80h] [rbp-80h] BYREF
  int v58; // [rsp+90h] [rbp-70h]
  int v59; // [rsp+DCh] [rbp-24h]
  char v60; // [rsp+E0h] [rbp-20h]
  _BYTE v61[16]; // [rsp+F0h] [rbp-10h] BYREF
  int v62; // [rsp+100h] [rbp+0h]
  __int128 v63; // [rsp+104h] [rbp+4h]
  CSurfaceDrawListBrush *v64; // [rsp+118h] [rbp+18h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+140h] [rbp+40h] BYREF

  v54 = a2;
  v51 = 0LL;
  v8 = 0LL;
  v9 = a4;
  *((_QWORD *)a6 + 3) = 0LL;
  *((_QWORD *)a6 + 4) = 0LL;
  LODWORD(v49) = *((_DWORD *)a6 + 12);
  NamedInput = CBrushRenderingGraph::GetNamedInput(this, (unsigned int)v49);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v61, a2, a3);
  IntermediateSurfaceBrush = (*(__int64 (__fastcall **)(struct CBrush *, _BYTE *))(*(_QWORD *)NamedInput + 312LL))(
                               NamedInput,
                               v61);
  if ( IntermediateSurfaceBrush < 0 )
  {
    v18 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
    goto LABEL_35;
  }
  v13 = v64;
  v64 = 0LL;
  v50 = v13;
  std::unique_ptr<CDrawListBrush>::operator=<std::default_delete<CDrawListBrush>,0>(&v51, &v50);
  if ( v50 )
    std::default_delete<CDrawListBrush>::operator()(v14, v50);
  v8 = v51;
  if ( !v51 )
  {
    v18 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
    goto LABEL_34;
  }
  SurfaceTransform = (const struct D2D1::Matrix3x2F *)CBrushRenderingGraph::GetSurfaceTransform(this, (unsigned int)v49);
  if ( SurfaceTransform )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)v55, (CSurfaceDrawListBrush *)((char *)v8 + 8), SurfaceTransform);
    v34 = v56;
    *(_OWORD *)v35 = *(_OWORD *)v55;
    *(_QWORD *)(v35 + 16) = v34;
  }
  BaseSimpleInputBrush = FindBaseSimpleInputBrush(v8);
  v17 = BaseSimpleInputBrush;
  if ( !BaseSimpleInputBrush )
  {
    if ( !CCommonRegistryData::m_fFlattenVirtualSurfaceBrush
      && !CRenderingTechnique::DoesSurfaceHaveBorder(*(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8 * v9), a5) )
    {
      goto LABEL_9;
    }
    v58 = 0;
    v57 = 0LL;
    v59 = 257;
    v60 = 0;
    v49 = 0LL;
    CBrushDrawListGenerator::AttachInput(v61, 0LL, &v51);
    if ( CRenderingTechnique::DoesSurfaceHaveBorder(*(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8 * v9), a5) )
    {
      LOWORD(v59) = 0;
    }
    else
    {
      *(_QWORD *)&v52.right = 0LL;
      *(_QWORD *)&v52.left = &v49;
      v53 = 1;
      IntermediateSurfaceBrush = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v52.right);
      if ( v53 )
      {
        v36 = **(CGeometryOnlyDrawListBrush ***)&v52.left;
        **(_QWORD **)&v52.left = *(_QWORD *)&v52.right;
        if ( v36 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v36, 1u);
      }
      if ( IntermediateSurfaceBrush < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v36, 0LL, 0, IntermediateSurfaceBrush, 0xF2u, 0LL);
        goto LABEL_65;
      }
      width = a3->width;
      height = a3->height;
      v39 = v49;
      v52.left = 0.0;
      v52.top = 0.0;
      v52.right = width;
      *((_BYTE *)v49 + 52) = 1;
      *((_DWORD *)v39 + 12) = 0;
      v52.bottom = height;
      *((struct D2D_RECT_F *)v39 + 2) = v52;
      *(_QWORD *)&v57 = v49;
    }
    v50 = 0LL;
    *(_QWORD *)&v52.left = &v50;
    *(_QWORD *)&v52.right = 0LL;
    v53 = 1;
    IntermediateSurfaceBrush = CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
                                 (CBrushDrawListGenerator *)v61,
                                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v57,
                                 (struct CSurfaceDrawListBrush **)&v52.right);
    if ( v53 )
    {
      v40 = **(CSurfaceDrawListBrush ***)&v52.left;
      **(_QWORD **)&v52.left = *(_QWORD *)&v52.right;
      if ( v40 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v40, 1u);
    }
    if ( IntermediateSurfaceBrush >= 0 )
    {
      v41 = (__int64)v51;
      v8 = v50;
      v50 = 0LL;
      v51 = v8;
      if ( v41 )
        std::default_delete<CDrawListBrush>::operator()(v40, v41);
      v42 = v62 | 0x100;
      CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v61);
      v62 = v42;
      if ( v50 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v50, 1u);
      if ( v49 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v49, 1u);
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v40, 0LL, 0, IntermediateSurfaceBrush, 0xFBu, 0LL);
    if ( v50 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v50, 1u);
LABEL_65:
    if ( v49 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v49, 1u);
    goto LABEL_67;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BaseSimpleInputBrush + 8LL))(
          BaseSimpleInputBrush,
          0LL) )
  {
LABEL_9:
    v18 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
    goto LABEL_10;
  }
  v18 = (struct _D3DCOLORVALUE *)((char *)a6 + 24);
  v49 = 0LL;
  *(_QWORD *)&v52.right = 0LL;
  *(_QWORD *)&v52.left = &v49;
  v53 = 1;
  *(_OWORD *)((char *)a6 + 24) = v63;
  IntermediateSurfaceBrush = CColorDrawListBrush::Create(
                               (struct _D3DCOLORVALUE *)((char *)a6 + 24),
                               (struct CColorDrawListBrush **)&v52.right);
  if ( v53 )
  {
    v43 = **(CColorDrawListBrush ***)&v52.left;
    **(_QWORD **)&v52.left = *(_QWORD *)&v52.right;
    if ( v43 )
      CColorDrawListBrush::`vector deleting destructor'(v43, 1);
  }
  if ( IntermediateSurfaceBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v43, 0LL, 0, IntermediateSurfaceBrush, 0xD2u, 0LL);
    v48 = v49;
    goto LABEL_82;
  }
  CDrawListBrush::CopyPrimitiveClamp(v49, (const struct CDrawListBrush *)v17);
  v44 = v49;
  *(_OWORD *)((char *)v49 + 8) = *(_OWORD *)(v17 + 8);
  *((_QWORD *)v44 + 3) = *(_QWORD *)(v17 + 24);
  if ( v8 == (CSurfaceDrawListBrush *)v17 )
  {
    v45 = v49;
    v46 = v8;
    v49 = 0LL;
    v8 = v45;
    v51 = v45;
    if ( !v46 )
      goto LABEL_10;
    goto LABEL_77;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 3LL) )
  {
    v47 = *(_QWORD *)v8;
    v50 = v49;
    v49 = 0LL;
    (*(void (__fastcall **)(CSurfaceDrawListBrush *, CSurfaceDrawListBrush **))(v47 + 40))(v8, &v50);
    v46 = v50;
    if ( v50 )
LABEL_77:
      std::default_delete<CDrawListBrush>::operator()(v44, v46);
  }
  if ( v49 )
    CColorDrawListBrush::`vector deleting destructor'(v49, 1);
LABEL_10:
  if ( !v8 )
  {
LABEL_34:
    v29 = v63;
    v30 = v62;
    *((_BYTE *)a6 + 45) = 1;
    *(_OWORD *)&v18->r = v29;
    *((_DWORD *)a6 + 10) = v30;
LABEL_35:
    v22 = (CD3DDevice **)v54;
    goto LABEL_19;
  }
  matrix = *(D2D1_MATRIX_3X2_F *)((char *)v8 + 8);
  if ( !D2D1IsMatrixInvertible(&matrix) )
  {
    v22 = (CD3DDevice **)v54;
    IntermediateSurfaceBrush = -2003304441;
    goto LABEL_92;
  }
  v19 = FindBaseSimpleInputBrush(v8);
  v20 = v19;
  if ( v19 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 8LL))(v19, 2LL) )
  {
    CDrawListBitmap::operator=(a6, v20 + 56);
    v21 = 0;
  }
  else
  {
    v21 = 1;
  }
  *((_BYTE *)a6 + 45) = v21;
  if ( (*(unsigned __int8 (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 5LL)
    || (*(unsigned __int8 (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 4LL) )
  {
    v26 = a3->width;
    v27 = a3->height;
    v52.left = 0.0;
    v52.top = 0.0;
    v22 = (CD3DDevice **)v54;
    v52.right = v26;
    v52.bottom = v27;
    v50 = 0LL;
    v55[0] = (struct CColorDrawListBrush *)&v50;
    v55[1] = 0LL;
    LOBYTE(v56) = 1;
    IntermediateSurfaceBrush = CEmptyRegionDrawListBrush::Create(v54, &v52, (__int64 *)&v51, &v55[1]);
    if ( (_BYTE)v56 )
    {
      v28 = *(CEmptyRegionDrawListBrush **)v55[0];
      *(_QWORD *)v55[0] = v55[1];
      if ( v28 )
        CEmptyRegionDrawListBrush::`scalar deleting destructor'(v28, 1);
    }
    if ( IntermediateSurfaceBrush >= 0 )
    {
      v8 = v50;
      v50 = 0LL;
      if ( v51 )
      {
        std::default_delete<CDrawListBrush>::operator()(v28, v51);
        if ( v50 )
          CEmptyRegionDrawListBrush::`scalar deleting destructor'(v50, 1);
      }
      goto LABEL_18;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v28, 0LL, 0, IntermediateSurfaceBrush, 0x146u, 0LL);
    if ( v50 )
      CEmptyRegionDrawListBrush::`scalar deleting destructor'(v50, 1);
LABEL_67:
    v8 = v51;
    goto LABEL_24;
  }
  v22 = (CD3DDevice **)v54;
LABEL_18:
  *((_DWORD *)a6 + 10) = v62;
  *((_QWORD *)a6 + 7) = v8;
  v8 = 0LL;
LABEL_19:
  if ( IntermediateSurfaceBrush != -2147024846
    && IntermediateSurfaceBrush != -2147022876
    && IntermediateSurfaceBrush != -2003304441 )
  {
    v23 = (char *)a6 + 45;
    if ( IntermediateSurfaceBrush < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(IntermediateSurfaceBrush, 0LL, 0, IntermediateSurfaceBrush, 0x161u, 0LL);
      goto LABEL_24;
    }
    goto LABEL_23;
  }
LABEL_92:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    McTemplateU0q_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_EFFECTBRUSH_DRAW_IGNORE_INVALID_INPUT,
      (unsigned int)IntermediateSurfaceBrush);
  v23 = (char *)a6 + 45;
  *((_DWORD *)a6 + 10) = 0;
  *((_BYTE *)a6 + 45) = 1;
  IntermediateSurfaceBrush = 0;
LABEL_23:
  if ( !*v23 )
    goto LABEL_24;
  v31 = CDrawListBitmap::SetTransparent(a6, v22);
  IntermediateSurfaceBrush = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x166u, 0LL);
    goto LABEL_24;
  }
  if ( *((_QWORD *)a6 + 7) )
    goto LABEL_24;
  v54 = 0LL;
  v55[0] = (struct CColorDrawListBrush *)&v54;
  v55[1] = 0LL;
  LOBYTE(v56) = 1;
  IntermediateSurfaceBrush = CColorDrawListBrush::Create(v18, &v55[1]);
  if ( (_BYTE)v56 )
  {
    v33 = *(CColorDrawListBrush **)v55[0];
    *(_QWORD *)v55[0] = v55[1];
    if ( v33 )
      CColorDrawListBrush::`vector deleting destructor'(v33, 1);
  }
  if ( IntermediateSurfaceBrush >= 0 )
  {
    *((_QWORD *)a6 + 7) = v54;
    goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v33, 0LL, 0, IntermediateSurfaceBrush, 0x16Eu, 0LL);
  v48 = v54;
LABEL_82:
  if ( v48 )
    CColorDrawListBrush::`vector deleting destructor'(v48, 1);
LABEL_24:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v61);
  if ( v8 )
    std::default_delete<CDrawListBrush>::operator()(v24, v8);
  return (unsigned int)IntermediateSurfaceBrush;
}
