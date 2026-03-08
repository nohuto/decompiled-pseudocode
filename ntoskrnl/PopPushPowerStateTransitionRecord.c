/*
 * XREFs of PopPushPowerStateTransitionRecord @ 0x140AA309C
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402BD1D0 (PopUmpoSendPowerMessage.c)
 *     PopManageTransitionRecordRequest @ 0x140981498 (PopManageTransitionRecordRequest.c)
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 *     PopInitSystemSleeperThread @ 0x1409887A0 (PopInitSystemSleeperThread.c)
 * Callees:
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058CC64 (PoPushPowerStateTransitionRecordWithCallback.c)
 */

__int64 __fastcall PopPushPowerStateTransitionRecord(void *a1, void *a2, __int64 a3)
{
  return PoPushPowerStateTransitionRecordWithCallback(a1, a2, a3, 0LL);
}
