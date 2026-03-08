/*
 * XREFs of ?CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayTaskPoolResources@@@Z @ 0x180290E18
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802904A8 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CE01C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1DDisplayTaskPoolResources@@QEAA@XZ @ 0x180285484 (--1DDisplayTaskPoolResources@@QEAA@XZ.c)
 *     ??4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x18028F530 (--4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 */

__int64 __fastcall CDDisplayManager::CreateTaskPool(
        CDDisplayManager *this,
        struct CD3DDevice *a2,
        const struct DDisplayTargetResources *a3,
        void **a4)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v8)(__int64, __int128 *); // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64 *, _QWORD, __int64, GUID *, char *); // rdi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, _QWORD, __int64, _QWORD, __int128 *); // rbx
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, _QWORD, GUID *, char *); // rbx
  unsigned int v23; // [rsp+20h] [rbp-40h]
  GUID v24; // [rsp+30h] [rbp-30h] BYREF
  __int128 v25; // [rsp+40h] [rbp-20h] BYREF
  __int128 v26; // [rsp+50h] [rbp-10h] BYREF

  v4 = *(_QWORD *)a3;
  v25 = 0LL;
  v26 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 64LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v25);
  v9 = v8(v4, &v25);
  v11 = v9;
  if ( v9 < 0 )
  {
    v23 = 466;
    goto LABEL_12;
  }
  v12 = *((_QWORD *)&v25 + 1);
  v13 = (__int64 *)*((_QWORD *)a2 + 69);
  v14 = *v13;
  *((_QWORD *)&v25 + 1) = 0LL;
  v15 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, GUID *, char *))(v14 + 544);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v16 = v15(v13, 0LL, 2LL, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, (char *)&v25 + 8);
  v11 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1D8u, 0LL);
    goto LABEL_13;
  }
  v18 = *((_QWORD *)&v25 + 1);
  v19 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int128 *))(**((_QWORD **)&v25 + 1) + 56LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)&v26,
    0LL);
  v9 = v19(v18, 0LL, 0x10000000LL, 0LL, &v26);
  v11 = v9;
  if ( v9 < 0 )
  {
    v23 = 479;
    goto LABEL_12;
  }
  v20 = *((_QWORD *)a3 + 3);
  v21 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, char *))(*(_QWORD *)v20 + 32LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v26 + 1);
  v24 = GUID_04dcf9ef_3406_5700_8fec_77eba4c5a74b;
  v9 = v21(v20, v26, &v24, (char *)&v26 + 8);
  v11 = v9;
  if ( v9 < 0 )
  {
    v23 = 484;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v23, 0LL);
    goto LABEL_13;
  }
  DDisplayTaskPoolResources::operator=(a4, (void **)&v25);
LABEL_13:
  DDisplayTaskPoolResources::~DDisplayTaskPoolResources((DDisplayTaskPoolResources *)&v25);
  return v11;
}
