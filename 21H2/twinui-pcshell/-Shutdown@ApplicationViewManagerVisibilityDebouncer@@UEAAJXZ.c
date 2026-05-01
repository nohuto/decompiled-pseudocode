/*
 * XREFs of ?Shutdown@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x1802011E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Shutdown@NotificationDispatcher@@QEAAXXZ @ 0x18020175C (-Shutdown@NotificationDispatcher@@QEAAXXZ.c)
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::Shutdown(NotificationDispatcher **this)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  NotificationDispatcher::Shutdown(this[13]);
  v2 = (*(__int64 (__fastcall **)(NotificationDispatcher *, _QWORD))(*(_QWORD *)this[20] + 104LL))(
         this[20],
         *((unsigned int *)this + 42));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x168,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)(unsigned int)v2);
  *((_DWORD *)this + 42) = 0;
  return 0LL;
}
