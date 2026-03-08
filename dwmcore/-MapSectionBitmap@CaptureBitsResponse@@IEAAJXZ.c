/*
 * XREFs of ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800207D8
 * Callers:
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x1800206D0 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1801DCD50 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800A7684 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::MapSectionBitmap(CaptureBitsResponse *this)
{
  void *v2; // rax
  unsigned __int8 *v3; // rax
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v8; // ecx
  signed int v9; // ebx
  char *v10; // rcx
  signed int LastError; // eax
  unsigned int v13; // ecx
  unsigned int dwNumberOfBytesToMap; // [rsp+20h] [rbp-28h]
  struct IBitmapSource *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  SetLastError(0);
  v2 = MapViewOfFile(*((HANDLE *)this + 207), 2u, 0, 0, *((unsigned int *)this + 418));
  *((_QWORD *)this + 208) = v2;
  if ( v2 )
  {
    memset_0(v2, 0, *((unsigned int *)this + 418));
    v3 = (unsigned __int8 *)*((_QWORD *)this + 208);
    v4 = *((_DWORD *)this + 418);
    v5 = *((_DWORD *)this + 419);
    v6 = *((_DWORD *)this + 410);
    v15 = 0LL;
    v7 = HrCreateBitmapFromMemoryEx(
           *((_DWORD *)this + 409),
           v6,
           (CaptureBitsResponse *)((char *)this + 1644),
           v5,
           v4,
           v3,
           0LL,
           &v15);
    v9 = v7;
    if ( v7 < 0 )
    {
      dwNumberOfBytesToMap = 269;
    }
    else
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((char *)this + 1680);
      v10 = (char *)v15 + *(int *)(*((_QWORD *)v15 + 1) + 4LL) + 8;
      v7 = (**(__int64 (__fastcall ***)(char *, GUID *, char *))v10)(
             v10,
             &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
             (char *)this + 1680);
      v9 = v7;
      if ( v7 >= 0 )
        goto LABEL_4;
      dwNumberOfBytesToMap = 272;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, dwNumberOfBytesToMap, 0LL);
    goto LABEL_4;
  }
  LastError = GetLastError();
  v9 = LastError;
  if ( LastError > 0 )
    v9 = (unsigned __int16)LastError | 0x80070000;
  if ( v9 >= 0 )
    v9 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v9, 0x100u, 0LL);
LABEL_4:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v15);
  return (unsigned int)v9;
}
