/*
 * XREFs of ?OnSelectTabByIndex@TabShellHotKeyHandler@@AEAAJI@Z @ 0x180302838
 * Callers:
 *     ?OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z @ 0x180302330 (-OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$?4V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@1@$0A@@?$tuple@AEAV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@QEAAAEAV01@$$QEAU?$pair@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@1@@Z @ 0x1803018B8 (--$-4V-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@w.c)
 *     ?TryGetGroupAndTabInFocus@TabShellHotKeyHandler@@AEAA?AU?$pair@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@XZ @ 0x18030301C (-TryGetGroupAndTabInFocus@TabShellHotKeyHandler@@AEAA-AU-$pair@V-$com_ptr_t@UIShellTabGroup@Tabs.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabShellHotKeyHandler::OnSelectTabByIndex(__int64 **this, unsigned int a2)
{
  __int64 *GroupAndTabInFocus; // rax
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v11[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h] BYREF
  __int64 v13[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0LL;
  v16 = 0LL;
  try
  {
    GroupAndTabInFocus = (__int64 *)TabShellHotKeyHandler::TryGetGroupAndTabInFocus(this, &v12);
    v11[0] = &v10;
    v11[1] = &v16;
    std::tuple<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy> &,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> &>::operator=<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,0>(
      v11,
      GroupAndTabInFocus);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
    if ( v16 && v10 )
    {
      v15 = 0LL;
      v5 = this[7];
      v6 = *v5;
      v15 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD, __int64 *))(v6 + 168))(
             v5,
             v16,
             v10,
             a2,
             &v15);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          229LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
          (const char *)(unsigned int)v7);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v15) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xE9,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
                     v8);
    return (unsigned int)v15;
  }
  return result;
}
