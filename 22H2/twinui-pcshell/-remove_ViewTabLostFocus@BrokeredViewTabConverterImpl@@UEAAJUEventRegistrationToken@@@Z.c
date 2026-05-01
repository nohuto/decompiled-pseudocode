/*
 * XREFs of ?remove_ViewTabLostFocus@BrokeredViewTabConverterImpl@@UEAAJUEventRegistrationToken@@@Z @ 0x1802D2A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BrokeredViewTabConverterImpl::remove_ViewTabLostFocus(
        BrokeredViewTabConverterImpl *this,
        struct EventRegistrationToken a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 160LL))(*((_QWORD *)this + 8), a2.value);
}
