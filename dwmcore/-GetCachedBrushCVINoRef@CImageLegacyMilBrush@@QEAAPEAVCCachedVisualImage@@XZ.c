/*
 * XREFs of ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x1800E1EF8
 * Callers:
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800E1D70 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@@Z @ 0x1800E1E30 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct CCachedVisualImage *__fastcall CImageLegacyMilBrush::GetCachedBrushCVINoRef(CImageLegacyMilBrush *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx

  v1 = *((_QWORD *)this + 23);
  v2 = 0LL;
  if ( v1 && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v1 + 56LL))(*((_QWORD *)this + 23), 18LL) )
    return (struct CCachedVisualImage *)v1;
  return (struct CCachedVisualImage *)v2;
}
