/*
 * XREFs of ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M@Z @ 0x1800C696C
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180069D3C (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C6598 (-DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800C6914 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007454 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z @ 0x180051CC0 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180054720 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180054E94 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180056574 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsProtected@CDrawListBitmap@@QEBA_NXZ @ 0x180056988 (-IsProtected@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180057C44 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180086EA0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180094ABC (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x180094C48 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094C7C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C6CD8 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::DrawImageResource_FillMode(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        char a4,
        struct CImageSource *a5,
        const struct D2D_RECT_F *a6,
        const struct D2D_RECT_F *a7,
        float a8)
{
  int v11; // ebx
  struct IBitmapResource *v12; // rdx
  int v13; // esi
  struct D2D_MATRIX_3X2_F *v14; // r9
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  char v20; // al
  CSurfaceDrawListBrush *v21; // rcx
  unsigned int v22; // r8d
  CSurfaceDrawListBrush *v23; // rax
  __int64 v24; // xmm1_8
  __int64 v25; // rcx
  int DrawList; // eax
  __int64 v27; // rcx
  unsigned int v28; // r8d
  CSurfaceDrawListBrush *v30[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v31; // [rsp+40h] [rbp-C0h] BYREF
  char v32; // [rsp+42h] [rbp-BEh]
  struct D2D_RECT_F v33; // [rsp+50h] [rbp-B0h] BYREF
  struct CDrawListEntryBuilder *v34; // [rsp+60h] [rbp-A0h]
  __int128 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+78h] [rbp-88h]
  int v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+84h] [rbp-7Ch]
  int v39; // [rsp+8Ch] [rbp-74h]
  char v40; // [rsp+90h] [rbp-70h]
  __int128 v41; // [rsp+A0h] [rbp-60h] BYREF
  int v42; // [rsp+B0h] [rbp-50h]
  bool v43; // [rsp+FCh] [rbp-4h]
  __int16 v44; // [rsp+FDh] [rbp-3h]
  _BYTE v45[64]; // [rsp+100h] [rbp+0h] BYREF
  int v46; // [rsp+140h] [rbp+40h]
  struct D2D_RECT_F v47; // [rsp+150h] [rbp+50h] BYREF
  __int64 v48; // [rsp+160h] [rbp+60h]
  struct D2D_RECT_F v49; // [rsp+168h] [rbp+68h] BYREF
  char v50; // [rsp+178h] [rbp+78h]
  _BYTE v51[16]; // [rsp+180h] [rbp+80h] BYREF
  int v52; // [rsp+190h] [rbp+90h]
  int v53; // [rsp+194h] [rbp+94h]
  int v54; // [rsp+198h] [rbp+98h]
  int v55; // [rsp+19Ch] [rbp+9Ch]
  float v56; // [rsp+1A0h] [rbp+A0h]
  char v57; // [rsp+1CCh] [rbp+CCh]

  v37 = 0;
  v35 = 0LL;
  v38 = 0LL;
  v39 = 0;
  v36 = 0LL;
  v11 = 0;
  v40 = 0;
  v34 = a3;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v51, a2);
  v41 = 0LL;
  v42 = 0;
  v44 = 0;
  if ( a5 )
    v12 = (struct CImageSource *)((char *)a5 + *(int *)(*((_QWORD *)a5 + 7) + 8LL) + 56);
  else
    v12 = 0LL;
  if ( (int)CDrawListBitmap::Initialize((CDrawListBitmap *)&v35, v12, a2) >= 0 )
  {
    if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)&v35) && *(_BYTE *)(*((_QWORD *)this + 2) + 1129LL) )
    {
      v53 = 0;
      v54 = 0;
      v55 = 0;
      v56 = *(float *)&FLOAT_1_0;
      v57 = 0;
      v52 = 4;
    }
    else
    {
      v13 = 512;
      v57 = 0;
      v56 = a8;
      v53 = 1065353216;
      v54 = 1065353216;
      v55 = 1065353216;
      if ( CDrawListBitmap::IsProtected((CDrawListBitmap *)&v35) )
        v13 = 514;
      if ( (*(unsigned __int8 (__fastcall **)(struct CImageSource *, __int64))(*(_QWORD *)a5 + 56LL))(a5, 15LL)
        && *((_QWORD *)a5 + 22) == *((_QWORD *)a2 + 741) )
      {
        v13 |= 0x100u;
      }
      v52 = v13;
      v43 = a4 == 0;
      if ( !a6 || !a7 )
      {
        v15 = *((_QWORD *)a5 + 7);
        v46 = 0;
        v47 = 0LL;
        v16 = (__int64 *)((char *)a5 + *(int *)(v15 + 8) + 56);
        v17 = *v16;
        v30[0] = 0LL;
        v18 = (*(__int64 (__fastcall **)(__int64 *, CSurfaceDrawListBrush **))(v17 + 48))(v16, v30);
        v11 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x48Du, 0LL);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v30);
          goto LABEL_30;
        }
        v20 = (*(__int64 (__fastcall **)(CSurfaceDrawListBrush *, _BYTE *, struct D2D_RECT_F *))(*(_QWORD *)v30[0] + 8LL))(
                v30[0],
                v45,
                &v47);
        v33 = v47;
        if ( v20 )
          CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v45, (__int64)&v47, &v49.left);
        else
          v49 = v47;
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v30);
      }
      if ( a6 )
        v33 = *a6;
      if ( a7 )
        v49 = *a7;
      if ( D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v33, &v49, &v47, v14) )
      {
        v30[0] = 0LL;
        *(_QWORD *)&v49.left = v30;
        v31 = SamplerMode::k_ClampClampLinear;
        v32 = 1;
        *(_QWORD *)&v49.right = 0LL;
        v50 = 1;
        v11 = CSurfaceDrawListBrush::CreateWithContentRect(
                (CDrawListBitmap *)&v35,
                &v31,
                &v33.left,
                (__int64 *)&v49.right);
        if ( v50 )
        {
          v21 = **(CSurfaceDrawListBrush ***)&v49.left;
          **(_QWORD **)&v49.left = *(_QWORD *)&v49.right;
          if ( v21 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v21, 1, v22);
        }
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v21, 0LL, 0, v11, 0x4B5u, 0LL);
        }
        else
        {
          v23 = v30[0];
          v24 = v48;
          *(struct D2D_RECT_F *)((char *)v30[0] + 8) = v47;
          *((_QWORD *)v23 + 3) = v24;
          *(CSurfaceDrawListBrush **)&v47.left = v30[0];
          v30[0] = 0LL;
          CBrushDrawListGenerator::AttachInput((__int64)v51, 0, &v47);
          if ( *(_QWORD *)&v47.left )
            std::default_delete<CShape>::operator()(v25, *(__int64 (__fastcall ****)(_QWORD, __int64))&v47.left);
          DrawList = CBrushDrawListGenerator::GenerateDrawList(
                       (CBrushDrawListGenerator *)v51,
                       (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v41,
                       v34);
          v11 = DrawList;
          if ( DrawList < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, DrawList, 0x4BAu, 0LL);
        }
        if ( v30[0] )
          CSurfaceDrawListBrush::`vector deleting destructor'(v30[0], 1, v28);
      }
    }
  }
LABEL_30:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v51);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v35 + 8);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v35);
  return (unsigned int)v11;
}
