/*
 * XREFs of ?v_OnViewDestroyed@LegacyViewWrapper@@EEAAXXZ @ 0x180339770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::v_OnViewDestroyed(LegacyViewWrapper *this)
{
  if ( *((_QWORD *)this + 34) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 504LL) + 176LL))(
      *(_QWORD *)(*((_QWORD *)this + 21) + 504LL),
      *((unsigned int *)this + 68));
}
