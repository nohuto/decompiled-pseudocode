/*
 * XREFs of ?Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z @ 0x18021A388
 * Callers:
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x18021A444 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x1802473C0 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-$.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBitmapResource@@IEAA@PEAVCComposition@@PEAVIBitmapRealization@@@Z @ 0x1800FAAB4 (--0CBitmapResource@@IEAA@PEAVCComposition@@PEAVIBitmapRealization@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::Create(
        struct CComposition *a1,
        struct IBitmapRealization *a2,
        struct CBitmapResource **a3)
{
  unsigned int v3; // ebx
  CBitmapResource *v7; // rax
  __int64 v8; // rcx
  CBitmapResource *v9; // rax
  struct CBitmapResource *v10; // rdi
  CBitmapResource *v12; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v7 = (CBitmapResource *)DefaultHeap::AllocClear(0x78uLL);
  if ( !v7 )
  {
    v12 = 0LL;
    goto LABEL_5;
  }
  v9 = CBitmapResource::CBitmapResource(v7, a1, a2);
  v12 = v9;
  v10 = v9;
  if ( !v9 )
  {
LABEL_5:
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x1Bu, 0LL);
    goto LABEL_6;
  }
  (*(void (__fastcall **)(CBitmapResource *))(*(_QWORD *)v9 + 8LL))(v9);
  v12 = 0LL;
  *a3 = v10;
LABEL_6:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
  return v3;
}
