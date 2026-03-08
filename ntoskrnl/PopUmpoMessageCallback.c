/*
 * XREFs of PopUmpoMessageCallback @ 0x1402BBFC0
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoProcessMessages @ 0x14073B298 (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
