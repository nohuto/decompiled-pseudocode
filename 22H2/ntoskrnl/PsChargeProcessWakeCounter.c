/*
 * XREFs of PsChargeProcessWakeCounter @ 0x14077F530
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14073A390 (AlpcpCompleteDispatchMessage.c)
 *     EtwpQueueNotification @ 0x1407816F4 (EtwpQueueNotification.c)
 *     PspCreateActivityReference @ 0x1408013B4 (PspCreateActivityReference.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140981A8C (PopPowerRequestSpecialRequestSet.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x1402B6AF0 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x1407388E0 (PspChargeProcessWakeCounter.c)
 */

unsigned __int64 __fastcall PsChargeProcessWakeCounter(__int64 Object, int a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId(Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, a2, a3, a4, 1, 1, 0LL);
  return result;
}
