/*
 * XREFs of PsChargeProcessWakeCounter @ 0x1406A1C90
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1405E55B0 (AlpcpCompleteDispatchMessage.c)
 *     EtwpQueueNotification @ 0x140717AEC (EtwpQueueNotification.c)
 *     PspCreateActivityReference @ 0x1407317E8 (PspCreateActivityReference.c)
 *     PopSetSpecialRequest @ 0x1408E1BFC (PopSetSpecialRequest.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x140205130 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x1405E6B10 (PspChargeProcessWakeCounter.c)
 */

unsigned __int64 __fastcall PsChargeProcessWakeCounter(__int64 Object, int a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId(Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, a2, a3, a4, 1, 1, 0LL);
  return result;
}
