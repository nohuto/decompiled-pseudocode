/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x14041C640
 * Callers:
 *     DifZwAlpcAcceptConnectPortWrapper @ 0x14061CD10 (DifZwAlpcAcceptConnectPortWrapper.c)
 *     PopUmpoProcessMessage @ 0x1407EFC00 (PopUmpoProcessMessage.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14081AFCC (SshpAlpcProcessAlpcMessage.c)
 *     PopMonitorProcessLoop @ 0x1408600E4 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
