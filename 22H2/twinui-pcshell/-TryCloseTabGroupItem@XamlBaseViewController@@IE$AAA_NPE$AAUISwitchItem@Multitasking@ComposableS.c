/*
 * XREFs of ?TryCloseTabGroupItem@XamlBaseViewController@@IE$AAA_NPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180395D04
 * Callers:
 *     _lambda_95ea086e3b8fa056e55a3a293b600f83_::operator() @ 0x180394E44 (_lambda_95ea086e3b8fa056e55a3a293b600f83_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BCB0 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$cx_safe_cast@UITabController@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@@wil@@YAPE$AAUITabController@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIInspectable@@@Z @ 0x18039389C (--$cx_safe_cast@UITabController@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@@wil@@Y.c)
 *     ??$cx_safe_cast@VShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@@wil@@YAPE$AAVShellTab@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIInspectable@@@Z @ 0x18039393C (--$cx_safe_cast@VShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@@wil@@YAPE$AA.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180395848 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 *     ?get@Group@IShellTab@Tabs@ComposableShell@Internal@Windows@@UE$AAAPE$AAVShellTabGroup@3456@XZ @ 0x180398714 (-get@Group@IShellTab@Tabs@ComposableShell@Internal@Windows@@UE$AAAPE$AAVShellTabGroup@3456@XZ.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall XamlBaseViewController::TryCloseTabGroupItem(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int AppViewFromSwitchItem; // eax
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rbx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v17; // [rsp+50h] [rbp+20h] BYREF
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF
  __int64 v19; // [rsp+68h] [rbp+38h] BYREF

  if ( !*(_QWORD *)(a1 + 96) )
    return 0;
  v18 = 0LL;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v18);
  AppViewFromSwitchItem = XamlBaseViewController::GetAppViewFromSwitchItem(v4, a2, &v18);
  if ( AppViewFromSwitchItem < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      204LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
      (const char *)(unsigned int)AppViewFromSwitchItem);
    __debugbreak();
  }
  v17 = 0LL;
  v6 = *(__int64 **)(a1 + 88);
  v7 = *v6;
  v17 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v7 + 32))(v6, v18, &v17);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xCF,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
      (const char *)(unsigned int)v8);
LABEL_6:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
    return 0;
  }
  if ( !v17 )
    goto LABEL_6;
  v19 = v17;
  v10 = wil::cx_safe_cast<Windows::Internal::ComposableShell::Tabs::ShellTab,IInspectable *>(&v19);
  v19 = v10;
  v11 = __abi_winrt_ptr_ctor(v10);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v19 = *(_QWORD *)(a1 + 96);
  v12 = wil::cx_safe_cast<Windows::Internal::ComposableShell::Tabs::ITabController,IInspectable *>(&v19);
  v19 = v12;
  v13 = __abi_winrt_ptr_ctor(v12);
  v19 = v13;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v14 = Windows::Internal::ComposableShell::Tabs::IShellTab::Group::get(v11);
  v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 136LL))(v13, v14);
  if ( v15 < 0 )
    __abi_WinRTraiseException(v15);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
  return 1;
}
