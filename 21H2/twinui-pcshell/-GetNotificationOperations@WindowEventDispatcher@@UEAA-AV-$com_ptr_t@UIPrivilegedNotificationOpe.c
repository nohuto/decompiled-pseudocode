/*
 * XREFs of ?GetNotificationOperations@WindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIPrivilegedNotificationOperations@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180325CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall WindowEventDispatcher::GetNotificationOperations(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 272);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
