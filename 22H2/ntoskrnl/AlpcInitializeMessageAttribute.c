/*
 * XREFs of AlpcInitializeMessageAttribute @ 0x14034A380
 * Callers:
 *     PopUmpoProcessMessages @ 0x1406F31D4 (PopUmpoProcessMessages.c)
 *     DbgkpSendErrorMessage @ 0x1408873C0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x14034A3E0 (AlpcGetHeaderSize.c)
 */

NTSTATUS __cdecl AlpcInitializeMessageAttribute(
        ULONG AttributeFlags,
        PALPC_MESSAGE_ATTRIBUTES Buffer,
        SIZE_T BufferSize,
        PSIZE_T RequiredBufferSize)
{
  ULONG HeaderSize; // eax

  HeaderSize = AlpcGetHeaderSize(AttributeFlags);
  *RequiredBufferSize = HeaderSize;
  if ( HeaderSize > BufferSize )
    return -1073741789;
  if ( Buffer )
  {
    Buffer->ValidAttributes = 0;
    Buffer->AllocatedAttributes = AttributeFlags;
  }
  return 0;
}
