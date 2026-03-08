/*
 * XREFs of ?Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D8670
 * Callers:
 *     <none>
 * Callees:
 *     ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078D88 (-Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18007FE50 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800D87F0 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800DF1AC (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1AEBU_D3DCOLORVALUE@@@Z @ 0x1802237F8 (-DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 *     ?DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1802239F4 (-DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CBitmapRenderStrategy::Draw(
        CBitmapRenderStrategy *this,
        struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        struct CDrawListCache *a5)
{
  void (__fastcall ***v6)(_QWORD, GUID *, struct IBitmapResource **); // rcx
  unsigned int v7; // edi
  char v11; // r12
  int v12; // eax
  __int64 v13; // rcx
  char *v14; // rcx
  struct CShape *v16; // rcx
  bool v17; // bl
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  float width; // xmm0_4
  float height; // xmm1_4
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  char v27; // [rsp+30h] [rbp-81h]
  __int64 v28; // [rsp+38h] [rbp-79h] BYREF
  struct IBitmapResource *v29; // [rsp+40h] [rbp-71h] BYREF
  _BYTE v30[40]; // [rsp+48h] [rbp-69h] BYREF
  struct CShape *v31[2]; // [rsp+70h] [rbp-41h] BYREF
  char v32; // [rsp+80h] [rbp-31h]
  _DWORD v33[4]; // [rsp+88h] [rbp-29h] BYREF
  _BYTE v34[16]; // [rsp+98h] [rbp-19h] BYREF
  _BYTE v35[16]; // [rsp+A8h] [rbp-9h] BYREF

  v6 = (void (__fastcall ***)(_QWORD, GUID *, struct IBitmapResource **))*((_QWORD *)a2 + 13);
  v7 = 0;
  v29 = 0LL;
  (**v6)(v6, &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c, &v29);
  v11 = (*(__int64 (__fastcall **)(CBitmapRenderStrategy *, struct CSurfaceBrush *, _BYTE *))(*(_QWORD *)this + 24LL))(
          this,
          a2,
          v34);
  v27 = (*(__int64 (__fastcall **)(CBitmapRenderStrategy *, struct CSurfaceBrush *, _BYTE *))(*(_QWORD *)this + 32LL))(
          this,
          a2,
          v35);
  (*(void (__fastcall **)(struct IBitmapResource *, unsigned __int64))(*(_QWORD *)v29 + 32LL))(
    v29,
    -(__int64)(*((_BYTE *)a3 + 192) != 0) & ((unsigned __int64)a3 + 164));
  if ( !CDrawingContext::DrawAsOverlay(a3, v29) )
  {
    v12 = CBrush::Draw((struct CSurfaceBrush *)((char *)a2 + 112), a3, a4, a5);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x41Cu, 0LL);
      goto LABEL_5;
    }
  }
  if ( !v11 )
    goto LABEL_4;
  v28 = 0LL;
  v31[0] = (struct CShape *)&v28;
  v31[1] = 0LL;
  v32 = 1;
  v17 = (int)CSurfaceBrush::ComputeLayout(a2, a4, (struct CContent::LayoutData *)v30, &v31[1]) >= 0;
  if ( v32 )
  {
    v16 = v31[0];
    v18 = *(_QWORD *)v31[0];
    *(_QWORD *)v31[0] = v31[1];
    if ( v18 )
      std::default_delete<CShape>::operator()(v16, v18);
  }
  if ( !v17 )
    goto LABEL_20;
  *(_OWORD *)v31 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, struct CShape **, _QWORD))(*(_QWORD *)v28 + 48LL))(v28, v31, 0LL);
  v7 = v19;
  if ( v19 >= 0 )
  {
    width = a4->width;
    height = a4->height;
    v33[0] = 0;
    v33[1] = 0;
    *(float *)&v33[2] = width + 0.0;
    *(float *)&v33[3] = height + 0.0;
    v23 = CCompositionSurfaceBitmap::DrawContentBorders(a3, v33, v31, v34);
    v7 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, v23, 0x43Au, 0LL);
      goto LABEL_18;
    }
LABEL_20:
    if ( v28 )
      std::default_delete<CShape>::operator()(v16, v28);
LABEL_4:
    if ( v27 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a2 + 13) + 56LL))(
             *((_QWORD *)a2 + 13),
             42LL) )
      {
        v25 = CCompositionSurfaceBitmap::DrawLetterboxingMargins(*((CCompositionSurfaceBitmap **)a2 + 13), a3, a4);
        v7 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x442u, 0LL);
      }
    }
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x42Eu, 0LL);
LABEL_18:
  if ( v28 )
    std::default_delete<CShape>::operator()(v24, v28);
LABEL_5:
  if ( v29 )
  {
    v14 = (char *)v29 + *(int *)(*((_QWORD *)v29 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v7;
}
