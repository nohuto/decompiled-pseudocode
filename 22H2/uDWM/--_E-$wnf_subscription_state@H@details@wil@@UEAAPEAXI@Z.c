/*
 * XREFs of ??_E?$wnf_subscription_state@H@details@wil@@UEAAPEAXI@Z @ 0x1800960F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ??1?$wnf_subscription_state@H@details@wil@@UEAA@XZ @ 0x180095E18 (--1-$wnf_subscription_state@H@details@wil@@UEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::wnf_subscription_state<int>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  wil::details::wnf_subscription_state<int>::~wnf_subscription_state<int>(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
  return a1;
}
