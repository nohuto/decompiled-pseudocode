/*
 * XREFs of ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x18001D5C4
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180008E78 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x1800201F8 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-.c)
 * Callees:
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x180009404 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ?Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z @ 0x18001D700 (-Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002D180 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x180062108 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18009F7D8 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetSurfaceContentRect@CSurfaceBrush@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A0E68 (-SetSurfaceContentRect@CSurfaceBrush@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x1800A0F2C (-SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadow::GenerateSurfaceBrush(
        __int64 a1,
        __int64 a2,
        struct IBitmapRealization *a3,
        __int64 a4,
        struct CBitmapResource *a5)
{
  struct CBitmapResource *v5; // rsi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  CSurfaceBrush *v11; // rax
  unsigned int v12; // ecx
  CSurfaceBrush *v13; // rbx
  __int64 v14; // rax
  unsigned int v16; // [rsp+20h] [rbp-10h]
  CSurfaceBrush *v17; // [rsp+58h] [rbp+28h] BYREF

  v5 = a5;
  v17 = 0LL;
  a5 = 0LL;
  *(_QWORD *)v5 = 0LL;
  v8 = CBitmapResource::Create(*(struct CComposition **)(a1 + 16), a3, &a5);
  v10 = v8;
  if ( v8 < 0 )
  {
    v16 = 1261;
    goto LABEL_11;
  }
  v11 = (CSurfaceBrush *)DefaultHeap::AllocClear(0xC8uLL);
  if ( v11 )
    v11 = CSurfaceBrush::CSurfaceBrush(v11, *(struct CComposition **)(a1 + 16));
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=((__int64 *)&v17, (__int64)v11);
  v13 = v17;
  if ( !v17 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x4F0u, 0LL);
    goto LABEL_7;
  }
  v8 = CSurfaceBrush::SetSurface(v17, a5);
  v10 = v8;
  if ( v8 < 0 )
  {
    v16 = 1266;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v16, 0LL);
    goto LABEL_7;
  }
  CSurfaceBrush::SetSurfaceContentRect(v13, a4);
  v14 = *(_QWORD *)v13;
  *((_DWORD *)v13 + 22) = 0;
  (*(void (__fastcall **)(CSurfaceBrush *, _QWORD, CSurfaceBrush *))(v14 + 72))(v13, 0LL, v13);
  LODWORD(v17) = 0;
  ((void (__fastcall *)(char *, void *, CSurfaceBrush **))xmmword_1803463D0)(
    (char *)v13 + SDWORD2(xmmword_1803463D0),
    &CSurfaceBrush::sc_HorizontalAlignment,
    &v17);
  LODWORD(v17) = 0;
  ((void (__fastcall *)(char *, void *, CSurfaceBrush **))xmmword_180346408)(
    (char *)v13 + SDWORD2(xmmword_180346408),
    &CSurfaceBrush::sc_VerticalAlignment,
    &v17);
  v17 = 0LL;
  *(_QWORD *)v5 = v13;
LABEL_7:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&a5);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v17);
  return v10;
}
