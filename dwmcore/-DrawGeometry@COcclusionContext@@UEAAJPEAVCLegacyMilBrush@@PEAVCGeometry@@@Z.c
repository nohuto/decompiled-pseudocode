/*
 * XREFs of ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800E1D70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x1800E1EF8 (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawGeometry(
        COcclusionContext *this,
        struct CLegacyMilBrush *a2,
        struct CGeometry *a3)
{
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  __int64 v7; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  char v10; // [rsp+40h] [rbp-18h]

  if ( (*(unsigned __int8 (__fastcall **)(struct CLegacyMilBrush *, __int64, struct CGeometry *))(*(_QWORD *)a2 + 56LL))(
         a2,
         84LL,
         a3) )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a2);
    if ( CachedBrushCVINoRef )
    {
      v8[0] = *((_QWORD *)this + 149);
      v7 = *((_QWORD *)this + 1);
      v8[1] = CachedBrushCVINoRef;
      v9 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v10 = 0;
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v7 + 208LL))(v7, v8);
    }
  }
  return 0LL;
}
