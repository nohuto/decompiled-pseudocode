/*
 * XREFs of ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x1804CCF20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180022A34 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1800C9CC8 (--$com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32Appl.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_db2cedfb0854aef668be6bda3030eb84___ @ 0x1804CA460 (Windows--Internal--ComTaskPool--QueueTask__lambda_db2cedfb0854aef668be6bda3030eb84___.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1804CD0B4 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32AppStateManager::UpdateAppView(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  int v8; // eax
  const char *v9; // r9
  __int64 *v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h] BYREF
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+48h] [rbp-30h] BYREF
  __int64 v22[2]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v25; // [rsp+88h] [rbp+10h] BYREF

  v25 = a2;
  try
  {
    wil::com_query<IWin32ApplicationView,IApplicationView * &>((__int64)&v17, &v25);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v16);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        381LL,
        (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
        (const char *)(unsigned int)v8);
    if ( a5 )
    {
      Win32AppStateManager::UpdateAppViewWorker(a1, v16, a3, a4);
LABEL_6:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
      return;
    }
    v10 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
            &v19,
            a4);
    v11 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
            &v18,
            a1);
    v20 = a1;
    v12 = *v11;
    *v11 = 0LL;
    v21 = v12;
    v13 = *v10;
    *v10 = 0LL;
    v22[0] = v13;
    v22[1] = v16;
    v23 = a3;
    v15 = Windows::Internal::ComTaskPool::QueueTask__lambda_db2cedfb0854aef668be6bda3030eb84___(
            v13,
            v14,
            *(_DWORD *)(a1 + 48),
            (__int64)&v20);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v22);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
    if ( v15 >= 0 )
      goto LABEL_6;
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      402LL,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
      (const char *)(unsigned int)v15);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x195,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
      v9);
  }
}
