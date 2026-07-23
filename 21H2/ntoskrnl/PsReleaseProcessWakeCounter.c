/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x1406CE130
 * Callers:
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14066F390 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     EtwpReleaseQueueEntry @ 0x1406BBBFC (EtwpReleaseQueueEntry.c)
 *     AlpcMessageCleanupProcedure @ 0x1406CD9C0 (AlpcMessageCleanupProcedure.c)
 *     AlpcpAcceptConnectPort @ 0x1406D079C (AlpcpAcceptConnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1406D21B0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x1406D277C (AlpcpCancelMessage.c)
 *     AlpcpSendMessage @ 0x1406D3F60 (AlpcpSendMessage.c)
 *     PspCloseActivityReference @ 0x140734CC0 (PspCloseActivityReference.c)
 *     PopClearSpecialRequest @ 0x1408E195C (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x1408E1D0C (PopSetSpecialRequest.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1406D6270 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter(a1 & 0xFFFFFFFFFFFFFFF8uLL, -1, 1, 0LL);
}
