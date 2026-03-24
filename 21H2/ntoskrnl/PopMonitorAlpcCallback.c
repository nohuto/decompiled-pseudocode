/*
 * XREFs of PopMonitorAlpcCallback @ 0x1408F2750
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x1407D0674 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
