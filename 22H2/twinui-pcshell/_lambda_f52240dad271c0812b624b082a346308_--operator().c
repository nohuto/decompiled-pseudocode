/*
 * XREFs of _lambda_f52240dad271c0812b624b082a346308_::operator() @ 0x18034739C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f52240dad271c0812b624b082a346308___::Run @ 0x180348560 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f52240dad271c0812b624b082a346308___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ??$query@UIWindowWatcher_Input@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWindowWatcher_Input@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800CB428 (--$query@UIWindowWatcher_Input@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18034942C (-WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_f52240dad271c0812b624b082a346308_::operator()(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rdx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(*(_QWORD *)a1 + 200LL) = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 192LL) + 56LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 192LL),
         *(_QWORD *)(*(_QWORD *)a1 + 208LL));
  if ( v2 < 0 )
  {
    v3 = 637LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 192LL) + 72LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 192LL),
         *(_QWORD *)(*(_QWORD *)a1 + 216LL));
  if ( v2 < 0 )
  {
    v3 = 638LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 192LL) + 88LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 192LL),
         *(_QWORD *)(*(_QWORD *)a1 + 224LL));
  if ( v2 < 0 )
  {
    v3 = 639LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 192LL) + 104LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 192LL),
         *(_QWORD *)(*(_QWORD *)a1 + 232LL));
  if ( v2 < 0 )
  {
    v3 = 640LL;
    goto LABEL_3;
  }
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher_Input>(
    (_QWORD *)(*(_QWORD *)a1 + 192LL),
    (__int64)&v7);
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, *(_QWORD *)(*(_QWORD *)a1 + 240LL));
  v2 = v4;
  if ( v4 >= 0 )
  {
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)(*(_QWORD *)a1 + 192LL));
    *(_BYTE *)(*(_QWORD *)a1 + 256LL) = 0;
    ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherDisconnected();
    v2 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x284,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v4);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  return (unsigned int)v2;
}
