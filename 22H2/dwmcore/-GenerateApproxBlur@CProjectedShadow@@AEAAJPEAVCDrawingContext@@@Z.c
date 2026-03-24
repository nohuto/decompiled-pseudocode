/*
 * XREFs of ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180008E78
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000C524 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@@Z @ 0x1800091E8 (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@@Z.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x18000C7C8 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18000E904 (-GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@PEA.c)
 *     ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z @ 0x18001D038 (-CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x18001D5C4 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-$.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x1800201F8 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BFE98 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x1801E392C (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GenerateApproxBlur(CProjectedShadow *this, struct CDrawingContext *a2)
{
  int v2; // eax
  struct CDrawingContext *v3; // r15
  unsigned int v5; // ebx
  struct CBrush *v6; // r14
  struct CBrush *v7; // rsi
  float v8; // xmm2_4
  float v9; // xmm1_4
  struct IRenderTargetBitmap *v10; // rax
  struct CNineGridBrush *v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // ecx
  struct IRenderTargetBitmap *v15; // rax
  struct CNineGridBrush *v16; // r8
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rdx
  double BlurForBoundary; // xmm0_8
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  struct CNineGridBrush *v29; // rcx
  int v30; // r8d
  int NineGridBrush; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  struct CNineGridBrush *v35; // rcx
  int v36; // r8d
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rbx
  int CrossFadeGraph; // eax
  unsigned int v41; // ecx
  int ApproxBlurIntermediate; // eax
  unsigned int v43; // ecx
  struct CNineGridBrush *v44; // rcx
  struct CSurfaceBrush *v45; // rcx
  struct IRenderTargetBitmap *v46; // rax
  int v47; // eax
  unsigned int v48; // ecx
  struct CNineGridBrush *v49; // rcx
  struct CNineGridBrush *v50; // r8
  int v51; // r8d
  int v52; // eax
  unsigned int v53; // ecx
  int v54; // eax
  int v55; // edx
  unsigned int v56; // ecx
  struct IRenderTargetBitmap *v57; // rax
  int v58; // eax
  unsigned int v59; // ecx
  struct CNineGridBrush *v60; // rcx
  struct CSurfaceBrush *v61; // rcx
  int v62; // r8d
  int v63; // eax
  unsigned int v64; // ecx
  int v65; // eax
  unsigned int v66; // ecx
  struct IRenderTargetBitmap *v67; // rax
  int v68; // eax
  unsigned int v69; // ecx
  struct CNineGridBrush *v70; // rcx
  struct CSurfaceBrush *v71; // rcx
  int v72; // r8d
  int v73; // eax
  unsigned int v74; // ecx
  int v75; // eax
  __int64 v76; // rdx
  unsigned int v77; // ecx
  struct CSurfaceBrush *v78; // r8
  char *v79; // r8
  int v80; // eax
  unsigned int v81; // ecx
  int v82; // eax
  unsigned int v83; // ecx
  __int64 v84; // rcx
  _BYTE v85[4]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v86[4]; // [rsp+44h] [rbp-2Ch] BYREF
  float v87; // [rsp+48h] [rbp-28h] BYREF
  __int128 v88; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((_DWORD *)this + 80);
  v3 = a2;
  v5 = 0;
  if ( v2 == 5 )
  {
    if ( !CProjectedShadow::s_cp2xBlurAsset )
    {
      CProjectedShadow::s_cp2xBlurAsset = 0LL;
      ApproxBlurIntermediate = CProjectedShadow::GenerateApproxBlurIntermediate(
                                 this,
                                 a2,
                                 64.0,
                                 &stru_1802CD888,
                                 &CProjectedShadow::s_cp2xBlurAsset);
      v5 = ApproxBlurIntermediate;
      if ( ApproxBlurIntermediate < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, ApproxBlurIntermediate, 0x3A4u, 0LL);
      }
      else
      {
        v44 = CProjectedShadow::s_cp2xBlurNineGrid;
        CProjectedShadow::s_cp2xBlurNineGrid = 0LL;
        if ( v44 )
          (*(void (__fastcall **)(struct CNineGridBrush *))(*(_QWORD *)v44 + 16LL))(v44);
        v45 = CProjectedShadow::s_cp2xBlurSurface;
        CProjectedShadow::s_cp2xBlurSurface = 0LL;
        if ( v45 )
          (*(void (__fastcall **)(struct CSurfaceBrush *))(*(_QWORD *)v45 + 16LL))(v45);
      }
    }
    return v5;
  }
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0.0;
  v9 = 0.0;
  v88 = _xmm;
  if ( v2 == 2 )
  {
    v10 = CProjectedShadow::s_cpHalfBlurAsset;
    if ( !CProjectedShadow::s_cpHalfBlurAsset )
    {
      CProjectedShadow::s_cpHalfBlurAsset = 0LL;
      v27 = CProjectedShadow::GenerateApproxBlurIntermediate(
              this,
              a2,
              16.0,
              &stru_1802CD888,
              &CProjectedShadow::s_cpHalfBlurAsset);
      v5 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x3BEu, 0LL);
        return v5;
      }
      v29 = CProjectedShadow::s_cpHalfBlurNineGrid;
      v11 = 0LL;
      CProjectedShadow::s_cpHalfBlurNineGrid = 0LL;
      if ( !v29 )
      {
        v10 = CProjectedShadow::s_cpHalfBlurAsset;
LABEL_21:
        CProjectedShadow::s_cpHalfBlurNineGrid = 0LL;
        if ( v11 )
        {
          (*(void (__fastcall **)(struct CNineGridBrush *))(*(_QWORD *)v11 + 16LL))(v11);
          v10 = CProjectedShadow::s_cpHalfBlurAsset;
        }
        if ( v10 )
        {
          LODWORD(a2) = *(_DWORD *)(*((_QWORD *)v10 + 1) + 16LL);
          v30 = (_DWORD)a2 + (_DWORD)v10 + 8;
        }
        else
        {
          v30 = 0;
        }
        NineGridBrush = CProjectedShadow::GenerateNineGridBrush(
                          (_DWORD)this,
                          (_DWORD)a2,
                          v30,
                          (unsigned int)&v88,
                          (__int64)&CProjectedShadow::s_cpHalfBlurNineGrid);
        v5 = NineGridBrush;
        if ( NineGridBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, NineGridBrush, 0x3C7u, 0LL);
          return v5;
        }
        v11 = CProjectedShadow::s_cpHalfBlurNineGrid;
LABEL_5:
        v12 = CProjectedShadow::AdjustNineGridBrush(this, v3, v11);
        v5 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v12, 0x3CBu, 0LL);
          return v5;
        }
        v15 = CProjectedShadow::s_cp1xBlurAsset;
        if ( !CProjectedShadow::s_cp1xBlurAsset )
        {
          CProjectedShadow::s_cp1xBlurAsset = 0LL;
          v33 = CProjectedShadow::GenerateApproxBlurIntermediate(
                  this,
                  v3,
                  32.0,
                  &stru_1802CD888,
                  &CProjectedShadow::s_cp1xBlurAsset);
          v5 = v33;
          if ( v33 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x3D2u, 0LL);
            return v5;
          }
          v35 = CProjectedShadow::s_cp1xBlurNineGrid;
          v16 = 0LL;
          CProjectedShadow::s_cp1xBlurNineGrid = 0LL;
          if ( !v35 )
          {
            v15 = CProjectedShadow::s_cp1xBlurAsset;
            goto LABEL_30;
          }
          (*(void (__fastcall **)(struct CNineGridBrush *, __int64, _QWORD))(*(_QWORD *)v35 + 16LL))(v35, v13, 0LL);
          v15 = CProjectedShadow::s_cp1xBlurAsset;
        }
        v16 = CProjectedShadow::s_cp1xBlurNineGrid;
        if ( CProjectedShadow::s_cp1xBlurNineGrid )
        {
LABEL_8:
          v17 = CProjectedShadow::AdjustNineGridBrush(this, v3, v16);
          v5 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x3DFu, 0LL);
            return v5;
          }
          v6 = CProjectedShadow::s_cpHalfBlurNineGrid;
          v7 = CProjectedShadow::s_cp1xBlurNineGrid;
          CProjectedShadow::GetBlurForBoundary(this, 0LL);
          v20 = 1LL;
          goto LABEL_10;
        }
LABEL_30:
        CProjectedShadow::s_cp1xBlurNineGrid = 0LL;
        if ( v16 )
        {
          (*(void (__fastcall **)(struct CNineGridBrush *))(*(_QWORD *)v16 + 16LL))(v16);
          v15 = CProjectedShadow::s_cp1xBlurAsset;
        }
        if ( v15 )
        {
          LODWORD(v13) = *(_DWORD *)(*((_QWORD *)v15 + 1) + 16LL);
          v36 = v13 + (_DWORD)v15 + 8;
        }
        else
        {
          v36 = 0;
        }
        v37 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v13,
                v36,
                (unsigned int)&v88,
                (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
        v5 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x3DBu, 0LL);
          return v5;
        }
        v16 = CProjectedShadow::s_cp1xBlurNineGrid;
        goto LABEL_8;
      }
      (*(void (__fastcall **)(struct CNineGridBrush *, struct CDrawingContext *, _QWORD))(*(_QWORD *)v29 + 16LL))(
        v29,
        a2,
        0LL);
      v10 = CProjectedShadow::s_cpHalfBlurAsset;
    }
    v11 = CProjectedShadow::s_cpHalfBlurNineGrid;
    if ( CProjectedShadow::s_cpHalfBlurNineGrid )
      goto LABEL_5;
    goto LABEL_21;
  }
  if ( v2 == 3 )
  {
    v46 = CProjectedShadow::s_cp1xBlurAsset;
    if ( !CProjectedShadow::s_cp1xBlurAsset )
    {
      CProjectedShadow::s_cp1xBlurAsset = 0LL;
      v47 = CProjectedShadow::GenerateApproxBlurIntermediate(
              this,
              a2,
              32.0,
              &stru_1802CD888,
              &CProjectedShadow::s_cp1xBlurAsset);
      v5 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x3EEu, 0LL);
        return v5;
      }
      v49 = CProjectedShadow::s_cp1xBlurNineGrid;
      v50 = 0LL;
      CProjectedShadow::s_cp1xBlurNineGrid = 0LL;
      if ( !v49 )
      {
        v46 = CProjectedShadow::s_cp1xBlurAsset;
        goto LABEL_63;
      }
      (*(void (__fastcall **)(struct CNineGridBrush *, struct CDrawingContext *, _QWORD))(*(_QWORD *)v49 + 16LL))(
        v49,
        a2,
        0LL);
      v46 = CProjectedShadow::s_cp1xBlurAsset;
    }
    v50 = CProjectedShadow::s_cp1xBlurNineGrid;
    if ( CProjectedShadow::s_cp1xBlurNineGrid )
    {
LABEL_73:
      v54 = CProjectedShadow::AdjustNineGridBrush(this, v3, v50);
      v5 = v54;
      if ( v54 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v54, 0x3FBu, 0LL);
        return v5;
      }
      v57 = CProjectedShadow::s_cp2xBlurAsset;
      if ( !CProjectedShadow::s_cp2xBlurAsset )
      {
        CProjectedShadow::s_cp2xBlurAsset = 0LL;
        v58 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                v3,
                64.0,
                &stru_1802CD888,
                &CProjectedShadow::s_cp2xBlurAsset);
        v5 = v58;
        if ( v58 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x402u, 0LL);
          return v5;
        }
        v60 = CProjectedShadow::s_cp2xBlurNineGrid;
        CProjectedShadow::s_cp2xBlurNineGrid = 0LL;
        if ( v60 )
          (*(void (__fastcall **)(struct CNineGridBrush *))(*(_QWORD *)v60 + 16LL))(v60);
        v61 = CProjectedShadow::s_cp2xBlurSurface;
        CProjectedShadow::s_cp2xBlurSurface = 0LL;
        if ( v61 )
          (*(void (__fastcall **)(struct CSurfaceBrush *))(*(_QWORD *)v61 + 16LL))(v61);
        v57 = CProjectedShadow::s_cp2xBlurAsset;
      }
      if ( !CProjectedShadow::s_cp2xBlurNineGrid )
      {
        CProjectedShadow::s_cp2xBlurNineGrid = 0LL;
        if ( v57 )
        {
          v55 = *(_DWORD *)(*((_QWORD *)v57 + 1) + 16LL);
          v62 = v55 + (_DWORD)v57 + 8;
        }
        else
        {
          v62 = 0;
        }
        v63 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v55,
                v62,
                (unsigned int)&v88,
                (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
        v5 = v63;
        if ( v63 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0x40Cu, 0LL);
          return v5;
        }
      }
      v65 = CProjectedShadow::AdjustNineGridBrush(this, v3, CProjectedShadow::s_cp2xBlurNineGrid);
      v5 = v65;
      if ( v65 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v65, 0x410u, 0LL);
        return v5;
      }
      v6 = CProjectedShadow::s_cp1xBlurNineGrid;
      v7 = CProjectedShadow::s_cp2xBlurNineGrid;
      CProjectedShadow::GetBlurForBoundary(this, 1LL);
      v20 = 2LL;
      goto LABEL_10;
    }
LABEL_63:
    CProjectedShadow::s_cp1xBlurNineGrid = 0LL;
    if ( v50 )
    {
      (*(void (__fastcall **)(struct CNineGridBrush *))(*(_QWORD *)v50 + 16LL))(v50);
      v46 = CProjectedShadow::s_cp1xBlurAsset;
    }
    if ( v46 )
    {
      LODWORD(a2) = *(_DWORD *)(*((_QWORD *)v46 + 1) + 16LL);
      v51 = (_DWORD)a2 + (_DWORD)v46 + 8;
    }
    else
    {
      v51 = 0;
    }
    v52 = CProjectedShadow::GenerateNineGridBrush(
            (_DWORD)this,
            (_DWORD)a2,
            v51,
            (unsigned int)&v88,
            (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
    v5 = v52;
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x3F7u, 0LL);
      return v5;
    }
    v50 = CProjectedShadow::s_cp1xBlurNineGrid;
    goto LABEL_73;
  }
  if ( v2 != 4 )
    goto LABEL_11;
  v67 = CProjectedShadow::s_cp2xBlurAsset;
  if ( !CProjectedShadow::s_cp2xBlurAsset )
  {
    CProjectedShadow::s_cp2xBlurAsset = 0LL;
    v68 = CProjectedShadow::GenerateApproxBlurIntermediate(
            this,
            a2,
            64.0,
            &stru_1802CD888,
            &CProjectedShadow::s_cp2xBlurAsset);
    v5 = v68;
    if ( v68 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0x41Fu, 0LL);
      return v5;
    }
    v70 = CProjectedShadow::s_cp2xBlurNineGrid;
    CProjectedShadow::s_cp2xBlurNineGrid = 0LL;
    if ( v70 )
      (*(void (__fastcall **)(struct CNineGridBrush *))(*(_QWORD *)v70 + 16LL))(v70);
    v71 = CProjectedShadow::s_cp2xBlurSurface;
    CProjectedShadow::s_cp2xBlurSurface = 0LL;
    if ( v71 )
      (*(void (__fastcall **)(struct CSurfaceBrush *))(*(_QWORD *)v71 + 16LL))(v71);
    v67 = CProjectedShadow::s_cp2xBlurAsset;
  }
  if ( !CProjectedShadow::s_cp2xBlurNineGrid )
  {
    CProjectedShadow::s_cp2xBlurNineGrid = 0LL;
    if ( v67 )
    {
      LODWORD(a2) = *(_DWORD *)(*((_QWORD *)v67 + 1) + 16LL);
      v72 = (_DWORD)a2 + (_DWORD)v67 + 8;
    }
    else
    {
      v72 = 0;
    }
    v73 = CProjectedShadow::GenerateNineGridBrush(
            (_DWORD)this,
            (_DWORD)a2,
            v72,
            (unsigned int)&v88,
            (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
    v5 = v73;
    if ( v73 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0x429u, 0LL);
      return v5;
    }
  }
  v75 = CProjectedShadow::AdjustNineGridBrush(this, v3, CProjectedShadow::s_cp2xBlurNineGrid);
  v5 = v75;
  if ( v75 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v75, 0x42Du, 0LL);
    return v5;
  }
  v78 = CProjectedShadow::s_cp2xBlurSurface;
  if ( !CProjectedShadow::s_cp2xBlurSurface )
  {
    CProjectedShadow::s_cp2xBlurSurface = 0LL;
    if ( CProjectedShadow::s_cp2xBlurAsset )
    {
      v76 = *(int *)(*((_QWORD *)CProjectedShadow::s_cp2xBlurAsset + 1) + 16LL);
      v79 = (char *)CProjectedShadow::s_cp2xBlurAsset + v76 + 8;
    }
    else
    {
      v79 = 0LL;
    }
    v80 = CProjectedShadow::GenerateSurfaceBrush(this, v76, v79, &v88, &CProjectedShadow::s_cp2xBlurSurface);
    v5 = v80;
    if ( v80 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, v80, 0x434u, 0LL);
      return v5;
    }
    v78 = CProjectedShadow::s_cp2xBlurSurface;
  }
  v82 = CProjectedShadow::AdjustSurfaceBrush(this, v3, v78);
  v5 = v82;
  if ( v82 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v82, 0x438u, 0LL);
    return v5;
  }
  v6 = CProjectedShadow::s_cp2xBlurNineGrid;
  v7 = CProjectedShadow::s_cp2xBlurSurface;
  CProjectedShadow::GetBlurForBoundary(this, 2LL);
  v20 = 3LL;
LABEL_10:
  v8 = *(float *)&_xmm;
  BlurForBoundary = CProjectedShadow::GetBlurForBoundary(v19, v20);
  v9 = *(float *)&BlurForBoundary;
LABEL_11:
  v87 = (float)(*((float *)this + 22) - v8) / (float)(v9 - v8);
  if ( *((struct CBrush **)this + 41) != v6 || *((struct CBrush **)this + 42) != v7 )
  {
    v39 = *((_QWORD *)this + 46);
    if ( v39 )
    {
      *(_DWORD *)(v39 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v39 + 16, 24LL);
      *(_BYTE *)(v39 + 200) = 1;
      v84 = *((_QWORD *)this + 46);
      *((_QWORD *)this + 46) = 0LL;
      if ( v84 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 8LL))(v84);
    }
  }
  if ( !*((_QWORD *)this + 46) )
  {
    CrossFadeGraph = CProjectedShadow::CreateCrossFadeGraph(this, v6, v7);
    v5 = CrossFadeGraph;
    if ( CrossFadeGraph < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, CrossFadeGraph, 0x450u, 0LL);
      return v5;
    }
    *((_QWORD *)this + 41) = v6;
    *((_QWORD *)this + 42) = v7;
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, _BYTE *, _BYTE *))(**((_QWORD **)this + 47) + 32LL))(
          *((_QWORD *)this + 47),
          0LL,
          69LL,
          (char *)this + 344,
          v85,
          v86);
  v5 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x45Au, 0LL);
  }
  else
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, float *, _BYTE *, _BYTE *))(**((_QWORD **)this + 47)
                                                                                         + 32LL))(
            *((_QWORD *)this + 47),
            1LL,
            18LL,
            &v87,
            v85,
            v86);
    v5 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x45Bu, 0LL);
  }
  return v5;
}
