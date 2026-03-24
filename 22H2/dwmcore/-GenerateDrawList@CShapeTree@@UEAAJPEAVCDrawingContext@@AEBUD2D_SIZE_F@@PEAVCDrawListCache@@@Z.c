/*
 * XREFs of ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007454 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001B570 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18002F258 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x180040814 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180040870 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180040940 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180040A2C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800415F0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180054720 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180054E94 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180056574 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800577C0 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180057AA8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180057C44 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005864C (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006BD48 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180086EA0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180092A8C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180094ABC (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x180094C48 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094C7C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BA1F8 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800EB7D4 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x18020B894 (-ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV-$TMilRect_@M.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020BB18 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CShapeTree::GenerateDrawList(
        CShapeTree *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v8; // edi
  float v9; // xmm9_4
  float v10; // xmm6_4
  float width; // xmm0_4
  float height; // xmm2_4
  float v13; // xmm10_4
  float v14; // xmm4_4
  float v15; // xmm1_4
  float v16; // xmm8_4
  float v17; // xmm3_4
  float v18; // xmm7_4
  char v19; // r14
  __int64 v20; // rdx
  float v21; // xmm11_4
  float v22; // xmm12_4
  float v23; // xmm13_4
  float v24; // xmm8_4
  float v25; // xmm7_4
  void (__fastcall ***v26)(_QWORD, _DWORD *); // rcx
  float v27; // xmm10_4
  float v28; // xmm9_4
  void (__fastcall **v29)(_QWORD, _DWORD *); // rax
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm10_4
  float v35; // xmm9_4
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rbx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rcx
  CSurfaceDrawListBrush *v48; // rcx
  unsigned int v49; // r8d
  CSurfaceDrawListBrush *v50; // rax
  __int64 v51; // rcx
  int DrawList; // eax
  __int64 v53; // rcx
  unsigned int v54; // r8d
  int v55; // eax
  __int64 v56; // rcx
  __int64 v58; // [rsp+28h] [rbp-E0h]
  __int64 v59[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v60; // [rsp+48h] [rbp-C0h] BYREF
  char v61; // [rsp+4Ah] [rbp-BEh]
  CSurfaceDrawListBrush *v62; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v63[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v64; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+78h] [rbp-90h]
  int v66; // [rsp+80h] [rbp-88h]
  __int64 v67; // [rsp+84h] [rbp-84h]
  int v68; // [rsp+8Ch] [rbp-7Ch]
  char v69; // [rsp+90h] [rbp-78h]
  __int128 v70; // [rsp+98h] [rbp-70h] BYREF
  int v71; // [rsp+A8h] [rbp-60h]
  int v72; // [rsp+D8h] [rbp-30h]
  __int16 v73; // [rsp+F4h] [rbp-14h]
  char v74; // [rsp+F6h] [rbp-12h]
  __int128 v75; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v76; // [rsp+108h] [rbp+0h] BYREF
  __int128 v77; // [rsp+118h] [rbp+10h] BYREF
  __int64 v78; // [rsp+128h] [rbp+20h]
  __int64 v79; // [rsp+130h] [rbp+28h] BYREF
  unsigned __int64 v80; // [rsp+138h] [rbp+30h] BYREF
  char v81; // [rsp+140h] [rbp+38h]
  float v82; // [rsp+148h] [rbp+40h] BYREF
  float v83; // [rsp+14Ch] [rbp+44h]
  float v84; // [rsp+150h] [rbp+48h]
  float v85; // [rsp+154h] [rbp+4Ch]
  _BYTE v86[16]; // [rsp+158h] [rbp+50h] BYREF
  int v87; // [rsp+168h] [rbp+60h]
  struct CDrawListEntry **v88[288]; // [rsp+1A8h] [rbp+A0h] BYREF

  v8 = 0;
  v76 = *(_OWORD *)((char *)this + 72);
  if ( *((_BYTE *)this + 89) )
  {
    v9 = *(float *)&v76;
    v10 = 0.0;
    width = a3->width;
    height = a3->height;
    if ( *(float *)&v76 < 0.0 )
    {
      v9 = 0.0;
      LODWORD(v76) = 0;
    }
    v13 = *((float *)&v76 + 1);
    v14 = *((float *)&v76 + 1);
    if ( *((float *)&v76 + 1) < 0.0 )
    {
      v13 = 0.0;
      v14 = 0.0;
      DWORD1(v76) = 0;
    }
    v15 = *((float *)&v76 + 2);
    v16 = *((float *)&v76 + 2);
    v17 = *((float *)&v76 + 2);
    if ( *((float *)&v76 + 2) > width )
    {
      *((float *)&v76 + 2) = width;
      v15 = width;
      v16 = width;
      v17 = width;
    }
    v18 = *((float *)&v76 + 3);
    if ( *((float *)&v76 + 3) > height )
    {
      *((float *)&v76 + 3) = height;
      v18 = height;
      v16 = v17;
    }
    if ( v15 > v9 && v18 > v14 )
    {
      v72 = 0;
      v19 = 0;
      CDrawingContext::GetWorldTransform(a2, (struct CMILMatrix *)&v70);
      CMILMatrix::Get2DScaleDimensionsWithPerspective((__int64)&v70);
      v20 = *((_QWORD *)a2 + 4);
      v83 = 0.0;
      v21 = 0.0;
      v22 = 0.0;
      v23 = 0.0;
      v82 = 0.0;
      v24 = (float)(v16 - v9) * *(float *)v59;
      v25 = (float)(v18 - v13) * *((float *)v59 + 1);
      v26 = (void (__fastcall ***)(_QWORD, _DWORD *))(v20 + 8 + *(int *)(*(_QWORD *)(v20 + 8) + 16LL));
      v84 = v24;
      v79 = 0LL;
      v85 = v25;
      v27 = v24;
      v28 = v25;
      v29 = *v26;
      v80 = __PAIR64__(LODWORD(v25), LODWORD(v24));
      (*v29)(v26, v63);
      if ( fmaxf(v24 - 0.0, v25 - 0.0) > fmaxf((float)v63[0], (float)v63[1]) )
      {
        v19 = 1;
        v75 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v70, (__int64)&v76, (float *)&v75);
        v77 = 0LL;
        CDrawingContext::GetClipBoundsWorld((__int64)a2);
        v30 = *(float *)&v75;
        if ( *(float *)&v77 > *(float *)&v75 )
        {
          LODWORD(v75) = v77;
          v30 = *(float *)&v77;
        }
        v31 = *((float *)&v75 + 1);
        if ( *((float *)&v77 + 1) > *((float *)&v75 + 1) )
        {
          DWORD1(v75) = DWORD1(v77);
          v31 = *((float *)&v77 + 1);
        }
        v32 = *((float *)&v75 + 2);
        if ( *((float *)&v75 + 2) > *((float *)&v77 + 2) )
        {
          DWORD2(v75) = DWORD2(v77);
          v32 = *((float *)&v77 + 2);
        }
        v33 = *((float *)&v75 + 3);
        if ( *((float *)&v75 + 3) > *((float *)&v77 + 3) )
        {
          HIDWORD(v75) = HIDWORD(v77);
          v33 = *((float *)&v77 + 3);
        }
        if ( v32 <= v30 || v33 <= v31 )
          v75 = 0uLL;
        if ( !CShapeTree::ComputePartialIntermediate(
                (struct CMILMatrix *)&v70,
                (float *)v59,
                (float *)&v76,
                (int *)&v75,
                (float *)&v79) )
          return v8;
        v23 = *((float *)&v79 + 1);
        v22 = *(float *)&v79;
        v25 = v25 + COERCE_FLOAT(HIDWORD(v79) ^ _xmm);
        v28 = *((float *)&v80 + 1);
        v24 = v24 + COERCE_FLOAT(v79 ^ _xmm);
        v27 = *(float *)&v80;
        v21 = COERCE_FLOAT(v79 ^ _xmm) + 0.0;
        v85 = v25;
        v84 = v24;
        v83 = COERCE_FLOAT(HIDWORD(v79) ^ _xmm) + 0.0;
        v10 = v83;
        v82 = v21;
      }
      v34 = v27 - v22;
      if ( v34 >= 1.0 )
      {
        v35 = v28 - v23;
        if ( v35 >= 1.0 )
        {
          v59[0] = 0LL;
          Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v59);
          *(_QWORD *)&v77 = "DWM ShapeVisual intermediate";
          *(_QWORD *)&v75 = __PAIR64__(LODWORD(v35), LODWORD(v34));
          LOBYTE(v58) = v19;
          DWORD2(v77) = 28;
          v36 = CDrawingContext::PushOffScreenRenderingLayer(
                  a2,
                  (__int64)&v77,
                  (float *)&v75,
                  DisplayId::None,
                  v58,
                  v59);
          v8 = v36;
          if ( v36 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0xB9u, 0LL);
LABEL_54:
            Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v59);
            return v8;
          }
          v38 = v59[0];
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v59[0] + 16LL))(v59[0], 0LL);
          CMILMatrix::InferAffineMatrix((__int64)&v70, (float *)&v76, &v82);
          v39 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v70, 0, 1);
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0xC1u, 0LL);
            Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v59);
          }
          else
          {
            v41 = CShapeTree::DrawShapes(this, a2, a3);
            if ( v41 >= 0 )
            {
              CDrawingContext::PopTransformInternal(a2, 1);
              v43 = CDrawingContext::PopLayer(a2);
              v8 = v43;
              if ( v43 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0xCAu, 0LL);
              }
              else
              {
                CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v86, a2);
                v71 = 0;
                v70 = 0LL;
                v73 = 1;
                v74 = 0;
                CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v88);
                v66 = 0;
                v67 = 0LL;
                v64 = 0LL;
                v68 = 0;
                v65 = 0LL;
                v69 = 0;
                v45 = *(_QWORD *)(v38 + 8);
                *(_QWORD *)&v77 = __PAIR64__(LODWORD(v10), LODWORD(v21));
                *((_QWORD *)&v77 + 1) = __PAIR64__(LODWORD(v25), LODWORD(v24));
                v46 = CDrawListBitmap::Initialize(
                        (CDrawListBitmap *)&v64,
                        (struct IBitmapRealization *)(*(int *)(v45 + 16) + v38 + 8),
                        a2);
                v8 = v46;
                if ( v46 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0xD3u, 0LL);
                }
                else
                {
                  v62 = 0LL;
                  v79 = (__int64)&v62;
                  v80 = 0LL;
                  v81 = 1;
                  v60 = 257;
                  v61 = 1;
                  v8 = CSurfaceDrawListBrush::CreateWithContentRect(
                         (CDrawListBitmap *)&v64,
                         &v60,
                         (float *)&v77,
                         (__int64 *)&v80);
                  if ( v81 )
                  {
                    v48 = *(CSurfaceDrawListBrush **)v79;
                    *(_QWORD *)v79 = v80;
                    if ( v48 )
                      CSurfaceDrawListBrush::`vector deleting destructor'(v48, 1, v49);
                  }
                  if ( (v8 & 0x80000000) != 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast((__int64)v48, 0LL, 0, v8, 0xDAu, 0LL);
                  }
                  else
                  {
                    MILMatrix3x2::InferAffineMatrix((__int64)&v77, &v82, (float *)&v76);
                    v50 = v62;
                    *(_OWORD *)((char *)v62 + 8) = v77;
                    *((_QWORD *)v50 + 3) = v78;
                    *(_QWORD *)&v75 = v62;
                    v62 = 0LL;
                    CBrushDrawListGenerator::AttachInput((__int64)v86, 0, &v75);
                    if ( (_QWORD)v75 )
                      std::default_delete<CShape>::operator()(v51, (__int64 (__fastcall ***)(_QWORD, __int64))v75);
                    v87 = v19 != 0 ? 256 : 64;
                    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                                 (CBrushDrawListGenerator *)v86,
                                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v70,
                                 (struct CDrawListEntryBuilder *)v88);
                    v8 = DrawList;
                    if ( DrawList < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, DrawList, 0xECu, 0LL);
                    else
                      CDrawListCache::Update(a4, a2, v88);
                  }
                  if ( v62 )
                    CSurfaceDrawListBrush::`vector deleting destructor'(v62, 1, v54);
                }
                wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v64 + 8);
                wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v64);
                CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v88);
                CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v86);
              }
              goto LABEL_54;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0xC4u, 0LL);
            Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v59);
            CDrawingContext::PopTransformInternal(a2, 1);
          }
          v55 = CDrawingContext::PopLayer(a2);
          v8 = v55;
          if ( v55 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0xF9u, 0LL);
        }
      }
    }
  }
  return v8;
}
