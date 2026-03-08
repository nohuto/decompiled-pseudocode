/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x1404131F0
 * Callers:
 *     DifZwAlpcAcceptConnectPortWrapper @ 0x1405EA900 (DifZwAlpcAcceptConnectPortWrapper.c)
 *     PopUmpoProcessMessage @ 0x14073B3C8 (PopUmpoProcessMessage.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14084A04C (SshpAlpcProcessAlpcMessage.c)
 *     PopMonitorProcessLoop @ 0x14085C548 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
