/*
 * XREFs of KiUserCallbackDispatcher @ 0x1800A1350
 * Callers:
 *     <none>
 * Callees:
 *     ZwCallbackReturn @ 0x18009D580 (ZwCallbackReturn.c)
 *     KiUserCallForwarder @ 0x1800A11E0 (KiUserCallForwarder.c)
 *     RtlRaiseStatus @ 0x180102540 (RtlRaiseStatus.c)
 */

void __fastcall __noreturn KiUserCallbackDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax

  v5 = KiUserCallForwarder();
  v6 = ZwCallbackReturn(0LL, 0, v5);
  RtlRaiseStatus(v6);
}
