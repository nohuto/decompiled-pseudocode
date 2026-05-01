/*
 * XREFs of ?RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802E6060
 * Callers:
 *     ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1802DC254 (-CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplica.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180016AB0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveVirtualTabImpl@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802E6248 (-RemoveVirtualTabImpl@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@.c)
 *     ?SwitchToFallbackTabForGroup@TabViewManager@@UEAAJAEBU_GUID@@@Z @ 0x1802EBFD0 (-SwitchToFallbackTabForGroup@TabViewManager@@UEAAJAEBU_GUID@@@Z.c)
 *     ?TryGetGroup@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802EDFA4 (-TryGetGroup@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Wi.c)
 *     ?UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x1802EF3A8 (-UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802F0424 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

__int64 __fastcall TabViewManager::RemoveVirtualTab(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  char v13; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v14[15]; // [rsp+21h] [rbp-58h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v15[2]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v17[24]; // [rsp+60h] [rbp-19h] BYREF
  int v18; // [rsp+78h] [rbp-1h]
  __int128 v19; // [rsp+90h] [rbp+17h] BYREF
  struct _GUID v20; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  TabViewManagerTraceLogging::WatchCurrentThread(v16, "TabViewManager_RemoveVirtualTab");
  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 2147942487LL;
    v6 = 1709LL;
    goto LABEL_6;
  }
  (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int128 *))(*(_QWORD *)a2 + 48LL))(
    a2,
    &v19);
  v13 = 0;
  v7 = (__int64 *)*((_QWORD *)this + 152);
  v8 = *v7;
  *(_OWORD *)v15 = v19;
  v9 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **, char *))(v8 + 24))(
         v7,
         v15,
         &v13);
  v4 = v9;
  if ( v9 < 0 )
  {
    v6 = 1714LL;
LABEL_5:
    v5 = (unsigned int)v9;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)v5);
    if ( v18 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v17);
    goto LABEL_22;
  }
  if ( !v13 )
  {
    v14[0] = 0;
    if ( (*(int (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, _BYTE *))(*(_QWORD *)a2 + 176LL))(
           a2,
           v14) >= 0
      && v14[0] )
    {
      TabViewManager::TryGetGroup(v10, v15, a2);
      if ( v15[0] )
      {
        if ( (*(int (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *, struct _GUID *))(*(_QWORD *)v15[0] + 48LL))(
               v15[0],
               &v20) >= 0 )
        {
          TabViewManager::UpdateFallbackTabForGroup((TabViewManager *)((char *)this - 160), v15[0], 0LL);
          v11 = TabViewManager::SwitchToFallbackTabForGroup((TabViewManager *)((char *)this - 24), &v20);
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x6BF,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
              (const char *)(unsigned int)v11);
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v15);
    }
    (*(void (__fastcall **)(_QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTab *))(**((_QWORD **)this + 131)
                                                                                                 + 80LL))(
      *((_QWORD *)this + 131),
      a2);
  }
  v9 = TabViewManager::RemoveVirtualTabImpl((TabViewManager *)((char *)this - 160), a2);
  v4 = v9;
  if ( v9 < 0 )
  {
    v6 = 1735LL;
    goto LABEL_5;
  }
  if ( v18 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v17);
  v4 = 0;
LABEL_22:
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v16);
  return v4;
}
