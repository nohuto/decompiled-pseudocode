/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1802F0D74
 * Callers:
 *     ?RemoveTabAndViewFromMapsLockHeld@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1802E5FB0 (-RemoveTabAndViewFromMapsLockHeld@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Intern.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x1802ED870 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1802EE7B0 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnTabSelectionChanged@AppViewDataSourceAdapterBase@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803AE28C (-OnTabSelectionChanged@AppViewDataSourceAdapterBase@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Int.c)
 * Callees:
 *     ??$distance@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@std@@@std@@YA_JV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@0@0@Z @ 0x1802D7EAC (--$distance@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@UIShel.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@0@Z @ 0x1802F0CA8 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Ue.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>,0>>::erase(
        __int64 **a1,
        unsigned __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // r11
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rbx
  __int64 *v9; // r11
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64)*a1;
  v4 = (__int64)*a1;
  v5 = (*a1)[1];
  v6 = v5;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *(_QWORD *)(v6 + 32) >= v7 )
      {
        if ( *(_BYTE *)(v4 + 25) && v7 < *(_QWORD *)(v6 + 32) )
          v4 = v6;
        v2 = v6;
        v6 = *(_QWORD *)v6;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 16);
      }
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  if ( !*(_BYTE *)(v4 + 25) )
    v5 = *(_QWORD *)v4;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    if ( *a2 >= *(_QWORD *)(v5 + 32) )
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
    else
    {
      v4 = v5;
      v5 = *(_QWORD *)v5;
    }
  }
  v8 = std::distance<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>>>>(
         v2,
         v4);
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>,0>>::erase(
    a1,
    &v11,
    v2,
    v9);
  return v8;
}
