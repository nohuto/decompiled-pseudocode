/*
 * XREFs of PopEnforceResiliencyScenarios @ 0x1409942E8
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x14032C0A0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C0F0 (PpmAcquireLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14032C150 (PoFxSendSystemLatencyUpdate.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14058DA90 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopEnforceDeepSleep @ 0x140994234 (PopEnforceDeepSleep.c)
 */

void __fastcall PopEnforceResiliencyScenarios(int *a1)
{
  int v2; // ecx

  PopEnforceDeepSleep();
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PoFxSendSystemLatencyUpdate();
  PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
  v2 = *a1;
  if ( *a1 )
  {
    if ( PopCurrentCoalescingSpindownTimeout )
      return;
    PopCoalescingState |= 2u;
    PopCoalescingEnforced = 1;
    PopEnforcedCoalescingSpindownTimeout = v2;
    goto LABEL_7;
  }
  if ( PopCurrentCoalescingSpindownTimeout && PopCoalescingEnforced )
  {
    PopCoalescingState &= ~2u;
    PopEnforcedCoalescingSpindownTimeout = 0;
    PopCoalescingEnforced = 0;
LABEL_7:
    PopEnsureCoalescingWorkerWillRun();
  }
}
