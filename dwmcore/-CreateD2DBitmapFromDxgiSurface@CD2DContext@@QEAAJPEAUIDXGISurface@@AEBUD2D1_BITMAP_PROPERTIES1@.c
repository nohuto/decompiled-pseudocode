/*
 * XREFs of ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800DE714
 * Callers:
 *     ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1800DE59C (-EnsureBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x18029BF5C (-EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateD2DBitmapFromDxgiSurface(
        CD2DContext *this,
        struct IDXGISurface *a2,
        const struct D2D1_BITMAP_PROPERTIES1 *a3,
        struct ID2D1Bitmap1 **a4)
{
  __int64 v5; // rax
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx

  v5 = (__int64)this + 1072;
  if ( !this )
    v5 = 1088LL;
  v6 = *(_DWORD *)v5;
  if ( *(int *)v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(1088LL, 0LL, 0, v6, 0xCAu, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct IDXGISurface *, const struct D2D1_BITMAP_PROPERTIES1 *, struct ID2D1Bitmap1 **))(**((_QWORD **)this + 25) + 496LL))(
           *((_QWORD *)this + 25),
           a2,
           a3,
           a4);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xCEu, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(((unsigned __int64)this - 16) & -(__int64)(this != 0LL), v6, 0);
}
