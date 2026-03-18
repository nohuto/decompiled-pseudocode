/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x14036EB88
 * Callers:
 *     PopRecordLongPowerButtonPressDetected @ 0x140802DEC (PopRecordLongPowerButtonPressDetected.c)
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlBootStatusDisableFlushing(char a1)
{
  BootStatDisableFlush = a1;
}
