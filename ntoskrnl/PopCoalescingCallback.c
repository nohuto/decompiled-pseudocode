/*
 * XREFs of PopCoalescingCallback @ 0x140983F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopCoalescingCallback(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 24))(
           *(unsigned int *)(a2 + 4),
           a3,
           *(_QWORD *)(a1 + 40));
}
