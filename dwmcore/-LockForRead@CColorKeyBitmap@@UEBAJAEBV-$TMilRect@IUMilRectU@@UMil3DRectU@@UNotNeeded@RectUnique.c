/*
 * XREFs of ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1802B40B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800A8170 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18029C1D0 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z @ 0x1802B317C (-ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z.c)
 */

__int64 __fastcall CColorKeyBitmap::LockForRead(CColorKeyBitmap *this, _DWORD *a2, __int64 a3)
{
  __int64 v6; // rcx
  char *v7; // rcx
  const struct PixelFormatInfo *v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v29; // [rsp+30h] [rbp-50h] BYREF
  struct IBitmapDest *v30; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v32; // [rsp+44h] [rbp-3Ch] BYREF
  _DWORD v33[2]; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 *v34; // [rsp+50h] [rbp-30h] BYREF
  struct WICRect v35; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v36[16]; // [rsp+68h] [rbp-18h] BYREF

  (**(void (__fastcall ***)(CColorKeyBitmap *, _DWORD *))this)(this, v33);
  v35.Width = v33[0];
  v35.Height = v33[1];
  *(_QWORD *)&v35.X = 0LL;
  if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)&v35, (__int64)a2) )
  {
    v30 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v30);
    v7 = (char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8;
    v8 = (const struct PixelFormatInfo *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v7)(v7, v36);
    v9 = HrCreateDestBitmap(a2[2] - *a2, a2[3] - a2[1], v8, &v30);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x96u, 0LL);
    }
    else
    {
      v35.Width = a2[2] - *a2;
      v35.Height = a2[3] - a2[1];
      *(_QWORD *)&v35.X = 0LL;
      v12 = *(_QWORD *)v30;
      v29 = 0LL;
      v13 = (*(__int64 (__fastcall **)(struct IBitmapDest *, struct WICRect *, __int64, __int64 *))(v12 + 24))(
              v30,
              &v35,
              2LL,
              &v29);
      v11 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x9Cu, 0LL);
      }
      else
      {
        v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 16LL))(v29, &v31);
        v11 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x9Fu, 0LL);
        }
        else
        {
          v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v29 + 24LL))(
                  v29,
                  &v32,
                  &v34);
          v11 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xA3u, 0LL);
          }
          else
          {
            v19 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, unsigned __int8 *))(**((_QWORD **)this + 5)
                                                                                                 + 24LL))(
                    *((_QWORD *)this + 5),
                    a2,
                    v31,
                    v32,
                    v34);
            v11 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xA9u, 0LL);
            }
            else
            {
              v22 = CColorKeyBitmap::ApplyColorKeyToBuffer(this, &v35, v31, v21, v34);
              v11 = v22;
              if ( v22 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xAFu, 0LL);
              }
              else
              {
                v24 = v29;
                v29 = 0LL;
                if ( v24 )
                {
                  v25 = v24 + 8 + *(int *)(*(_QWORD *)(v24 + 8) + 4LL);
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
                }
                v26 = (*(__int64 (__fastcall **)(struct IBitmapDest *, struct WICRect *, __int64, __int64))(*(_QWORD *)v30 + 24LL))(
                        v30,
                        &v35,
                        1LL,
                        a3);
                v11 = v26;
                if ( v26 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xB5u, 0LL);
              }
            }
          }
        }
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v30);
  }
  else
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0xB9u, 0LL);
  }
  return v11;
}
