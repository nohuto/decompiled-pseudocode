/*
 * XREFs of PopMonitorAlpcCallback @ 0x1408F28B0
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x1407D07E4 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
