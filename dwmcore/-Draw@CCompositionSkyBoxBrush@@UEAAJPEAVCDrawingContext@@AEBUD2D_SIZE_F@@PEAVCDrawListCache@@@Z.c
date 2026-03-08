/*
 * XREFs of ?Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180222590
 * Callers:
 *     ?Draw@CCompositionSkyBoxBrush@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180119C50 (-Draw@CCompositionSkyBoxBrush@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 * Callees:
 *     ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078D88 (-Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18007E934 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18008D00C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800921D0 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180095F40 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800B2368 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800E7210 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::Draw(
        CCompositionSkyBoxBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  float width; // xmm0_4
  __int64 v9; // rax
  FLOAT v10; // xmm0_4
  FLOAT height; // xmm1_4
  const struct CVisual *v12; // r12
  int D2DGeometry; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  _BYTE v21[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v22[64]; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+90h] [rbp-70h]
  struct ID2D1Geometry *v24; // [rsp+A0h] [rbp-60h] BYREF
  FLOAT v25; // [rsp+A8h] [rbp-58h]
  FLOAT v26; // [rsp+ACh] [rbp-54h]
  _BYTE v27[80]; // [rsp+B0h] [rbp-50h] BYREF

  width = a3->width;
  v21[0] = 0;
  if ( width <= 0.0
    || a3->height <= 0.0
    || !(*(unsigned __int8 (__fastcall **)(char *, struct CDrawingContext *, _BYTE *))(*((_QWORD *)this - 19) + 288LL))(
          (char *)this - 152,
          a2,
          v21)
    || v21[0] )
  {
    return 0;
  }
  v23 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 400), (struct CMILMatrix *)v22);
  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
  v10 = a3->width;
  height = a3->height;
  v24 = 0LL;
  v12 = (const struct CVisual *)v9;
  v25 = v10;
  v26 = height;
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v27, (const struct MilRectF *)&v24);
  v24 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v24);
  D2DGeometry = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v27, (const struct CMILMatrix *)v22, &v24);
  v15 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, D2DGeometry, 0x18Eu, 0LL);
    goto LABEL_12;
  }
  v16 = CDrawingContext::PushD2DLayer(a2, v12, 0LL, (__int64)v24, 0LL, 1.0, 0, 0);
  v15 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x192u, 0LL);
LABEL_12:
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v24);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v27);
    return v15;
  }
  v18 = CBrush::Draw((CCompositionSkyBoxBrush *)((char *)this - 40), a2, a3, a4);
  v15 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x195u, 0LL);
  else
    v15 = 0;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)&v24);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v27);
  CDrawingContext::PopLayer(a2);
  return v15;
}
