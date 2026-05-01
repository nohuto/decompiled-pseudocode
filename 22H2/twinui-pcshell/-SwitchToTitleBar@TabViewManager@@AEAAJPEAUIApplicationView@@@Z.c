/*
 * XREFs of ?SwitchToTitleBar@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1802EC178
 * Callers:
 *     ?OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerViewEventArgs@3456@@Z @ 0x1802E3710 (-OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Intern.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabViewManager::SwitchToTitleBar(TabViewManager *this, struct IApplicationView *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 171);
  if ( !v2 )
    return 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v2 + 104LL))(v2, a2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBFC,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
