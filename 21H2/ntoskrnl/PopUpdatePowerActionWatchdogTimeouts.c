/*
 * XREFs of PopUpdatePowerActionWatchdogTimeouts @ 0x1407758F0
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x140382D50 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledDeviceUsage @ 0x1403F8354 (Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledDeviceUsage.c)
 */

__int64 PopUpdatePowerActionWatchdogTimeouts()
{
  __int64 result; // rax

  result = Feature_SleepReliabilityDetailedDiagnostics__private_IsEnabledDeviceUsage();
  if ( (_DWORD)result )
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
