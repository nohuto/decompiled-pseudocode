/*
 * XREFs of ZwAlpcCancelMessage @ 0x1403FA920
 * Callers:
 *     PopUmpoProcessMessage @ 0x1406F3304 (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
