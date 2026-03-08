/*
 * XREFs of PopIrpWatchdog @ 0x140580EE0
 * Callers:
 *     <none>
 * Callees:
 *     PopIrpWatchdogBugcheck @ 0x140580EF4 (PopIrpWatchdogBugcheck.c)
 */

void __fastcall __noreturn PopIrpWatchdog(__int64 a1, ULONG a2)
{
  PopIrpWatchdogBugcheck(a2);
}
