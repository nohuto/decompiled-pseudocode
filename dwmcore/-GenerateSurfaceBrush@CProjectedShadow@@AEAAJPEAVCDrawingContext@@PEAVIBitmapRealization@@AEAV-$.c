/*
 * XREFs of ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x1802473C0
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180246204 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x180247240 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z @ 0x180049388 (-SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@@Z.c)
 *     ?SetSurfaceContentRect@CSurfaceBrush@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004942C (-SetSurfaceContentRect@CSurfaceBrush@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800B8E38 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z @ 0x18021A388 (-Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z.c)
 *     ??4?$com_ptr_t@VCSurfaceBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCSurfaceBrush@@@Z @ 0x180245744 (--4-$com_ptr_t@VCSurfaceBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCSurfaceBrush@@@.c)
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
  __int64 v9; // rcx
  unsigned int v10; // edi
  CSurfaceBrush *v11; // rax
  __int64 v12; // rcx
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
    v16 = 1265;
    goto LABEL_10;
  }
  v11 = (CSurfaceBrush *)DefaultHeap::AllocClear(0xD8uLL);
  if ( v11 )
    v11 = CSurfaceBrush::CSurfaceBrush(v11, *(struct CComposition **)(a1 + 16));
  wil::com_ptr_t<CSurfaceBrush,wil::err_returncode_policy>::operator=((__int64 *)&v17, (__int64)v11);
  v13 = v17;
  if ( v17 )
  {
    v8 = CSurfaceBrush::SetSurface((struct CResource **)v17, a5);
    v10 = v8;
    if ( v8 >= 0 )
    {
      CSurfaceBrush::SetSurfaceContentRect((__int64)v13, a4);
      v14 = *(_QWORD *)v13;
      *((_DWORD *)v13 + 24) = 0;
      (*(void (__fastcall **)(CSurfaceBrush *, _QWORD, CSurfaceBrush *))(v14 + 72))(v13, 0LL, v13);
      LODWORD(v17) = 0;
      ((void (__fastcall *)(char *, void *, CSurfaceBrush **))xmmword_1803E1BA0)(
        (char *)v13 + SDWORD2(xmmword_1803E1BA0),
        &CSurfaceBrush::sc_HorizontalAlignment,
        &v17);
      LODWORD(v17) = 0;
      ((void (__fastcall *)(char *, void *, CSurfaceBrush **))xmmword_1803E1BD8)(
        (char *)v13 + SDWORD2(xmmword_1803E1BD8),
        &CSurfaceBrush::sc_VerticalAlignment,
        &v17);
      v17 = 0LL;
      *(_QWORD *)v5 = v13;
      goto LABEL_11;
    }
    v16 = 1270;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v16, 0LL);
    goto LABEL_11;
  }
  v10 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x4F4u, 0LL);
LABEL_11:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&a5);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  return v10;
}
