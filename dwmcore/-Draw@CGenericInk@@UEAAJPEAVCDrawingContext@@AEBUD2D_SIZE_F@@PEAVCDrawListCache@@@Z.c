/*
 * XREFs of ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180229C78
 * Callers:
 *     ?Draw@CGenericInk@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180118170 (-Draw@CGenericInk@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18008D070 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180090D28 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x1800911EC (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800B2368 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C9B00 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x1801D35EC (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z.c)
 *     wil::details::lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___::_lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___ @ 0x1802296EC (wil--details--lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___--_lambda_call__lambda_3425.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x18022A480 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPointAndSizeL@@@Z @ 0x18026FF50 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 */

__int64 __fastcall CGenericInk::Draw(
        CGenericInk *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int DirectInkWetStroke; // eax
  __int64 v6; // r8
  unsigned int v7; // ebx
  struct IDCompositionDirectInkWetStrokePartner *v8; // rbx
  bool v9; // r15
  bool v10; // di
  int v11; // edi
  __int64 v12; // rdx
  int v13; // esi
  int v14; // eax
  float v15; // xmm4_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  int v19; // eax
  char v21; // [rsp+30h] [rbp-89h] BYREF
  bool v22[7]; // [rsp+31h] [rbp-88h] BYREF
  CDrawingContext *v23; // [rsp+38h] [rbp-81h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v24; // [rsp+40h] [rbp-79h] BYREF
  int v25; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v26[64]; // [rsp+50h] [rbp-69h] BYREF
  int v27; // [rsp+90h] [rbp-29h]
  __int128 v28; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v29; // [rsp+B0h] [rbp-9h] BYREF
  char v30; // [rsp+C0h] [rbp+7h]
  __int128 v31; // [rsp+C8h] [rbp+Fh] BYREF
  __int128 v32; // [rsp+D8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v24 = 0LL;
  v23 = a2;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v24);
  DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke(
                         (CGenericInk *)((char *)this - 432),
                         *((struct CD3DDevice **)v23 + 5),
                         &v24);
  v7 = DirectInkWetStroke;
  if ( DirectInkWetStroke < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)DirectInkWetStroke);
    goto LABEL_41;
  }
  v8 = v24;
  v9 = 0;
  v10 = 0;
  v22[0] = 0;
  v21 = 0;
  if ( CCommonRegistryData::GammaBlendPencil )
  {
    v11 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, int *))(*(_QWORD *)v24 + 64LL))(
            v24,
            &v25);
    if ( v11 < 0 )
    {
      v12 = 196LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)v11);
      v7 = v11;
      goto LABEL_41;
    }
    v10 = v25 && CDrawingContext::IsHDRTarget(v23);
  }
  v13 = 0;
  if ( *((_QWORD *)this - 43) )
  {
    v14 = CSuperWetInkManager::TryRegisterSuperWetForDraw(
            *(CSuperWetInkManager **)(*((_QWORD *)this - 52) + 256LL),
            (CGenericInk *)((char *)this - 432),
            v23,
            v10,
            v22);
    v9 = v22[0];
    v13 = v14;
  }
  if ( v10 )
  {
    v31 = 0LL;
    v11 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, __int128 *))(*(_QWORD *)v8 + 32LL))(
            v8,
            &v31);
    if ( v11 < 0 )
    {
      v12 = 214LL;
      goto LABEL_6;
    }
    v27 = 0;
    v29 = v31;
    v28 = 0LL;
    v32 = 0LL;
    CMatrixStack::Top((CDrawingContext *)((char *)v23 + 400), (struct CMILMatrix *)v26);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v26, (struct MilRectF *)&v29, (float *)&v28);
    CDrawingContext::GetClipBoundsWorld((__int64)v23, (float *)&v32);
    v15 = *(float *)&v28;
    if ( *(float *)&v32 > *(float *)&v28 )
    {
      LODWORD(v28) = v32;
      v15 = *(float *)&v32;
    }
    v16 = *((float *)&v28 + 1);
    if ( *((float *)&v32 + 1) > *((float *)&v28 + 1) )
    {
      DWORD1(v28) = DWORD1(v32);
      v16 = *((float *)&v32 + 1);
    }
    v17 = *((float *)&v28 + 2);
    if ( *((float *)&v28 + 2) > *((float *)&v32 + 2) )
    {
      DWORD2(v28) = DWORD2(v32);
      v17 = *((float *)&v32 + 2);
    }
    v18 = *((float *)&v28 + 3);
    if ( *((float *)&v28 + 3) > *((float *)&v32 + 3) )
    {
      HIDWORD(v28) = HIDWORD(v32);
      v18 = *((float *)&v32 + 3);
    }
    if ( v17 <= v15 || v18 <= v16 )
      v28 = 0uLL;
    v11 = AlignRectFToPointAndSizeL(&v28, &v29);
    if ( v11 < 0 )
    {
      v12 = 233LL;
      goto LABEL_6;
    }
    if ( SDWORD2(v29) > 0 && SHIDWORD(v29) > 0 )
    {
      v11 = CDrawingContext::PushGammaBlendLayer((struct IDeviceTarget **)v23, (const struct MilPointAndSizeL *)&v29);
      if ( v11 < 0 )
      {
        v12 = 237LL;
        goto LABEL_6;
      }
      v21 = 1;
    }
  }
  dword_1803E29F4 |= 1u;
  *(_QWORD *)&v29 = &v21;
  v30 = 1;
  *((_QWORD *)&v29 + 1) = &v23;
  LOBYTE(v6) = !v9;
  v19 = (*(__int64 (__fastcall **)(char *, struct IDCompositionDirectInkWetStrokePartner *, __int64))(*((_QWORD *)v23 + 2) + 64LL))(
          (char *)v23 + 16,
          v8,
          v6);
  v7 = v19;
  if ( v19 >= 0 )
  {
    if ( v13 >= 0 )
    {
      **((_DWORD **)this - 18) = 0;
      if ( v21 )
        CDrawingContext::PopLayerInternal((__int64)v23);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x101,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)v13);
      wil::details::lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___::_lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___((__int64)&v29);
      v7 = v13;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)v19);
    wil::details::lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___::_lambda_call__lambda_34259e71d2ff4394552eb19e2662e2a9___((__int64)&v29);
  }
LABEL_41:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
  return v7;
}
