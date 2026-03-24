/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x1403FB280
 * Callers:
 *     PopUmpoProcessMessage @ 0x14067A514 (PopUmpoProcessMessage.c)
 *     PopMonitorProcessLoop @ 0x1407D0674 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
