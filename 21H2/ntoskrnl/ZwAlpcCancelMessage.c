/*
 * XREFs of ZwAlpcCancelMessage @ 0x1403FB480
 * Callers:
 *     PopUmpoProcessMessage @ 0x14066DC54 (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
