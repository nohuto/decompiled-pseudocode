/*
 * XREFs of KiApplyDpcVerificationScaleSettings @ 0x1405691D4
 * Callers:
 *     KeUpdateDpcWatchdogConfiguration @ 0x140568BB0 (KeUpdateDpcWatchdogConfiguration.c)
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 KiApplyDpcVerificationScaleSettings()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
  {
    KeDpcWatchdogPeriodMs *= KeVerifierDpcScalingFactor;
    KeDpcTimeoutMs *= KeVerifierDpcScalingFactor;
    KeDpcSoftTimeoutMs *= KeVerifierDpcScalingFactor;
    KeDpcCumulativeSoftTimeoutMs *= KeVerifierDpcScalingFactor;
    KeDpcWatchdogProfileSingleDpcThresholdMs *= KeVerifierDpcScalingFactor;
    result = (unsigned int)(KeVerifierDpcScalingFactor * KeDpcWatchdogProfileCumulativeDpcThresholdMs);
    KeDpcWatchdogProfileCumulativeDpcThresholdMs *= KeVerifierDpcScalingFactor;
  }
  return result;
}
