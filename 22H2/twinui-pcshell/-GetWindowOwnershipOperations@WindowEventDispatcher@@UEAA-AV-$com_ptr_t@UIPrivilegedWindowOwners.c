/*
 * XREFs of ?GetWindowOwnershipOperations@WindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIPrivilegedWindowOwnershipOperations@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180325F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall WindowEventDispatcher::GetWindowOwnershipOperations(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 280);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
