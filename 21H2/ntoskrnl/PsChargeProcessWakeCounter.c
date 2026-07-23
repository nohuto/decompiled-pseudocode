/*
 * XREFs of PsChargeProcessWakeCounter @ 0x1406BCA00
 * Callers:
 *     EtwpQueueNotification @ 0x1406BB52C (EtwpQueueNotification.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406D4D10 (AlpcpCompleteDispatchMessage.c)
 *     PspCreateActivityReference @ 0x140731658 (PspCreateActivityReference.c)
 *     PopSetSpecialRequest @ 0x1408E1D0C (PopSetSpecialRequest.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x1402A9AB0 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x1406D6270 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsChargeProcessWakeCounter(__int64 a1)
{
  __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId(a1);
  if ( result )
    return PspChargeProcessWakeCounter(a1, 1, 1, 0LL);
  return result;
}
