/*
 * XREFs of ?UpdateTabIcon@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x1803B0680
 * Callers:
 *     ?AddItemForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803AB1F8 (-AddItemForTab@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@Compos.c)
 *     ?OnTabPropertyChanged@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1803AE260 (-OnTabPropertyChanged@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?TryMakeIconFactoryForTab@AppViewDataSourceAdapter@@AEAA?AV?$com_ptr_t@UIIconFactory@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803AFB20 (-TryMakeIconFactoryForTab@AppViewDataSourceAdapter@@AEAA-AV-$com_ptr_t@UIIconFactory@Multitaskin.c)
 *     ?UpdateIcon@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803B0050 (-UpdateIcon@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multita.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppViewDataSourceAdapter::UpdateTabIcon(
        AppViewDataSourceAdapter *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        const struct _GUID *a3)
{
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v11; // [rsp+58h] [rbp+20h] BYREF

  AppViewDataSourceAdapter::TryMakeIconFactoryForTab((__int64)this, v9, (__int64)a2);
  if ( v9[0] )
  {
    v6 = (*(__int64 (__fastcall **)(const struct _GUID *))(*(_QWORD *)&a3->Data1 + 96LL))(a3);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        529LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
  }
  else
  {
    v11 = 0LL;
    v7 = *((_QWORD *)this + 11);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v11);
    v8 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Tabs::IShellTab *, struct IApplicationView **))(*(_QWORD *)v7 + 24LL))(
           v7,
           a2,
           &v11);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        534LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    AppViewDataSourceAdapterBase::UpdateIcon((AppViewDataSourceAdapter *)((char *)this + 8), v11, a3);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v9);
}
