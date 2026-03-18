/*
 * XREFs of PopRecordPoBlackboxInformation @ 0x1409A0C98
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D89F0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1405DF34C (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1405DF54C (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1405DF828 (PopRecordPowerWatchdogBlackboxInformation.c)
 */

void PopRecordPoBlackboxInformation()
{
  PopRecordPoIrpBlackboxInformation();
  PopRecordPepWorkorderBlackboxInformation();
  PopRecordPowerWatchdogBlackboxInformation();
}
