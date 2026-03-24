/*
 * XREFs of PopMonitorAlpcCallback @ 0x1408F27A0
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x1407D0594 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
