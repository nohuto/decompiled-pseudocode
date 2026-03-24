/*
 * XREFs of PopUmpoMessageCallback @ 0x140281310
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoProcessMessages @ 0x14067A3E4 (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
