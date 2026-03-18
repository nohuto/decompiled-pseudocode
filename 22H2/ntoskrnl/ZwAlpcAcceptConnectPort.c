/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x14041B580
 * Callers:
 *     DifZwAlpcAcceptConnectPortWrapper @ 0x1405ECDB0 (DifZwAlpcAcceptConnectPortWrapper.c)
 *     PopUmpoProcessMessage @ 0x1407A6F88 (PopUmpoProcessMessage.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14084D7DC (SshpAlpcProcessAlpcMessage.c)
 *     PopMonitorProcessLoop @ 0x140860448 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
