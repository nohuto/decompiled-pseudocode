/*
 * XREFs of ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x1802B1DC8
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18003D844 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800A7684 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1802B211C (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802B8B58 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::FormatConvertLock(
        CSecondaryD2DBitmap *this,
        struct IBitmapLock *a2,
        struct IBitmapLock **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  struct WICRect *v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  struct IBitmapDest *v23; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-11h] BYREF
  unsigned int v25; // [rsp+4Ch] [rbp-Dh] BYREF
  unsigned int v26; // [rsp+50h] [rbp-9h] BYREF
  unsigned int v27; // [rsp+54h] [rbp-5h] BYREF
  struct IBitmapSource *v28; // [rsp+58h] [rbp-1h] BYREF
  struct IBitmapSource *v29; // [rsp+60h] [rbp+7h] BYREF
  _DWORD v30[4]; // [rsp+68h] [rbp+Fh] BYREF
  unsigned __int8 *v31; // [rsp+78h] [rbp+1Fh] BYREF
  _BYTE v32[16]; // [rsp+80h] [rbp+27h] BYREF

  v29 = 0LL;
  v28 = 0LL;
  v23 = 0LL;
  (**(void (__fastcall ***)(struct IBitmapLock *, _BYTE *))a2)(a2, v32);
  v30[0] = *((_DWORD *)this + 42);
  v30[1] = *((_DWORD *)this + 51);
  v30[2] = *((_DWORD *)this + 58);
  v6 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *, unsigned int *))(*(_QWORD *)a2 + 8LL))(
         a2,
         &v27,
         &v26);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xD1u, 0LL);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(*(_QWORD *)a2 + 16LL))(a2, &v25);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xD4u, 0LL);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *, unsigned __int8 **))(*(_QWORD *)a2 + 24LL))(
              a2,
              &v24,
              &v31);
      v8 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xD8u, 0LL);
      }
      else
      {
        v13 = HrCreateBitmapFromMemoryEx(v27, v26, (const struct PixelFormatInfo *)v32, v25, v24, v31, 0LL, &v29);
        v8 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xE1u, 0LL);
        }
        else
        {
          v15 = CFormatConverter::HrConvertBitmap(v29, (const struct PixelFormatInfo *)v30, &v28);
          v8 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xE6u, 0LL);
          }
          else
          {
            wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v23);
            v18 = HrCreateDestBitmapCopy(v28, v17, &v23);
            v8 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xEBu, 0LL);
            }
            else
            {
              v20 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, struct IBitmapLock **))(*(_QWORD *)v23 + 24LL))(
                      v23,
                      0LL,
                      1LL,
                      a3);
              v8 = v20;
              if ( v20 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xEFu, 0LL);
            }
          }
        }
      }
    }
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v23);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v28);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
  return v8;
}
