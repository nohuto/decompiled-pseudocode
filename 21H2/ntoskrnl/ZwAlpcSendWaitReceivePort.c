/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1403FB520
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140282A48 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x14067A3E4 (PopUmpoProcessMessages.c)
 *     PopMonitorProcessLoop @ 0x1407D0674 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x140887370 (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
