/*
 * XREFs of ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x180109474
 * Callers:
 *     ?Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z @ 0x1801092C8 (-Initialize@CLegacyRemotingSwapChain@@IEAAJPEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800A7684 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::EnsureBitmapDest(CLegacyRemotingSwapChain *this)
{
  void **v1; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  void (__fastcall ***v5)(_QWORD, unsigned int *); // rcx
  __int64 (__fastcall ***v6)(_QWORD, _BYTE *); // rcx
  int *v7; // rax
  unsigned __int8 PixelFormatSize; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  NTSTATUS v14; // ebx
  HANDLE CurrentProcess; // rax
  NTSTATUS v16; // ebx
  __int64 v17; // rdx
  unsigned __int8 *v18; // rbx
  __int64 (__fastcall ***v19)(_QWORD, _BYTE *); // rcx
  const struct PixelFormatInfo *v20; // rax
  int v21; // eax
  char *v22; // rcx
  int v24; // r9d
  unsigned int SectionPageProtection; // [rsp+28h] [rbp-39h]
  struct IBitmapSource *v26; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v28; // [rsp+64h] [rbp+3h]
  union _LARGE_INTEGER MaximumSize; // [rsp+68h] [rbp+7h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+Fh] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+78h] [rbp+17h] BYREF
  _BYTE v32[16]; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = (void **)((char *)this + 200);
  v3 = 0;
  if ( ((*((_QWORD *)this + 25) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v4 = *((_QWORD *)this + 10);
    v26 = 0LL;
    v5 = (void (__fastcall ***)(_QWORD, unsigned int *))(v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 16LL));
    (**v5)(v5, &v27);
    v6 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 10)
                                                   + 8LL
                                                   + *(int *)(*(_QWORD *)(*((_QWORD *)this + 10) + 8LL) + 12LL));
    v7 = (int *)(**v6)(v6, v32);
    PixelFormatSize = GetPixelFormatSize(*v7);
    v10 = v27 * ((unsigned __int64)PixelFormatSize >> 3);
    if ( v10 > 0xFFFFFFFF )
    {
      v3 = -2147024362;
      SectionPageProtection = 366;
    }
    else
    {
      v11 = v28 * (unsigned __int64)(unsigned int)v10;
      v12 = v27 * ((unsigned __int64)PixelFormatSize >> 3);
      if ( v11 > 0xFFFFFFFF )
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0x171u, 0LL);
        goto LABEL_8;
      }
      v13 = v28 * v10;
      MaximumSize.QuadPart = (unsigned int)v11;
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        v1,
        0LL);
      v14 = NtCreateSection(v1, 6u, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
      if ( v14 < 0 )
      {
        v3 = v14 | 0x10000000;
        SectionPageProtection = 380;
      }
      else
      {
        ViewSize = 0LL;
        SectionOffset.QuadPart = 0LL;
        CurrentProcess = GetCurrentProcess();
        v16 = NtMapViewOfSection(
                *v1,
                CurrentProcess,
                (PVOID *)this + 26,
                0LL,
                0LL,
                &SectionOffset,
                &ViewSize,
                ViewUnmap,
                0,
                4u);
        if ( v16 >= 0 )
        {
          v17 = *((_QWORD *)this + 10);
          v18 = (unsigned __int8 *)*((_QWORD *)this + 26);
          v26 = 0LL;
          v19 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(v17 + 8 + *(int *)(*(_QWORD *)(v17 + 8) + 12LL));
          v20 = (const struct PixelFormatInfo *)(**v19)(v19, v32);
          v21 = HrCreateBitmapFromMemoryEx(v27, v28, v20, v12, v13, v18, 0LL, &v26);
          v3 = v21;
          if ( v21 < 0 )
          {
            SectionPageProtection = 402;
          }
          else
          {
            wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 11);
            v22 = (char *)v26 + *(int *)(*((_QWORD *)v26 + 1) + 4LL) + 8;
            v21 = (**(__int64 (__fastcall ***)(char *, GUID *, char *))v22)(
                    v22,
                    &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
                    (char *)this + 88);
            v3 = v21;
            if ( v21 >= 0 )
            {
LABEL_8:
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
              return v3;
            }
            SectionPageProtection = 404;
          }
          v24 = v21;
LABEL_18:
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v24, SectionPageProtection, 0LL);
          goto LABEL_8;
        }
        v3 = v16 | 0x10000000;
        SectionPageProtection = 394;
      }
    }
    v24 = v3;
    goto LABEL_18;
  }
  return v3;
}
