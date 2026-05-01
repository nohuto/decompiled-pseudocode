/*
 * XREFs of ?GetBridge@WindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIWindowManagerBridge@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006B940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall WindowEventDispatcher::GetBridge(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 296);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
