/*
 * XREFs of ?CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@IPEAUDDisplayPrimaryBufferResources@@@Z @ 0x1802909A4
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802904A8 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1DDisplayPrimaryBufferResources@@QEAA@XZ @ 0x1802853A4 (--1DDisplayPrimaryBufferResources@@QEAA@XZ.c)
 *     ??4DDisplayPrimaryBufferResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x18028F2D4 (--4DDisplayPrimaryBufferResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 */

__int64 __fastcall CDDisplayManager::CreatePrimaryBuffer(
        CDDisplayManager *this,
        struct CD3DDevice *a2,
        const struct D2D_SIZE_U *a3,
        __int64 a4,
        const struct DDisplayTargetResources *a5,
        struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *a6,
        unsigned int a7,
        void **a8)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *, __int128 *); // rbx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, _QWORD, __int64, _QWORD, char *); // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64 *, _QWORD, GUID *, __int64 *); // rdi
  int v22; // eax
  __int64 v23; // rcx
  __int128 v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  char v27; // [rsp+58h] [rbp-8h]

  v26 = 0LL;
  v25 = 0LL;
  v27 = 0;
  v9 = *(_QWORD *)a5;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *, __int128 *))(**(_QWORD **)a5 + 56LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v25);
  v11 = v10(v9, *((_QWORD *)a5 + 5), a6, &v25);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x22Eu, 0LL);
  }
  else
  {
    v14 = *((_QWORD *)a5 + 3);
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, char *))(*(_QWORD *)v14 + 24LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)&v25 + 1,
      0LL);
    v16 = v15(v14, v25, 0LL, 0x10000000LL, 0LL, (char *)&v25 + 8);
    v13 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x236u, 0LL);
    }
    else
    {
      v18 = v26;
      v19 = (__int64 *)*((_QWORD *)a2 + 69);
      v20 = *v19;
      v26 = 0LL;
      v21 = *(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v20 + 384);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      v22 = v21(v19, *((_QWORD *)&v25 + 1), &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v26);
      v13 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x23Bu, 0LL);
      }
      else
      {
        v27 = 0;
        DDisplayPrimaryBufferResources::operator=(a8, (__int64 *)&v25);
      }
    }
  }
  DDisplayPrimaryBufferResources::~DDisplayPrimaryBufferResources((DDisplayPrimaryBufferResources *)&v25);
  return v13;
}
