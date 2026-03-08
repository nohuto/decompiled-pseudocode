/*
 * XREFs of PsChargeProcessWakeCounter @ 0x140793DC0
 * Callers:
 *     EtwpQueueNotification @ 0x14069039C (EtwpQueueNotification.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 *     PspCreateActivityReference @ 0x1407FC704 (PspCreateActivityReference.c)
 *     PopPowerRequestSpecialRequestSet @ 0x14097E9DC (PopPowerRequestSpecialRequestSet.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x14033E340 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x1407CA2E0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsChargeProcessWakeCounter(PVOID Object)
{
  __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId((__int64)Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, 1, 1, 0LL);
  return result;
}
