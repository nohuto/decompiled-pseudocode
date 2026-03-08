/*
 * XREFs of PopUpdatePowerActionWatchdogTimeouts @ 0x140987AC8
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x14058D058 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140993F30 (PopIsDetailedSleepReliabilityDiagEnabled.c)
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
