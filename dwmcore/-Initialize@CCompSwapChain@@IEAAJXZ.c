/*
 * XREFs of ?Initialize@CCompSwapChain@@IEAAJXZ @ 0x18029AFF0
 * Callers:
 *     ?Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVICompositionSwapChain@@@Z @ 0x18029AC58 (-Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV-$unique_any_t@V-$unique_.c)
 *     ?SetSize@CCompSwapChain@@UEAAJAEBUD2D_SIZE_U@@I@Z @ 0x18029B920 (-SetSize@CCompSwapChain@@UEAAJAEBUD2D_SIZE_U@@I@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ResetBackBuffer@CCompSwapChain@@IEAAJXZ @ 0x18029B6B4 (-ResetBackBuffer@CCompSwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CCompSwapChain::Initialize(CCompSwapChain *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, GUID *, __int64 *); // rsi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  v2 = CCompSwapChain::ResetBackBuffer(this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x3Bu, 0LL);
  }
  else
  {
    v5 = *((_QWORD *)this + 10);
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v5 + 72LL);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v7 = v6(v5, (unsigned int)(*((_DWORD *)this + 40) - 1), &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v13);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3Fu, 0LL);
    }
    else
    {
      v9 = *((_QWORD *)this + 14);
      *((_QWORD *)this + 14) = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v13)(
              v13,
              &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
              (char *)this + 112);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x41u, 0LL);
      }
      else
      {
        **((_DWORD **)this + 30) = 0;
        **((_DWORD **)this + 39) = 0;
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
  return v4;
}
