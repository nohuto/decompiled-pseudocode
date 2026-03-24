/*
 * XREFs of ?CreateVBlankFence@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayVBlankFenceResources@@@Z @ 0x1800F10DC
 * Callers:
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180239664 (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z.c)
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180243534 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180030E04 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5D20 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18014F110 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??1DDisplayVBlankFenceResources@@QEAA@XZ @ 0x1802426E8 (--1DDisplayVBlankFenceResources@@QEAA@XZ.c)
 *     ??4DDisplayVBlankFenceResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x180242AAC (--4DDisplayVBlankFenceResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 */

__int64 __fastcall CDDisplayManager::CreateVBlankFence(
        CDDisplayManager *this,
        struct CD3DDevice *a2,
        const struct DDisplayTargetResources *a3,
        struct DDisplayVBlankFenceResources *a4)
{
  __int64 v4; // rsi
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD, __int128 *); // rdi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD, __int64, _QWORD, void **); // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *v17; // rdi
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64 *, void *, GUID *, char *); // rsi
  int v20; // eax
  __int64 v21; // rcx
  __int128 v23; // [rsp+40h] [rbp-10h] BYREF
  void *v24; // [rsp+70h] [rbp+20h] BYREF

  v24 = this;
  v4 = *(_QWORD *)a3;
  v24 = 0LL;
  v23 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *))(*(_QWORD *)v4 + 72LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v23);
  v9 = v8(v4, *((_QWORD *)a3 + 4), 0LL, &v23);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1C5u, 0LL);
  }
  else
  {
    v12 = *((_QWORD *)a3 + 2);
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)v12 + 24LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v24,
      0LL);
    v14 = v13(v12, v23, 0LL, 0x10000000LL, 0LL, &v24);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1CDu, 0LL);
    }
    else
    {
      v16 = *((_QWORD *)&v23 + 1);
      v17 = (__int64 *)*((_QWORD *)a2 + 74);
      v18 = *v17;
      *((_QWORD *)&v23 + 1) = 0LL;
      v19 = *(__int64 (__fastcall **)(__int64 *, void *, GUID *, char *))(v18 + 536);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v20 = v19(v17, v24, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, (char *)&v23 + 8);
      v11 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x1D2u, 0LL);
      else
        DDisplayVBlankFenceResources::operator=(a4, &v23);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v24);
  DDisplayVBlankFenceResources::~DDisplayVBlankFenceResources((DDisplayVBlankFenceResources *)&v23);
  return v11;
}
