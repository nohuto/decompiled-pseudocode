/*
 * XREFs of PopUpdatePowerActionWatchdogTimeouts @ 0x1407FF3B4
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x14038B9A0 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x1407FF3EC (PopIsDetailedSleepReliabilityDiagEnabled.c)
 */

__int64 PopUpdatePowerActionWatchdogTimeouts()
{
  __int64 result; // rax

  result = PopIsDetailedSleepReliabilityDiagEnabled();
  if ( (_BYTE)result )
  {
    PopPowerActionTransitioningWatchdogTimeout = 330;
    PopPowerActionResumingWatchdogTimeout = 150;
  }
  else
  {
    PopPowerActionTransitioningWatchdogTimeout = PopPowerActionTransitioningWatchdogTimeoutDefault;
    result = (unsigned int)PopPowerActionResumingWatchdogTimeoutDefault;
    PopPowerActionResumingWatchdogTimeout = PopPowerActionResumingWatchdogTimeoutDefault;
  }
  return result;
}
