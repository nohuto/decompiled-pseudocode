/*
 * XREFs of ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x1800C5A94
 * Callers:
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x18004FE80 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 * Callees:
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x1800068B8 (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x180006990 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007454 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x1800080C8 (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x180008578 (-SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18001EDEC (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x18001EEA0 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180051B20 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180051B68 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180051BFC (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180054720 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180058584 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x1800590EC (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180067518 (--4-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180094ABC (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094C7C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180094CBC (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180094D28 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     FindBaseSimpleInputBrush @ 0x1800C5DD4 (FindBaseSimpleInputBrush.c)
 *     ?GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x1800C5E58 (-GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152674 (McTemplateU0q_EventWriteTransfer.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18019DC38 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetInputBrushParameters(
        CDrawListBrush **this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        int a4,
        unsigned int a5,
        struct EffectInput *a6)
{
  CSurfaceDrawListBrush *v6; // rbx
  struct _D3DCOLORVALUE *v9; // r12
  struct CBrush *NamedInput; // rdi
  int v12; // eax
  __int64 v13; // rcx
  int IntermediateSurfaceBrush; // esi
  CDrawListBrush *v15; // rcx
  struct CColorDrawListBrush *v16; // rax
  const struct D2D1::Matrix3x2F *SurfaceTransform; // rax
  __int64 BaseSimpleInputBrush; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdi
  char v22; // al
  CDrawListBrush *v23; // rdi
  CD3DDevice **v24; // r15
  __int64 v25; // rcx
  FLOAT v27; // xmm0_4
  CEmptyRegionDrawListBrush *v28; // rcx
  __int64 v29; // xmm1_8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  CGeometryOnlyDrawListBrush *v33; // rcx
  unsigned int v34; // r8d
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  CDrawListBrush *v37; // rax
  __int128 v38; // xmm0
  CSurfaceDrawListBrush *v39; // rcx
  unsigned int v40; // r8d
  CSurfaceDrawListBrush *v41; // rdx
  int v42; // edi
  unsigned int v43; // r8d
  unsigned int v44; // r8d
  CColorDrawListBrush *v45; // rcx
  unsigned int v46; // r8d
  CDrawListBrush *v47; // rcx
  __int64 (__fastcall **v48)(_QWORD, __int64); // rax
  __int64 v49; // rcx
  unsigned int v50; // r8d
  unsigned int v51; // r8d
  CColorDrawListBrush *v52; // rcx
  __int128 v53; // xmm0
  int v54; // eax
  CColorDrawListBrush *v55; // rcx
  unsigned int v56; // r8d
  unsigned int v57; // [rsp+20h] [rbp-E0h]
  CDrawListBrush *v58; // [rsp+30h] [rbp-D0h] BYREF
  struct CColorDrawListBrush *v59[2]; // [rsp+38h] [rbp-C8h] BYREF
  char v60; // [rsp+48h] [rbp-B8h]
  CSurfaceDrawListBrush *v61; // [rsp+50h] [rbp-B0h] BYREF
  CColorDrawListBrush *v62; // [rsp+58h] [rbp-A8h] BYREF
  CSurfaceDrawListBrush *v63; // [rsp+60h] [rbp-A0h] BYREF
  struct CColorDrawListBrush *v64[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v65; // [rsp+78h] [rbp-88h]
  _QWORD v66[2]; // [rsp+80h] [rbp-80h] BYREF
  int v67; // [rsp+90h] [rbp-70h]
  __int16 v68; // [rsp+DCh] [rbp-24h]
  char v69; // [rsp+DEh] [rbp-22h]
  _BYTE v70[16]; // [rsp+E0h] [rbp-20h] BYREF
  int v71; // [rsp+F0h] [rbp-10h]
  __int128 v72; // [rsp+F4h] [rbp-Ch]
  struct CColorDrawListBrush *v73; // [rsp+108h] [rbp+8h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+130h] [rbp+30h] BYREF

  v62 = a2;
  v6 = 0LL;
  v61 = 0LL;
  LODWORD(v58) = a4;
  v9 = (struct _D3DCOLORVALUE *)((char *)a6 + 48);
  *((_QWORD *)a6 + 6) = 0LL;
  *((_QWORD *)a6 + 7) = 0LL;
  LODWORD(v63) = *((_DWORD *)a6 + 18);
  NamedInput = CBrushRenderingGraph::GetNamedInput((CBrushRenderingGraph *)this, (unsigned int)v63);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v70, a2, a3);
  v12 = (*(__int64 (__fastcall **)(struct CBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)NamedInput + 320LL))(
          NamedInput,
          a2,
          a3);
  IntermediateSurfaceBrush = v12;
  if ( v12 < 0 )
  {
    v57 = 146;
    goto LABEL_89;
  }
  IntermediateSurfaceBrush = (*(__int64 (__fastcall **)(struct CBrush *, _BYTE *))(*(_QWORD *)NamedInput + 328LL))(
                               NamedInput,
                               v70);
  if ( IntermediateSurfaceBrush < 0 )
    goto LABEL_78;
  v16 = v73;
  v73 = 0LL;
  v59[0] = v16;
  std::unique_ptr<CDrawListPrimitive>::operator=((__int64 *)&v61, (__int64 *)v59);
  if ( v59[0] )
    std::default_delete<CShape>::operator()((__int64)v15, (__int64 (__fastcall ***)(_QWORD, __int64))v59[0]);
  v6 = v61;
  if ( !v61 )
  {
LABEL_77:
    v53 = v72;
    v54 = v71;
    *((_BYTE *)a6 + 69) = 1;
    *(_OWORD *)&v9->r = v53;
    *((_DWORD *)a6 + 16) = v54;
LABEL_78:
    v24 = (CD3DDevice **)v62;
    goto LABEL_19;
  }
  SurfaceTransform = (const struct D2D1::Matrix3x2F *)CBrushRenderingGraph::GetSurfaceTransform(
                                                        (CBrushRenderingGraph *)this,
                                                        (unsigned int)v63);
  if ( SurfaceTransform )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)v64, (CSurfaceDrawListBrush *)((char *)v6 + 8), SurfaceTransform);
    v29 = v65;
    *(_OWORD *)v30 = *(_OWORD *)v64;
    *(_QWORD *)(v30 + 16) = v29;
  }
  BaseSimpleInputBrush = FindBaseSimpleInputBrush(v6);
  v19 = BaseSimpleInputBrush;
  if ( !BaseSimpleInputBrush )
  {
    if ( !CCommonRegistryData::m_fFlattenVirtualSurfaceBrush )
    {
      v15 = this[18];
      v31 = 44LL * a5;
      v32 = *((_QWORD *)v15 + (unsigned int)v58);
      if ( !*(_BYTE *)(v32 + v31 + 76) && !*(_BYTE *)(v32 + v31 + 77) )
        goto LABEL_10;
    }
    CBrushDrawListGenerator::AttachInput((__int64)v70, 0, &v61);
    v58 = 0LL;
    v59[0] = (struct CColorDrawListBrush *)&v58;
    v59[1] = 0LL;
    v60 = 1;
    IntermediateSurfaceBrush = CGeometryOnlyDrawListBrush::Create(&v59[1]);
    if ( v60 )
    {
      v33 = *(CGeometryOnlyDrawListBrush **)v59[0];
      *(_QWORD *)v59[0] = v59[1];
      if ( v33 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v33, 1, v34);
    }
    if ( IntermediateSurfaceBrush < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v33, 0LL, 0, IntermediateSurfaceBrush, 0xD1u, 0LL);
    }
    else
    {
      width = a3->width;
      height = a3->height;
      v37 = v58;
      v59[0] = 0LL;
      *(FLOAT *)&v59[1] = width;
      *((_BYTE *)v58 + 52) = 1;
      *((_DWORD *)v37 + 12) = 50529027;
      *((FLOAT *)&v59[1] + 1) = height;
      v38 = *(_OWORD *)v59;
      v59[1] = 0LL;
      v60 = 1;
      *((_OWORD *)v37 + 2) = v38;
      v66[0] = v58;
      v59[0] = (struct CColorDrawListBrush *)&v63;
      v66[1] = 0LL;
      v67 = 0;
      v68 = 1;
      v69 = 0;
      v63 = 0LL;
      IntermediateSurfaceBrush = CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
                                   (CBrushDrawListGenerator *)v70,
                                   (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v66,
                                   &v59[1]);
      if ( v60 )
      {
        v39 = *(CSurfaceDrawListBrush **)v59[0];
        *(_QWORD *)v59[0] = v59[1];
        if ( v39 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v39, 1, v40);
      }
      if ( IntermediateSurfaceBrush >= 0 )
      {
        v41 = v61;
        v6 = v63;
        v63 = 0LL;
        v61 = v6;
        if ( v41 )
          std::default_delete<CShape>::operator()((__int64)v39, (__int64 (__fastcall ***)(_QWORD, __int64))v41);
        v42 = v71;
        CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v70);
        v71 = v42 | 0x100;
        if ( v63 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v63, 1, v43);
        v15 = v58;
        if ( v58 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v58, 1, v43);
LABEL_10:
        if ( v6 )
        {
          matrix = *(D2D1_MATRIX_3X2_F *)((char *)v6 + 8);
          if ( !D2D1IsMatrixInvertible(&matrix) )
          {
            v24 = (CD3DDevice **)v62;
            IntermediateSurfaceBrush = -2003304441;
            goto LABEL_71;
          }
          v20 = FindBaseSimpleInputBrush(v6);
          v21 = v20;
          if ( v20 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 8LL))(v20, 2LL) )
          {
            CDrawListBitmap::operator=((__int64)a6, v21 + 56);
            v22 = 0;
          }
          else
          {
            v22 = 1;
          }
          *((_BYTE *)a6 + 69) = v22;
          if ( !(*(unsigned __int8 (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 5LL) )
          {
            v23 = v6;
            if ( !(*(unsigned __int8 (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 4LL) )
            {
              v24 = (CD3DDevice **)v62;
LABEL_18:
              v6 = 0LL;
              *((_DWORD *)a6 + 16) = v71;
              *((_QWORD *)a6 + 10) = v23;
LABEL_19:
              if ( IntermediateSurfaceBrush != -2147024846
                && IntermediateSurfaceBrush != -2147022876
                && IntermediateSurfaceBrush != -2003304441 )
              {
LABEL_22:
                if ( IntermediateSurfaceBrush < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, IntermediateSurfaceBrush, 0x13Eu, 0LL);
                  goto LABEL_24;
                }
                if ( !*((_BYTE *)a6 + 69) )
                  goto LABEL_24;
                v12 = CDrawListBitmap::SetTransparent(a6, v24);
                IntermediateSurfaceBrush = v12;
                if ( v12 >= 0 )
                {
                  if ( *((_QWORD *)a6 + 10) )
                    goto LABEL_24;
                  v62 = 0LL;
                  v64[0] = (struct CColorDrawListBrush *)&v62;
                  v64[1] = 0LL;
                  LOBYTE(v65) = 1;
                  IntermediateSurfaceBrush = CColorDrawListBrush::Create(v9, &v64[1]);
                  if ( (_BYTE)v65 )
                  {
                    v55 = *(CColorDrawListBrush **)v64[0];
                    *(_QWORD *)v64[0] = v64[1];
                    if ( v55 )
                      CColorDrawListBrush::`vector deleting destructor'(v55, 1, v56);
                  }
                  if ( IntermediateSurfaceBrush >= 0 )
                  {
                    *((_QWORD *)a6 + 10) = v62;
                    goto LABEL_24;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v55, 0LL, 0, IntermediateSurfaceBrush, 0x14Bu, 0LL);
                  v52 = v62;
                  goto LABEL_68;
                }
                v57 = 323;
LABEL_89:
                MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, v57, 0LL);
                goto LABEL_24;
              }
LABEL_71:
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
                McTemplateU0q_EventWriteTransfer(
                  v15,
                  &EVTDESC_EFFECTBRUSH_DRAW_IGNORE_INVALID_INPUT,
                  (unsigned int)IntermediateSurfaceBrush);
              *((_BYTE *)a6 + 69) = 1;
              *((_DWORD *)a6 + 16) = 0;
              IntermediateSurfaceBrush = 0;
              goto LABEL_22;
            }
          }
          v27 = a3->width;
          v59[0] = 0LL;
          v59[1] = (struct CColorDrawListBrush *)__PAIR64__(LODWORD(a3->height), LODWORD(v27));
          v58 = 0LL;
          v64[1] = 0LL;
          v24 = (CD3DDevice **)v62;
          v64[0] = (struct CColorDrawListBrush *)&v58;
          LOBYTE(v65) = 1;
          IntermediateSurfaceBrush = CEmptyRegionDrawListBrush::Create(
                                       v62,
                                       (struct D2D_RECT_F *)v59,
                                       (__int64 *)&v61,
                                       &v64[1]);
          if ( (_BYTE)v65 )
          {
            v28 = *(CEmptyRegionDrawListBrush **)v64[0];
            *(_QWORD *)v64[0] = v64[1];
            if ( v28 )
              CEmptyRegionDrawListBrush::`scalar deleting destructor'(v28, 1);
          }
          if ( IntermediateSurfaceBrush >= 0 )
          {
            v15 = 0LL;
            v23 = v58;
            v58 = 0LL;
            if ( v61 )
            {
              std::default_delete<CShape>::operator()(0LL, (__int64 (__fastcall ***)(_QWORD, __int64))v61);
              v15 = v58;
            }
            if ( v15 )
              CEmptyRegionDrawListBrush::`scalar deleting destructor'(v15, 1);
            goto LABEL_18;
          }
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v28, 0LL, 0, IntermediateSurfaceBrush, 0x123u, 0LL);
          if ( v58 )
            CEmptyRegionDrawListBrush::`scalar deleting destructor'(v58, 1);
LABEL_57:
          v6 = v61;
          goto LABEL_24;
        }
        goto LABEL_77;
      }
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v39, 0LL, 0, IntermediateSurfaceBrush, 0xD8u, 0LL);
      if ( v63 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v63, 1, v44);
    }
    if ( v58 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v58, 1, v44);
    goto LABEL_57;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BaseSimpleInputBrush + 8LL))(
          BaseSimpleInputBrush,
          0LL) )
    goto LABEL_10;
  v58 = 0LL;
  v59[0] = (struct CColorDrawListBrush *)&v58;
  v59[1] = 0LL;
  *(_OWORD *)&v9->r = v72;
  v60 = 1;
  IntermediateSurfaceBrush = CColorDrawListBrush::Create(v9, &v59[1]);
  if ( v60 )
  {
    v45 = *(CColorDrawListBrush **)v59[0];
    *(_QWORD *)v59[0] = v59[1];
    if ( v45 )
      CColorDrawListBrush::`vector deleting destructor'(v45, 1, v46);
  }
  if ( IntermediateSurfaceBrush >= 0 )
  {
    CDrawListBrush::CopyPrimitiveClamp(v58, (const struct CDrawListBrush *)v19);
    v47 = v58;
    *(_OWORD *)((char *)v58 + 8) = *(_OWORD *)(v19 + 8);
    *((_QWORD *)v47 + 3) = *(_QWORD *)(v19 + 24);
    v48 = *(__int64 (__fastcall ***)(_QWORD, __int64))v6;
    v59[0] = v58;
    v58 = 0LL;
    ((__int64 (__fastcall **)(CSurfaceDrawListBrush *, __int64))v48)[5](v6, (__int64)v59);
    if ( v59[0] )
      std::default_delete<CShape>::operator()(v49, (__int64 (__fastcall ***)(_QWORD, __int64))v59[0]);
    v15 = v58;
    if ( v58 )
      CColorDrawListBrush::`vector deleting destructor'(v58, 1, v50);
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v45, 0LL, 0, IntermediateSurfaceBrush, 0xC3u, 0LL);
  v52 = v58;
LABEL_68:
  if ( v52 )
    CColorDrawListBrush::`vector deleting destructor'(v52, 1, v51);
LABEL_24:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v70);
  if ( v6 )
    std::default_delete<CShape>::operator()(v25, (__int64 (__fastcall ***)(_QWORD, __int64))v6);
  return (unsigned int)IntermediateSurfaceBrush;
}
