/*
 * XREFs of ?UpdateTabItemForView@AppViewDataSourceAdapterBase@@AEAAJPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803B04B8
 * Callers:
 *     ?OnTabSelectionChanged@AppViewDataSourceAdapterBase@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803AE28C (-OnTabSelectionChanged@AppViewDataSourceAdapterBase@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Int.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppViewDataSourceAdapterBase::UpdateTabItemForView(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  const char *v12; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    (*(void (__fastcall **)(AppViewDataSourceAdapterBase *))(*(_QWORD *)this + 96LL))(this);
    (*(void (__fastcall **)(AppViewDataSourceAdapterBase *, struct IApplicationView *, struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *))(*(_QWORD *)this + 104LL))(
      this,
      a2,
      a3);
    (*(void (__fastcall **)(AppViewDataSourceAdapterBase *, struct IApplicationView *, struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *))(*(_QWORD *)this + 112LL))(
      this,
      a2,
      a3);
    (*(void (__fastcall **)(AppViewDataSourceAdapterBase *, struct IApplicationView *, struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *))(*(_QWORD *)this + 120LL))(
      this,
      a2,
      a3);
    (*(void (__fastcall **)(AppViewDataSourceAdapterBase *, struct IApplicationView *, struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *))(*(_QWORD *)this + 136LL))(
      this,
      a2,
      a3);
    (*(void (__fastcall **)(AppViewDataSourceAdapterBase *, struct IApplicationView *, struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *))(*(_QWORD *)this + 128LL))(
      this,
      a2,
      a3);
    LOBYTE(v6) = 1;
    v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(*(_QWORD *)a3 + 80LL))(
           a3,
           v6);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        163LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v7);
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, _QWORD))(*(_QWORD *)a3 + 72LL))(
           a3,
           0LL);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        165LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v8);
    v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(*(_QWORD *)a3 + 120LL))(
           a3,
           1LL);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        167LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v9);
    LOBYTE(v10) = 1;
    v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(*(_QWORD *)a3 + 128LL))(
            a3,
            v10);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        168LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAC,
                           (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
                           v12);
  }
  return result;
}
