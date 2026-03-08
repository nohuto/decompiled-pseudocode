/*
 * XREFs of ?CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z @ 0x180282DBC
 * Callers:
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180275E0C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateBitmapFromWicBitmap(
        CD2DContext *this,
        struct IWICBitmapSource *a2,
        struct ID2D1Bitmap **a3)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // edi

  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IWICBitmapSource *, _QWORD, struct ID2D1Bitmap **))(**((_QWORD **)this + 25) + 40LL))(
         *((_QWORD *)this + 25),
         a2,
         0LL,
         a3);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1803B6D08, 0xAu, v4, 0x10Eu, 0LL);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(((unsigned __int64)this - 16) & -(__int64)(this != 0LL), v6, 0);
}
