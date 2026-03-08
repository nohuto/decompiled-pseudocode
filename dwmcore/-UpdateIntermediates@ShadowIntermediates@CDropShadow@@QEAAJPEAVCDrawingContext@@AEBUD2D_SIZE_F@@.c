/*
 * XREFs of ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x1802274AC
 * Callers:
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18022796C (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18003B3A8 (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800618D4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007598C (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800A7190 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x18012E5F4 (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 *     ?CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z @ 0x180225EE8 (-CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z.c)
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapRealization@@M@Z @ 0x1802263E8 (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBV-$TMilR.c)
 *     ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEBAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180226BB0 (-GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEBAJPEAVCDrawingContext@@AEBV-$TMilR.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::UpdateIntermediates(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        float a4)
{
  float width; // xmm2_4
  float height; // xmm1_4
  __int64 *v10; // rsi
  __int64 v11; // rdx
  float v12; // xmm3_4
  float v13; // xmm2_4
  int (__fastcall ***v14)(_QWORD); // rcx
  __int64 v15; // r15
  int (__fastcall ***v16)(_QWORD); // rcx
  float v17; // xmm0_4
  float v18; // xmm0_4
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // edi
  struct IBitmapRealization *v22; // r9
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  float v29; // xmm6_4
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct IBitmapRealization *v36; // r9
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // [rsp+38h] [rbp-39h] BYREF
  struct D2D_SIZE_F v40; // [rsp+40h] [rbp-31h] BYREF
  __int128 v41; // [rsp+48h] [rbp-29h] BYREF
  __int128 v42; // [rsp+58h] [rbp-19h] BYREF
  int v43[4]; // [rsp+68h] [rbp-9h] BYREF

  *((_WORD *)this + 34) = 0;
  v40 = *a3;
  width = v40.width;
  if ( CDropShadow::ShadowIntermediates::IsRectangularShadow(this) )
  {
    if ( v40.width > (float)(a4 + a4) )
    {
      v40.width = a4 + a4;
      width = a4 + a4;
      *((_BYTE *)this + 68) = 1;
    }
    height = v40.height;
    if ( v40.height > (float)(a4 + a4) )
    {
      v40.height = a4 + a4;
      height = a4 + a4;
      *((_BYTE *)this + 69) = 1;
    }
  }
  else
  {
    height = v40.height;
  }
  *(_QWORD *)&v41 = 0LL;
  *((_QWORD *)&v41 + 1) = __PAIR64__(LODWORD(height), LODWORD(width));
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v41, a4, a4);
  PixelAlign((int *)&v42, (float *)&v41);
  v10 = (__int64 *)((char *)this + 56);
  v11 = *((_QWORD *)this + 7);
  v12 = (float)-DWORD1(v42);
  v13 = (float)-(int)v42;
  *((float *)&v41 + 1) = *((float *)&v41 + 1) + v12;
  *(float *)&v41 = *(float *)&v41 + v13;
  *((float *)&v41 + 3) = *((float *)&v41 + 3) + v12;
  *((float *)&v41 + 2) = *((float *)&v41 + 2) + v13;
  if ( v11 )
  {
    v14 = (int (__fastcall ***)(_QWORD))(v11 + 8 + *(int *)(*(_QWORD *)(v11 + 8) + 8LL));
    if ( (**v14)(v14) < 0
      || !TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEquivalentTo(&v42, (_DWORD *)this + 2) )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)this + 7);
    }
  }
  v15 = *v10;
  *(_OWORD *)((char *)this + 8) = v42;
  if ( CDropShadow::ShadowIntermediates::CanUseFastShadow(this, a3, a4) )
  {
    if ( CDropShadow::ShadowIntermediates::s_cpFastShadowBitmap )
    {
      v16 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(CDropShadow::ShadowIntermediates::s_cpFastShadowBitmap
                                                              + 8)
                                                  + 8LL)
                                         + CDropShadow::ShadowIntermediates::s_cpFastShadowBitmap
                                         + 8);
      if ( (**v16)(v16) >= 0 )
      {
LABEL_22:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(
          (__int64 *)this + 7,
          CDropShadow::ShadowIntermediates::s_cpFastShadowBitmap);
        *(_OWORD *)((char *)this + 24) = CDropShadow::ShadowIntermediates::s_rcShadowBitmap;
        goto LABEL_23;
      }
    }
    *(_QWORD *)&v41 = 0x4200000042000000LL;
    v42 = _xmm;
    PixelAlign(v43, (float *)&v42);
    v39 = 0LL;
    v17 = (float)-v43[0];
    *((float *)&v42 + 2) = v17 + 48.0;
    *(float *)&v42 = v17 - 16.0;
    v18 = (float)-v43[1];
    *((float *)&v42 + 3) = v18 + 48.0;
    *((float *)&v42 + 1) = v18 - 16.0;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v39);
    v19 = CDropShadow::ShadowIntermediates::GenerateMaskIntermediate((__int64)this, a2, v43, (__int64)&v41, &v39);
    v21 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x323u, 0LL);
    }
    else
    {
      if ( v39 )
        v22 = (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v39 + 8) + 16LL) + v39 + 8);
      else
        v22 = 0LL;
      v23 = CDropShadow::ShadowIntermediates::GenerateBlurIntermediate((__int64)this, a2, &v42, v22, 16.0);
      v21 = v23;
      if ( v23 >= 0 )
      {
        v25 = *v10;
        *v10 = 0LL;
        v26 = CDropShadow::ShadowIntermediates::s_cpFastShadowBitmap;
        CDropShadow::ShadowIntermediates::s_cpFastShadowBitmap = v25;
        if ( v26 )
        {
          v27 = v26 + 8 + *(int *)(*(_QWORD *)(v26 + 8) + 4LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        CDropShadow::ShadowIntermediates::s_rcShadowBitmap = *(_OWORD *)((char *)this + 24);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v39);
        goto LABEL_22;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x324u, 0LL);
    }
LABEL_33:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v39);
    return v21;
  }
  if ( !*v10 )
  {
    v39 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v39);
    v31 = CDropShadow::ShadowIntermediates::GenerateMaskIntermediate((__int64)this, a2, &v42, (__int64)&v40, &v39);
    v21 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x331u, 0LL);
      goto LABEL_33;
    }
    if ( a4 == 0.0 )
    {
      v33 = v39;
      v34 = *v10;
      v39 = 0LL;
      *v10 = v33;
      if ( v34 )
      {
        v35 = v34 + 8 + *(int *)(*(_QWORD *)(v34 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      *(_OWORD *)((char *)this + 24) = v41;
    }
    else
    {
      if ( v39 )
        v36 = (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v39 + 8) + 16LL) + v39 + 8);
      else
        v36 = 0LL;
      v37 = CDropShadow::ShadowIntermediates::GenerateBlurIntermediate((__int64)this, a2, &v41, v36, a4);
      v21 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x335u, 0LL);
        goto LABEL_33;
      }
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v39);
  }
LABEL_23:
  v28 = *((_QWORD *)this + 6);
  v29 = *(float *)&FLOAT_1_0;
  if ( v28 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 56LL))(v28, 22LL) )
    v29 = *(float *)(*((_QWORD *)this + 6) + 100LL);
  if ( v15 != *v10 || *((float *)this + 16) != v29 )
  {
    *((float *)this + 16) = v29;
    *(_QWORD *)this = GetCurrentFrameId();
  }
  return 0;
}
