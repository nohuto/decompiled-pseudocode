/*
 * XREFs of ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z @ 0x1802B34B0
 * Callers:
 *     ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x1802AD11C (-Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CColorKeyBitmap@@IEAA@AEBVCColorKey@@@Z @ 0x1802B2F90 (--0CColorKeyBitmap@@IEAA@AEBVCColorKey@@@Z.c)
 *     ?Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z @ 0x1802B3EDC (-Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z.c)
 */

__int64 __fastcall CColorKeyBitmap::Create(
        struct IBitmapRealization *a1,
        const struct CColorKey *a2,
        struct CColorKeyBitmap **a3)
{
  CColorKeyBitmap *v6; // rax
  __int64 v7; // rcx
  CColorKeyBitmap *v8; // rax
  CColorKeyBitmap *v9; // rsi
  char *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  v6 = (CColorKeyBitmap *)operator new(0xC0uLL);
  if ( !v6 )
  {
    v9 = 0LL;
    goto LABEL_6;
  }
  v8 = CColorKeyBitmap::CColorKeyBitmap(v6, a2);
  v9 = v8;
  if ( !v8 )
  {
LABEL_6:
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x16u, 0LL);
    goto LABEL_7;
  }
  v10 = (char *)v8 + *(int *)(*((_QWORD *)v8 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = CColorKeyBitmap::Initialize(v9, a1);
  v13 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x18u, 0LL);
LABEL_7:
  v16 = 0LL;
  *a3 = v9;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v15);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v16);
  return v13;
}
