/*
 * XREFs of ?Shutdown@ViewGroupManager@@UEAAJXZ @ 0x1802FC110
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1801B15A0 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall ViewGroupManager::Shutdown(ViewGroupManager *this)
{
  SmartCookie *v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (ViewGroupManager *)((char *)this + 120);
  try
  {
    v3 = SmartCookie::Unregister(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5C,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        (const char *)(unsigned int)v3);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 13);
    v4 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 12);
    v6 = *((_QWORD *)this + 10);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
      v7 = *((_QWORD *)this + 10);
      *((_QWORD *)this + 10) = 0LL;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6C,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           v5);
  }
  return result;
}
