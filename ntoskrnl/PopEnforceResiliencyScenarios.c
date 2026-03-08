/*
 * XREFs of PopEnforceResiliencyScenarios @ 0x140991238
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1402D1FF0 (PoFxSendSystemLatencyUpdate.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14058B560 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopEnforceDeepSleep @ 0x140991184 (PopEnforceDeepSleep.c)
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
