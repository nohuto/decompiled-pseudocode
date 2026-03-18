/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x140715770
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1407169EC (AlpcpAcceptConnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140719264 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcMessageCleanupProcedure @ 0x140738C90 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x1407395B0 (AlpcpSendMessage.c)
 *     AlpcpCancelMessage @ 0x14077971C (AlpcpCancelMessage.c)
 *     EtwpReleaseQueueEntry @ 0x140781D20 (EtwpReleaseQueueEntry.c)
 *     PopPowerRequestDelete @ 0x1407A6CA0 (PopPowerRequestDelete.c)
 *     PspCloseActivityReference @ 0x140801AA0 (PspCloseActivityReference.c)
 *     PopPowerRequestSpecialRequestClear @ 0x1409819B0 (PopPowerRequestSpecialRequestClear.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140981A8C (PopPowerRequestSpecialRequestSet.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1407388E0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter((PVOID)(a1 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
}
