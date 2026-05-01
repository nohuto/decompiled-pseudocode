/*
 * XREFs of _lambda_152963d5211cf6149a80abe334e76dfa_::operator() @ 0x180394D6C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa___::Run @ 0x180395F90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180022A34 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$create_task@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Concurrency@@YA?AV?$task@_N@0@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@Vtask_options@0@@Z @ 0x180393AC8 (--$create_task@PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@Concurrency@@YA-AV-$task@_N@0@PE$.c)
 *     Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___ @ 0x180393D04 (Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___.c)
 *     ??0task_options@Concurrency@@QEAA@XZ @ 0x1803947C8 (--0task_options@Concurrency@@QEAA@XZ.c)
 *     ?RequestSelectTabAsync@ITabController@Tabs@ComposableShell@Internal@Windows@@UE$AAAPE$AAU?$IAsyncOperation@_N@Foundation@5@PE$AAVShellTabGroup@2345@PE$AAVShellTab@2345@@Z @ 0x180395F20 (-RequestSelectTabAsync@ITabController@Tabs@ComposableShell@Internal@Windows@@UE$AAAPE$AAU-$IAsyn.c)
 *     ?get@Group@IShellTab@Tabs@ComposableShell@Internal@Windows@@UE$AAAPE$AAVShellTabGroup@3456@XZ @ 0x1803989E4 (-get@Group@IShellTab@Tabs@ComposableShell@Internal@Windows@@UE$AAAPE$AAVShellTabGroup@3456@XZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall lambda_152963d5211cf6149a80abe334e76dfa_::operator()(__int64 *a1)
{
  char v2; // al
  __int64 v3; // rcx
  char v4; // bl
  Concurrency::task_options *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rbx
  Concurrency::details::_Task_impl_base **v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-59h] BYREF
  __int64 v13; // [rsp+28h] [rbp-51h] BYREF
  __int64 v14; // [rsp+30h] [rbp-49h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-41h]
  __int64 v16; // [rsp+40h] [rbp-39h] BYREF
  std::_Ref_count_base *v17; // [rsp+48h] [rbp-31h]
  _BYTE v18[128]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v19; // [rsp+E0h] [rbp+67h]

  v2 = 0;
  LODWORD(v19) = 0;
  if ( !a1[3] )
  {
    v3 = v19;
    goto LABEL_5;
  }
  v3 = ((__int64 (*)(void))Windows::Internal::ComposableShell::Tabs::IShellTab::Group::get)();
  v2 = 1;
  if ( !v3 )
  {
LABEL_5:
    v4 = 0;
    goto LABEL_6;
  }
  v4 = 1;
LABEL_6:
  if ( (v2 & 1) != 0 && v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v4 )
  {
    v5 = Concurrency::task_options::task_options((Concurrency::task_options *)v18);
    v6 = a1[2];
    v7 = a1[3];
    v8 = Windows::Internal::ComposableShell::Tabs::IShellTab::Group::get(v7);
    v9 = Windows::Internal::ComposableShell::Tabs::ITabController::RequestSelectTabAsync(v6, v8, v7);
    v10 = (Concurrency::details::_Task_impl_base **)Concurrency::create_task<Windows::Foundation::IAsyncOperation<bool> __gc *>(
                                                      &v16,
                                                      v9,
                                                      (__int64)v5);
    v11 = *a1;
    v12 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v13,
      a1[1]);
    Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___(v10, &v14, (__int64)&v12);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*a1 + 24LL))(*a1, a1[1]);
  }
}
