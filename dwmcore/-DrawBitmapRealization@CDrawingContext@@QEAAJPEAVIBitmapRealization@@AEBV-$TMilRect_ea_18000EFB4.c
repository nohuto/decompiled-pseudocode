/*
 * XREFs of ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x18000EFB4
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x18000EF44 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180225690 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x18000F130 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18001178C (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180033864 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180048300 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x180075DFC (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     ?FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMILMatrix3x2@@_N@Z @ 0x180077E84 (-FillShapeWithBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBVCShape@@AEBVMI.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x180078030 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x180078A28 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800921D0 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180095F40 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x1800B520C (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800DB304 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800DF1AC (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800E2990 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapRealization(
        CDrawingContext *this,
        struct IBitmapRealization *a2,
        struct MilRectF *a3,
        struct MILMatrix3x2 *a4,
        bool a5,
        int a6,
        int a7)
{
  int v11; // eax
  float v12; // xmm0_4
  bool v13; // r14
  __int64 v14; // rdx
  gsl::details *v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  const struct CMILMatrix *TopByReference; // rax
  int v21; // xmm1_4
  unsigned int v22; // xmm0_4
  int v23; // xmm1_4
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // [rsp+30h] [rbp-91h] BYREF
  struct CShape *v29; // [rsp+38h] [rbp-89h] BYREF
  int v30; // [rsp+40h] [rbp-81h]
  int v31; // [rsp+44h] [rbp-7Dh]
  float v32; // [rsp+48h] [rbp-79h] BYREF
  struct CShape *v33; // [rsp+50h] [rbp-71h] BYREF
  _BYTE v34[8]; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v35[16]; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v36[80]; // [rsp+70h] [rbp-51h] BYREF

  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v36, a3);
  v11 = *((_DWORD *)this + 812);
  if ( v11 )
    v12 = *(float *)(*((_QWORD *)this + 408) + 4LL * (unsigned int)(v11 - 1));
  else
    v12 = *(float *)&FLOAT_1_0;
  v32 = v12 * *(float *)&a7;
  CWatermarkStack<float,64,2,10>::Push((char *)this + 3248, &v32);
  v33 = 0LL;
  v29 = 0LL;
  v28 = (__int64)&v33;
  LOBYTE(v30) = 1;
  v13 = (int)CDrawingContext::GetUnOccludedWorldShape(this, (const struct CShape *)v36, a6, &v29) >= 0;
  if ( (_BYTE)v30 )
  {
    v14 = *(_QWORD *)v28;
    *(_QWORD *)v28 = v29;
    if ( v14 )
      std::default_delete<CShape>::operator()();
  }
  if ( v13 )
  {
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
    v21 = *((_DWORD *)TopByReference + 1);
    LODWORD(v28) = *(_DWORD *)TopByReference;
    v22 = *((_DWORD *)TopByReference + 4);
    HIDWORD(v28) = v21;
    v29 = (struct CShape *)__PAIR64__(*((_DWORD *)TopByReference + 5), v22);
    v23 = *((_DWORD *)TopByReference + 13);
    v30 = *((_DWORD *)TopByReference + 12);
    v31 = v23;
    MILMatrix3x2::SetInverse((MILMatrix3x2 *)v34, (const struct MILMatrix3x2 *)&v28);
    MILMatrix3x2::SetProduct((MILMatrix3x2 *)&v28, (const struct MILMatrix3x2 *)v34, a4);
    v24 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v18 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x90Du, 0LL);
    }
    else
    {
      v26 = CDrawingContext::FillShapeWithBitmapRealization(this, a2, v33, (const struct MILMatrix3x2 *)&v28, a5);
      v18 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x916u, 0LL);
      CDrawingContext::PopTransformInternal(this, 1);
    }
  }
  else
  {
    CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v34, a2);
    v35[8] = a5;
    v28 = 1LL;
    v29 = a3;
    if ( !a3 )
    {
      gsl::details::terminate(v15);
      __debugbreak();
    }
    v16 = CDrawingContext::FillRectanglesWithDrawListBitmap(this);
    v18 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x91Fu, 0LL);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v35);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v34);
  }
  if ( v33 )
    std::default_delete<CShape>::operator()();
  CDrawingContext::PopAlpha(this, 0);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v36);
  return v18;
}
