/*
 * XREFs of PopIrpWatchdog @ 0x140583410
 * Callers:
 *     <none>
 * Callees:
 *     PopIrpWatchdogBugcheck @ 0x140583424 (PopIrpWatchdogBugcheck.c)
 */

void __fastcall __noreturn PopIrpWatchdog(__int64 a1, ULONG a2)
{
  PopIrpWatchdogBugcheck(a2);
}
