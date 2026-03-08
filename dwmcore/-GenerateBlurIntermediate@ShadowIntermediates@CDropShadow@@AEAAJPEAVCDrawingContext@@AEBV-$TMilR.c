/*
 * XREFs of ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapRealization@@M@Z @ 0x1802263E8
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x1802274AC (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ??1?$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029D68 (--1-$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180033864 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x180033894 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180035AF0 (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ?DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU4@@Z @ 0x180038318 (-DeterminePreScale@CBlurRenderingGraph@@SAXAEBUEffectInput@@0W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@A.c)
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x1800384E8 (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800938E0 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x180093FA0 (--1EffectInput@@QEAA@XZ.c)
 *     ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@PEAPEAV1@@Z @ 0x1800D1764 (-Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::GenerateBlurIntermediate(
        __int64 a1,
        struct CDrawingContext *a2,
        __int128 *a3,
        struct IBitmapRealization *a4,
        float a5)
{
  __int128 v9; // xmm0
  __int64 *v10; // rax
  __int64 v11; // rax
  enum D3D_FEATURE_LEVEL v12; // edx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  CExternalEffectGraph *v16; // rcx
  __int64 v18; // rdi
  struct D2D_MATRIX_3X2_F v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20[4]; // [rsp+48h] [rbp-B8h] BYREF
  struct D2D_VECTOR_2F v21[2]; // [rsp+58h] [rbp-A8h]
  __int128 v22; // [rsp+70h] [rbp-90h] BYREF
  char v23; // [rsp+80h] [rbp-80h]
  char v24; // [rsp+9Ch] [rbp-64h]
  __int128 v25; // [rsp+A0h] [rbp-60h]
  __int128 v26; // [rsp+C4h] [rbp-3Ch]
  char v27; // [rsp+D4h] [rbp-2Ch]
  _BYTE v28[8]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v29[9]; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v30; // [rsp+134h] [rbp+34h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v23 = 0;
  v22 = 0LL;
  v25 = 0LL;
  EffectInput::Reset((struct EffectInput *)&v22);
  v9 = *a3;
  v24 = 1;
  v27 = 1;
  v26 = v9;
  EffectInput::EffectInput((EffectInput *)v28, (const struct EffectInput *)&v22);
  v10 = (__int64 *)CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v19.m[2], a4);
  CDrawListBitmap::operator=((__int64 *)&v22, v10);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v20);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v19.m[2]);
  v19.m11 = a5 / 3.0;
  v19.m12 = a5 / 3.0;
  CBlurRenderingGraph::DeterminePreScale((const struct EffectInput *)&v22, (const struct EffectInput *)v28, 1, &v19);
  v11 = *((_QWORD *)a2 + 5);
  *(_QWORD *)&v19.m[1][0] = 0LL;
  v12 = *(_DWORD *)(v11 + 584);
  *(_QWORD *)&v19.m[2][0] = "DWM DropShadow";
  v19.m11 = v19.m11 * v21[0].x;
  v19.m12 = v19.m12 * v21[0].y;
  v20[0] = 14;
  v13 = CBlurRenderingGraph::Create(
          (const struct CResourceTag *)v19.m[2],
          v12,
          (const struct D2D_VECTOR_2F *)&v19,
          D2D1_GAUSSIANBLUR_OPTIMIZATION_BALANCED,
          (struct CBlurRenderingGraph **)v19.m[1]);
  v14 = v13;
  if ( v13 < 0 )
  {
    v15 = 943LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\dropshadow.cpp",
      (const char *)(unsigned int)v13);
    wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>((__int64 *)v19.m[1]);
    EffectInput::~EffectInput((EffectInput *)v28);
    EffectInput::~EffectInput((EffectInput *)&v22);
    return v14;
  }
  v16 = *(CExternalEffectGraph **)&v19.m[1][0];
  *(struct D2D_VECTOR_2F *)(*(_QWORD *)&v19.m[1][0] + 1588LL) = v21[0];
  v13 = CExternalEffectGraph::Render(v16, a2, (const struct EffectInput *)&v22, (struct EffectInput *)v28);
  v14 = v13;
  if ( v13 < 0 )
  {
    v15 = 949LL;
    goto LABEL_5;
  }
  v18 = v29[0] + *(int *)(*(_QWORD *)(v29[0] + 8LL) + 4LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)(a1 + 56));
  (**(void (__fastcall ***)(__int64, GUID *, __int64))(v18 + 8))(
    v18 + 8,
    &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
    a1 + 56);
  *(_OWORD *)&v21[0].x = v30;
  *(_OWORD *)(a1 + 24) = v30;
  wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>((__int64 *)v19.m[1]);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v29);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v28);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v22 + 8);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v22);
  return 0LL;
}
