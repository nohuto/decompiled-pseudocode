/*
 * XREFs of PopMonitorAlpcCallback @ 0x140999FE0
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x1408600E4 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
