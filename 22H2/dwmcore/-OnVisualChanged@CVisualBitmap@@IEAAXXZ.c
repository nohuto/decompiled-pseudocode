/*
 * XREFs of ?OnVisualChanged@CVisualBitmap@@IEAAXXZ @ 0x18021F598
 * Callers:
 *     ?SetVisual@?$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@QEAAJPEAVCVisual@@@Z @ 0x1801CA338 (-SetVisual@-$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18003A5F4 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x18021EE80 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 */

void __fastcall CVisualBitmap::OnVisualChanged(CVisualBitmap *this)
{
  __int64 v2; // rcx
  CVisual *v3; // rcx

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 13) = 0LL;
  }
  ReleaseInterface<CVisualTree>((__int64 *)this + 12);
  v3 = (CVisual *)*((_QWORD *)this + 9);
  if ( v3 )
    CVisual::GetVisualTree(v3, (struct CVisualTree **)this + 12);
}
