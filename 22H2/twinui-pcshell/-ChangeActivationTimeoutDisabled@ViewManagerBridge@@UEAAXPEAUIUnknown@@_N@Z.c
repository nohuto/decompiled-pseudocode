/*
 * XREFs of ?ChangeActivationTimeoutDisabled@ViewManagerBridge@@UEAAXPEAUIUnknown@@_N@Z @ 0x18032C940
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::ChangeActivationTimeoutDisabled(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        char a3)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 145) )
  {
    v9 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v9);
    LOBYTE(v6) = a3;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 744LL))(v9, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x139,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
}
