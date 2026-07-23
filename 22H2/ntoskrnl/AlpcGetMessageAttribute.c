/*
 * XREFs of AlpcGetMessageAttribute @ 0x14034A340
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14034BAC4 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x1406F31D4 (PopUmpoProcessMessages.c)
 *     DbgkpSendErrorMessage @ 0x1408873C0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x14034A3E0 (AlpcGetHeaderSize.c)
 */

PVOID __cdecl AlpcGetMessageAttribute(PALPC_MESSAGE_ATTRIBUTES Buffer, ULONG AttributeFlag)
{
  if ( (Buffer->AllocatedAttributes & AttributeFlag) == 0 || ((AttributeFlag - 1) & AttributeFlag) != 0 )
    return 0LL;
  else
    return (char *)Buffer + AlpcGetHeaderSize(Buffer->AllocatedAttributes & (-2 * AttributeFlag));
}
