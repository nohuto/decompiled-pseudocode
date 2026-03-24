/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x1405DE9D0
 * Callers:
 *     AlpcMessageCleanupProcedure @ 0x1405DE260 (AlpcMessageCleanupProcedure.c)
 *     AlpcpAcceptConnectPort @ 0x1405E103C (AlpcpAcceptConnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1405E2A50 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x1405E301C (AlpcpCancelMessage.c)
 *     AlpcpSendMessage @ 0x1405E4800 (AlpcpSendMessage.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x1406F4A40 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     EtwpReleaseQueueEntry @ 0x1407181BC (EtwpReleaseQueueEntry.c)
 *     PspCloseActivityReference @ 0x140734E50 (PspCloseActivityReference.c)
 *     PopClearSpecialRequest @ 0x1408E184C (PopClearSpecialRequest.c)
 *     PopSetSpecialRequest @ 0x1408E1BFC (PopSetSpecialRequest.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1405E6B10 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter((PVOID)(a1 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
}
