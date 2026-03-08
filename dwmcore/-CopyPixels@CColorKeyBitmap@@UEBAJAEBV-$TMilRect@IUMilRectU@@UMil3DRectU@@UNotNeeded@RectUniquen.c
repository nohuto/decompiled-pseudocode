/*
 * XREFs of ?CopyPixels@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802B3310
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800A6708 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorKeyBitmap::CopyPixels(
        __int64 *a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  __int64 v6; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int8 *Src; // rsi
  unsigned int v16; // r14d
  unsigned int v17; // r15d
  unsigned int v18; // edi
  unsigned int v19; // ebx
  int *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v24; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-29h] BYREF
  unsigned int v26; // [rsp+5Ch] [rbp-25h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-21h]
  unsigned __int8 *v28; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int8 *v29; // [rsp+70h] [rbp-11h]
  _BYTE v30[16]; // [rsp+78h] [rbp-9h] BYREF

  v29 = a5;
  v6 = *a1;
  v27 = a4;
  v24 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, __int64 *))(v6 + 32))(a1, a2, &v24);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x6Du, 0LL);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 16LL))(v24, &v26);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x70u, 0LL);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v24 + 24LL))(
              v24,
              &v25,
              &v28);
      v10 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x74u, 0LL);
      }
      else
      {
        Src = v28;
        v16 = v25;
        v17 = v26;
        v18 = a2[3] - a2[1];
        v19 = a2[2] - *a2;
        v20 = (int *)(**(__int64 (__fastcall ***)(__int64, _BYTE *))v24)(v24, v30);
        v21 = CBitmap::CopyPixelsHelper(*v20, v19, v18, v17, v16, Src, a3, v27, v29);
        v10 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x7Fu, 0LL);
      }
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v24);
  return v10;
}
