/*
 * XREFs of ??1?$multimap@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAA@XZ @ 0x1802D9AF0
 * Callers:
 *     _TabViewManager::TabViewManager_::_1_::dtor$22 @ 0x1802D94A6 (_TabViewManager--TabViewManager_--_1_--dtor$22.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$23 @ 0x1802D94B9 (_TabViewManager--TabViewManager_--_1_--dtor$23.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$24 @ 0x1802D94CC (_TabViewManager--TabViewManager_--_1_--dtor$24.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$25 @ 0x1802D94DF (_TabViewManager--TabViewManager_--_1_--dtor$25.c)
 *     _AppViewDataSourceAdapterBase::AppViewDataSourceAdapterBase_::_1_::dtor$11 @ 0x1803AA5E9 (_AppViewDataSourceAdapterBase--AppViewDataSourceAdapterBase_--_1_--dtor$11.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@1@@Z @ 0x1802D70B8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$com_ptr_t@UIWin32ApplicationView@@Uerr_.c)
 */

void __fastcall std::multimap<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>::~multimap<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
}
