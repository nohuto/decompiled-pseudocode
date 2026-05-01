/*
 * XREFs of ?remove_TabDeselectedViewActive@BrokeredViewTabConverterImpl@@UEAAJUEventRegistrationToken@@@Z @ 0x1802D2940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BrokeredViewTabConverterImpl::remove_TabDeselectedViewActive(
        BrokeredViewTabConverterImpl *this,
        struct EventRegistrationToken a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 176LL))(*((_QWORD *)this + 8), a2.value);
}
