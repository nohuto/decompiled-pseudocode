/*
 * XREFs of PopMonitorAlpcCallback @ 0x140994910
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x14085C548 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
