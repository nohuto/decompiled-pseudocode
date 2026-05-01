/*
 * XREFs of ?UnsubscribeFromServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802EEEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801B13F0 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x1801CA244 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabViewManager::UnsubscribeFromServices(TabViewManager *this, struct IServiceProvider *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 147) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 145) + 232LL))(*((_QWORD *)this + 145));
    *((_QWORD *)this + 147) = 0LL;
  }
  if ( *((_QWORD *)this + 148) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 145) + 248LL))(*((_QWORD *)this + 145));
    *((_QWORD *)this + 148) = 0LL;
  }
  if ( *((_QWORD *)this + 150) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 145) + 264LL))(*((_QWORD *)this + 145));
    *((_QWORD *)this + 150) = 0LL;
  }
  if ( *((_QWORD *)this + 151) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 145) + 296LL))(*((_QWORD *)this + 145));
    *((_QWORD *)this + 151) = 0LL;
  }
  if ( *((_QWORD *)this + 152) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 145) + 312LL))(*((_QWORD *)this + 145));
    *((_QWORD *)this + 152) = 0LL;
  }
  if ( *((_QWORD *)this + 149) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 145) + 248LL))(*((_QWORD *)this + 145));
    *((_QWORD *)this + 149) = 0LL;
  }
  if ( *((_QWORD *)this + 153) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 145) + 344LL))(*((_QWORD *)this + 145));
    *((_QWORD *)this + 153) = 0LL;
  }
  SmartCookie::Unregister((TabViewManager *)((char *)this + 760));
  SmartCookie::Unregister((TabViewManager *)((char *)this + 888));
  SmartCookie::Unregister((TabViewManager *)((char *)this + 376));
  SmartCookie::Unregister((TabViewManager *)((char *)this + 504));
  SmartCookie::Unregister((TabViewManager *)((char *)this + 632));
  v4 = *((_QWORD *)this + 164);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  v5 = *((_QWORD *)this + 165);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v5 + 88LL))(v5, a2);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x35C,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = *((_QWORD *)this + 168);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 168);
  }
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 41);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 42);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 40);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)this + 143, 0LL);
  return 0LL;
}
