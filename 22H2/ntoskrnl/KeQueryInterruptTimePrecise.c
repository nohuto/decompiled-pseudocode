/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x140318820
 * Callers:
 *     HalpTimerWatchdogPreResetInterrupt @ 0x1404D4910 (HalpTimerWatchdogPreResetInterrupt.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140775418 (PopEnableSystemSleepCheckpoint.c)
 *     PopSleepstudyStartNextSession @ 0x140775738 (PopSleepstudyStartNextSession.c)
 *     PopPowerAggregatorRecordIntent @ 0x1407769C0 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140776D08 (PopPowerAggregatorAllocateLogEntry.c)
 *     MiSessionCreateInternal @ 0x140786B10 (MiSessionCreateInternal.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x1408FA43C (PopSleepstudySnapModernStandbySessionData.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022A120 (RtlGetInterruptTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQueryInterruptTimePrecise(LARGE_INTEGER *a1)
{
  return RtlGetInterruptTimePrecise(a1);
}
