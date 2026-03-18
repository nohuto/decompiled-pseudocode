/*
 * XREFs of ?EnsureOverlaySwapChainWeakRef@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJPEAVIOverlaySwapChain@@@Z @ 0x18025B32C
 * Callers:
 *     ?EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z @ 0x18025AF04 (-EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z.c)
 *     ?EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z @ 0x18025B218 (-EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180100300 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnsureOverlaySwapChainWeakRef(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct IOverlaySwapChain *a2)
{
  unsigned int v2; // ebx
  __int64 *v3; // rsi
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  char v15; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v3 = (__int64 *)((char *)this + 200);
  if ( !*((_QWORD *)this + 25) )
  {
    v6 = *(int *)(*((_QWORD *)a2 + 1) + 4LL);
    v14 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(char *, GUID *, __int64 *))((char *)a2 + v6 + 8))(
           (char *)a2 + v6 + 8,
           &GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc,
           &v14);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x643u, 0LL);
    }
    else
    {
      v9 = v14;
      v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v3);
      v11 = v10(v9, v3);
      v2 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x645u, 0LL);
      }
      else
      {
        *((_QWORD *)this + 26) = *(_QWORD *)(*(__int64 (__fastcall **)(struct IOverlaySwapChain *, char *))(*(_QWORD *)a2 + 48LL))(
                                              a2,
                                              &v15);
        *((_DWORD *)this + 54) = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a2 + 56LL))(a2);
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
  }
  return v2;
}
