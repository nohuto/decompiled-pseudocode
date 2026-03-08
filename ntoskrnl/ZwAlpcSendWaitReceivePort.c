/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x140413490
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402BD1D0 (PopUmpoSendPowerMessage.c)
 *     DifZwAlpcSendWaitReceivePortWrapper @ 0x1405EB3F0 (DifZwAlpcSendWaitReceivePortWrapper.c)
 *     PopUmpoProcessMessages @ 0x14073B298 (PopUmpoProcessMessages.c)
 *     SshpAlpcMessageCallback @ 0x140849F10 (SshpAlpcMessageCallback.c)
 *     SshpAlpcSendMessage @ 0x14084A2B0 (SshpAlpcSendMessage.c)
 *     PopMonitorProcessLoop @ 0x14085C548 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x14093730C (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
