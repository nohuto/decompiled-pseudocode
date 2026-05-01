/*
 * XREFs of ?SelectViewInTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x1802E6C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x1801CA244 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1802C380C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_pol.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x1802D82E4 (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     ?TryCleanupReplacedView@TabViewManager@@AEAAXPEAUIApplicationView@@@Z @ 0x1802ED774 (-TryCleanupReplacedView@TabViewManager@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?TryGetGroup@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802EDFA4 (-TryGetGroup@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Wi.c)
 *     ?TryGetLastSelectedTabForView@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802EE034 (-TryGetLastSelectedTabForView@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell.c)
 *     ?UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x1802EF3A8 (-UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal.c)
 *     ?UpdateTabDisplayName@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802EFB20 (-UpdateTabDisplayName@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableSh.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall TabViewManager::SelectViewInTabGroup(
        TabViewManager *this,
        struct IApplicationView *a2,
        const struct _GUID *a3)
{
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v6; // rbx
  RTL_SRWLOCK *v7; // r15
  __int64 v8; // rcx
  __int64 *v9; // rdi
  __int64 *v10; // rdi
  TabViewManager *v11; // rdi
  struct Windows::Internal::ComposableShell::Tabs::IShellTab **LastSelectedTabForView; // rax
  int v13; // eax
  char *v14; // rax
  int v15; // eax
  TabViewManager *v16; // rcx
  int updated; // eax
  int v19[2]; // [rsp+20h] [rbp-58h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v20; // [rsp+28h] [rbp-50h] BYREF
  struct IApplicationView *v21; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v22[2]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v21 = a2;
  v6 = 0LL;
  *(_QWORD *)v19 = 0LL;
  v7 = (RTL_SRWLOCK *)((char *)this + 1296);
  AcquireSRWLockExclusive((PSRWLOCK)this + 162);
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
    (__int64 **)this + 147,
    v22,
    (unsigned __int64 *)&v21);
  v9 = v22[0];
  if ( v22[0] != *((__int64 **)this + 147) )
  {
    wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)v19, v22[0][5]);
    v10 = std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>>::_Extract(
            (_QWORD *)this + 147,
            (__int64)v9);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v10 + 5);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v10 + 4);
    std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)0x30);
    v6 = *(struct Windows::Internal::ComposableShell::Tabs::IShellTab **)v19;
  }
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  v11 = (TabViewManager *)((char *)this - 136);
  if ( !v6 )
  {
    LastSelectedTabForView = (struct Windows::Internal::ComposableShell::Tabs::IShellTab **)TabViewManager::TryGetLastSelectedTabForView(
                                                                                              (char *)this - 136,
                                                                                              v22,
                                                                                              a2);
    v6 = *LastSelectedTabForView;
    *LastSelectedTabForView = 0LL;
    *(_QWORD *)v19 = v6;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v22);
  }
  TabViewManager::TryGetGroup(v8, &v20, v6);
  if ( v6 && v20 )
  {
    v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *, __int64 **))(*(_QWORD *)v20 + 48LL))(
            v20,
            v22);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1459LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v13);
    v14 = (char *)v22[0] - *(_QWORD *)&a3->Data1;
    if ( v22[0] == *(__int64 **)&a3->Data1 )
      v14 = (char *)v22[1] - *(_QWORD *)a3->Data4;
    if ( v14 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1460LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)0x8000000DLL);
    v15 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTab *))(**((_QWORD **)this + 134) + 72LL))(
            *((_QWORD *)this + 134),
            v6);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1463LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v15);
    v11 = (TabViewManager *)((char *)this - 136);
    TabViewManager::UpdateFallbackTabForGroup((TabViewManager *)((char *)this - 136), v20, 0LL);
    updated = TabViewManager::UpdateTabDisplayName(v16, a2, v6);
    if ( updated < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1469LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)updated);
  }
  TabViewManager::TryCleanupReplacedView(v11, a2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v19);
  return 0LL;
}
