/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x1403031D8
 * Callers:
 *     PopRecordLongPowerButtonPressDetected @ 0x14085A9C0 (PopRecordLongPowerButtonPressDetected.c)
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlBootStatusDisableFlushing(char a1)
{
  BootStatDisableFlush = a1;
}
