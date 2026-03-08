/*
 * XREFs of ?ColorConvertBitmap@CCursorState@@CA?AV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAUIWICBitmap@@@Z @ 0x180276590
 * Callers:
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802768A4 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800A7854 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSystemMemoryBitmap@@@Z @ 0x180275960 (--0-$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCSystemMemoryBit.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x18027DC4C (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 */

CSystemMemoryBitmap **__fastcall CCursorState::ColorConvertBitmap(CSystemMemoryBitmap **a1, __int64 a2)
{
  CSystemMemoryBitmap *v4; // rax
  int v5; // eax
  CSystemMemoryBitmap *v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  const char *v14; // r9
  unsigned int v15; // ecx
  _DWORD *v16; // rdx
  int *v17; // r8
  int v19; // [rsp+20h] [rbp-19h]
  int v20; // [rsp+20h] [rbp-19h]
  unsigned int v21; // [rsp+30h] [rbp-9h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-5h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-1h] BYREF
  int v24; // [rsp+3Ch] [rbp+3h] BYREF
  _DWORD *v25; // [rsp+40h] [rbp+7h] BYREF
  int *v26; // [rsp+48h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+50h] [rbp+17h] BYREF
  __int64 v28; // [rsp+58h] [rbp+1Fh] BYREF
  _DWORD v29[4]; // [rsp+60h] [rbp+27h] BYREF
  _DWORD v30[4]; // [rsp+70h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  v4 = (CSystemMemoryBitmap *)operator new(0xD8uLL);
  if ( v4 )
    v4 = CSystemMemoryBitmap::CSystemMemoryBitmap(v4, 1);
  wil::com_ptr_t<CSystemMemoryBitmap,wil::err_returncode_policy>::com_ptr_t<CSystemMemoryBitmap,wil::err_returncode_policy>(
    a1,
    (__int64)v4);
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v21, &v22);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      212LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v5,
      v19);
  v6 = *a1;
  v29[2] = 0;
  v29[0] = 87;
  v29[1] = 1;
  v7 = CSystemMemoryBitmap::HrInit(v6, v21, v22, (const struct PixelFormatInfo *)v29, 0);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      218LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v7,
      v20);
  v30[0] = 0;
  v30[1] = 0;
  v28 = 0LL;
  v30[2] = v21;
  v30[3] = v22;
  v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, v30, 1LL, &v28);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      223LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v8,
      v20);
  v9 = (*(__int64 (__fastcall **)(__int64, int *, _DWORD **))(*(_QWORD *)v28 + 40LL))(v28, &v24, &v25);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      228LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v9,
      v20);
  v10 = (__int64 *)((char *)*a1 + 24);
  v11 = *v10;
  v27 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, __int64, __int64 *))(v11 + 24))(v10, v30, 2LL, &v27);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      231LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v12,
      v20);
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *, int **))(*(_QWORD *)v27 + 24LL))(v27, &v23, &v26);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      236LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v13,
      v20);
  if ( v24 != v23 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      239LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      v14);
  v15 = v23 >> 2;
  if ( v23 >> 2 )
  {
    v16 = v25;
    v17 = v26;
    do
    {
      *v17 = *v16 ^ (~*v16 << 24);
      v16 = v25 + 1;
      v17 = v26 + 1;
      ++v25;
      ++v26;
      --v15;
    }
    while ( v15 );
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v27);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v28);
  return a1;
}
