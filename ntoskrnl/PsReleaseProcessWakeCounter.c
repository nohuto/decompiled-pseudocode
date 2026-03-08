/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x140711BD0
 * Callers:
 *     EtwpReleaseQueueEntry @ 0x1406909C8 (EtwpReleaseQueueEntry.c)
 *     AlpcpAcceptConnectPort @ 0x140713844 (AlpcpAcceptConnectPort.c)
 *     AlpcpCancelMessage @ 0x1407141F0 (AlpcpCancelMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1407172DC (AlpcpCancelMessagesByRequestor.c)
 *     PopPowerRequestDelete @ 0x14073B0E0 (PopPowerRequestDelete.c)
 *     AlpcMessageCleanupProcedure @ 0x1407CA690 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x1407CAFB0 (AlpcpSendMessage.c)
 *     PspCloseActivityReference @ 0x1407FCDF0 (PspCloseActivityReference.c)
 *     PopPowerRequestSpecialRequestClear @ 0x14097E900 (PopPowerRequestSpecialRequestClear.c)
 *     PopPowerRequestSpecialRequestSet @ 0x14097E9DC (PopPowerRequestSpecialRequestSet.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1407CA2E0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter((PVOID)(a1 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
}
