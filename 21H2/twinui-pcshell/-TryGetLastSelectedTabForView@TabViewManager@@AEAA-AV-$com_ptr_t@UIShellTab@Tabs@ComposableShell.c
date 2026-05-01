/*
 * XREFs of ?TryGetLastSelectedTabForView@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802EE2A4
 * Callers:
 *     ?OnViewFocusChanged@TabViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802E4D54 (-OnViewFocusChanged@TabViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?OnViewLostFocus@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1802E4EDC (-OnViewLostFocus@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?OnViewNeedinessChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1802E50F0 (-OnViewNeedinessChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SelectViewInTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x1802E6E80 (-SelectViewInTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z.c)
 *     ?TryGetLastSelectedTabForView@TabViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIInspectable@@@Z @ 0x1802EE3E0 (-TryGetLastSelectedTabForView@TabViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIInspectable@@@Z.c)
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1802EEA20 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1802EFF64 (-ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A19B8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x1801CA3F4 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??$_Eqrange@PEAUIApplicationView@@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$00@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@std@@V12@@1@AEBQEAUIApplicationView@@@Z @ 0x1802D7250 (--$_Eqrange@PEAUIApplicationView@@@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Uerr_.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall TabViewManager::TryGetLastSelectedTabForView(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  RTL_SRWLOCK *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r15
  int v10; // eax
  __int128 v12; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v15; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v16; // [rsp+90h] [rbp+40h] BYREF
  __int64 v17; // [rsp+98h] [rbp+48h] BYREF

  v16 = a3;
  v5 = (RTL_SRWLOCK *)(a1 + 1432);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 1432));
  v12 = 0LL;
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,1>>::_Eqrange<IApplicationView *>(
    (__int64 *)(a1 + 1280),
    v13,
    &v16);
  v6 = v13[0];
  v17 = v13[0];
  v7 = 0LL;
  v8 = 0LL;
  while ( v6 != v13[1] )
  {
    v9 = *(_QWORD *)(v6 + 40);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 232LL))(v9, &v15);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2350LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    if ( v15 > v7 || !v8 )
    {
      wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)&v12, v9);
      v7 = v15;
      *((_QWORD *)&v12 + 1) = v15;
      v8 = v12;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(&v17);
    v6 = v17;
  }
  *(_QWORD *)&v12 = 0LL;
  *a2 = v8;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return a2;
}
