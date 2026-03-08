/*
 * XREFs of AlpcGetMessageAttribute @ 0x1402BBFE0
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402BD1D0 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x14073B298 (PopUmpoProcessMessages.c)
 *     SshpAlpcMessageCallback @ 0x140849F10 (SshpAlpcMessageCallback.c)
 *     DbgkpSendErrorMessage @ 0x14093730C (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x1402BC080 (AlpcGetHeaderSize.c)
 */

char *__fastcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (*a1 & a2) == 0 || ((a2 - 1) & a2) != 0 )
    return 0LL;
  else
    return (char *)a1 + (unsigned int)AlpcGetHeaderSize(*a1 & (unsigned int)(-2 * a2));
}
