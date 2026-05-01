/*
 * XREFs of ?OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUIApplicationView@@K@Z @ 0x180352600
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801D6C70 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$com_ptr_t@UIApplicationView@@Uerr_returncode_p.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180351878 (--0Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowMan.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18035216C (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$Com.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1804E6958 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ViewPresentationMediator::OnMoveSizeAttempted(
        ViewPresentationMediator *this,
        struct IApplicationView *a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+28h] [rbp-38h]
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10[2]; // [rsp+38h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12[2]; // [rsp+50h] [rbp-10h] BYREF
  struct IObjectArray *v13; // [rsp+80h] [rbp+20h] BYREF
  __int64 v14; // [rsp+98h] [rbp+38h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( (int)CGITRegistrationList::GetCallbackArray((ViewPresentationMediator *)((char *)this + 88), &v13) >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>(
      (__int64)&v7,
      (__int64)v13);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::Iterator(
      (__int64)&v9,
      (__int64)&v7,
      0);
    details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::Iterator(
      (__int64)&v11,
      (__int64)&v7,
      v8);
    while ( (_DWORD)v9 != v11 || v10[1] != v12[1] )
    {
      v6 = v10[0];
      v14 = v10[0];
      if ( v10[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10[0] + 8LL))(v10[0]);
      (*(void (__fastcall **)(__int64, struct IApplicationView *, _QWORD))(*(_QWORD *)v6 + 40LL))(v6, a2, a3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      LODWORD(v9) = v9 + 1;
      details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::GetCurrentObject(&v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
}
