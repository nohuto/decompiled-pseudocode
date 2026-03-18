/*
 * XREFs of PnpPowerStateTransitionWatchdogCallback @ 0x140560750
 * Callers:
 *     <none>
 * Callees:
 *     PnpBugcheckPowerTimeout @ 0x140561128 (PnpBugcheckPowerTimeout.c)
 */

void __fastcall __noreturn PnpPowerStateTransitionWatchdogCallback(ULONG_PTR a1)
{
  PnpBugcheckPowerTimeout(a1);
}
