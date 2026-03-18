/*
 * XREFs of PopUmpoMessageCallback @ 0x14032B810
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoProcessMessages @ 0x1407A6E58 (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
