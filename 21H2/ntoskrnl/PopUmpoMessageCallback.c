/*
 * XREFs of PopUmpoMessageCallback @ 0x14026F550
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoProcessMessages @ 0x14066DB24 (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
