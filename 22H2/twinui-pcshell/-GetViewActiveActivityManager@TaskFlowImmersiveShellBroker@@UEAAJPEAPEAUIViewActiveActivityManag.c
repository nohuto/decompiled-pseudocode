/*
 * XREFs of ?GetViewActiveActivityManager@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIViewActiveActivityManager@Activities@Data@Internal@Windows@@@Z @ 0x1802A2CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1802A0CD0 (-EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::GetViewActiveActivityManager(
        struct Windows::Internal::Data::Activities::IViewActiveActivityManager **this,
        struct Windows::Internal::Data::Activities::IViewActiveActivityManager **a2)
{
  int active; // eax
  const char *v5; // r9
  struct Windows::Internal::Data::Activities::IViewActiveActivityManager *v6; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  active = TaskFlowImmersiveShellBroker::EnsureViewActiveActivityManager((TaskFlowImmersiveShellBroker *)this);
  try
  {
    if ( active < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        393LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)active);
    v6 = this[31];
    if ( v6 )
    {
      *a2 = v6;
      (*(void (__fastcall **)(struct Windows::Internal::Data::Activities::IViewActiveActivityManager *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      *a2 = 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x18E,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v5);
  }
  return result;
}
