/*
 * XREFs of ?OnShellHookMessage@TabViewManager@@UEAAJ_K_J@Z @ 0x1802E3230
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?TryGetTabForViewImpl@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802EE5E4 (-TryGetTabForViewImpl@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna.c)
 *     ?UpdateTabDisplayName@TabViewManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802EFC3C (-UpdateTabDisplayName@TabViewManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Intern.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802F0694 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabViewManager::OnShellHookMessage(TabViewManager *this, __int64 a2, HWND a3)
{
  __int64 v6; // rdi
  void (__fastcall *v7)(__int64, HWND, _QWORD); // rbx
  TabViewManager *v8; // rcx
  const char *v9; // r9
  __int64 result; // rax
  __int64 v11[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v12[32]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v13[24]; // [rsp+50h] [rbp-48h] BYREF
  int v14; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  void (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+10h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v17; // [rsp+B8h] [rbp+20h] BYREF

  TabViewManagerTraceLogging::WatchCurrentThread(v12, "TabViewManager_OnShellHookMessage");
  try
  {
    if ( a2 == 6 )
    {
      v16 = 0LL;
      v6 = *((_QWORD *)this + 126);
      v7 = *(void (__fastcall **)(__int64, HWND, _QWORD))(*(_QWORD *)v6 + 48LL);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v16);
      v7(v6, a3, &v16);
      if ( v16 )
      {
        TabViewManager::TryGetTabForViewImpl((char *)this - 184, &v17, v16);
        if ( v17 && TabViewManager::UpdateTabDisplayName(v8, a3, v17) >= 0 )
        {
          (**v16)(v16, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v11);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v11);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
    }
    if ( v14 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v12);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v16) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x41A,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                     v9);
    return (unsigned int)v16;
  }
  return result;
}
