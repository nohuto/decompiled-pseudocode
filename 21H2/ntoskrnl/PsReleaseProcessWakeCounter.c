/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x140668680
 * Callers:
 *     AlpcpCancelMessage @ 0x140662E08 (AlpcpCancelMessage.c)
 *     AlpcpAcceptConnectPort @ 0x140665B68 (AlpcpAcceptConnectPort.c)
 *     AlpcMessageCleanupProcedure @ 0x1406A1CC0 (AlpcMessageCleanupProcedure.c)
 *     PspCloseActivityReference @ 0x1406EB880 (PspCloseActivityReference.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14074E474 (AlpcpCancelMessagesByRequestor.c)
 *     EtwpReleaseQueueEntry @ 0x14078F094 (EtwpReleaseQueueEntry.c)
 *     AlpcpSendMessage @ 0x1407A9ED0 (AlpcpSendMessage.c)
 *     PopPowerRequestDelete @ 0x1407EF930 (PopPowerRequestDelete.c)
 *     PopPowerRequestSpecialRequestClear @ 0x14098A060 (PopPowerRequestSpecialRequestClear.c)
 *     PopPowerRequestSpecialRequestSet @ 0x14098A13C (PopPowerRequestSpecialRequestSet.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1407AC250 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter(a1 & 0xFFFFFFFFFFFFFFF8uLL, -1, 1, 0LL);
}
