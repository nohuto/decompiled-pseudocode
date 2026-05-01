/*
 * XREFs of ?TryGetSelectedTabForView@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18030C5E8
 * Callers:
 *     ?WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18030C710 (-WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicat.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$?0UIInspectable@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1802D2ACC (--$-0UIInspectable@@@-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exceptio.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediator::TryGetSelectedTabForView(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64); // [rsp+40h] [rbp+10h] BYREF
  __int64 *v12; // [rsp+48h] [rbp+18h]
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF

  v12 = a2;
  *a2 = 0LL;
  v11 = 0LL;
  v4 = *(__int64 **)(a1 + 344);
  v5 = *v4;
  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v5 + 56))(v4, a3, &v11);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      131LL,
      (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  if ( v11 )
  {
    wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>(
      (__int64)&v13,
      v11);
    v7 = v13;
    v13 = 0LL;
    v8 = *a2;
    *a2 = v7;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
  return a2;
}
