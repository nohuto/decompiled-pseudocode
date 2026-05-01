/*
 * XREFs of ?UpdateEngagementFlagsForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@W4ViewEngagementFlags@ViewManagerInterop@Shell@Internal@Windows@@1@Z @ 0x1803377B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::UpdateEngagementFlagsForView(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        int a4)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  void (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = a4;
  v5 = a3;
  if ( !*(_BYTE *)(a1 + 145) && a3 )
  {
    v10 = 0LL;
    v7 = **a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v7(a2, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v10);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 864LL))(v10, v5, v4);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12C,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
}
