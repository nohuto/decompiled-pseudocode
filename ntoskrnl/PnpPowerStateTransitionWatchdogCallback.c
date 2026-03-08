/*
 * XREFs of PnpPowerStateTransitionWatchdogCallback @ 0x14055E2B0
 * Callers:
 *     <none>
 * Callees:
 *     PnpBugcheckPowerTimeout @ 0x14055EC88 (PnpBugcheckPowerTimeout.c)
 */

void __fastcall __noreturn PnpPowerStateTransitionWatchdogCallback(ULONG_PTR a1)
{
  PnpBugcheckPowerTimeout(a1);
}
