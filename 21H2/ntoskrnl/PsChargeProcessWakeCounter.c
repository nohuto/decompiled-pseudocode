/*
 * XREFs of PsChargeProcessWakeCounter @ 0x1406E1310
 * Callers:
 *     PspCreateActivityReference @ 0x1406E1214 (PspCreateActivityReference.c)
 *     EtwpQueueNotification @ 0x140790EEC (EtwpQueueNotification.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407AACC0 (AlpcpCompleteDispatchMessage.c)
 *     PopPowerRequestSpecialRequestSet @ 0x14098A13C (PopPowerRequestSpecialRequestSet.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x1402F63C0 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x1407AC250 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsChargeProcessWakeCounter(__int64 a1)
{
  __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId(a1);
  if ( result )
    return PspChargeProcessWakeCounter(a1, 1, 1, 0LL);
  return result;
}
