/*
 * XREFs of PopCoalescingSetActiveState @ 0x14058D97C
 * Callers:
 *     PopCoalescingCallbackWorker @ 0x140987000 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     KeCancelTimer @ 0x140252980 (KeCancelTimer.c)
 *     PopCoalescingSetTimer @ 0x14058DA10 (PopCoalescingSetTimer.c)
 *     PopCheckResiliencyScenarios @ 0x140700F30 (PopCheckResiliencyScenarios.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140844FEC (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopDiagTraceIoCoalescingOff @ 0x14098FCB8 (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x14098FCE8 (PopDiagTraceIoCoalescingOn.c)
 */

__int64 __fastcall PopCoalescingSetActiveState(char a1)
{
  unsigned int v1; // ebx
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  v1 = 0;
  if ( a1 )
  {
    v2 = PopDppeCoalescingSpindownTimeout;
    if ( PopCoalescingEnforced )
      v2 = PopEnforcedCoalescingSpindownTimeout;
    PopCoalescingState |= 1u;
    PopCoalescingLastFlushTime = MEMORY[0xFFFFF78000000008];
    PopCurrentCoalescingSpindownTimeout = v2;
    PopCoalescingSetTimer();
    PopUpdateDiskIdleTimeoutSetting();
    LOBYTE(v1) = PopCoalescingEnforced == 0;
    return PopDiagTraceIoCoalescingOn(v4, v3, v5, v1);
  }
  else
  {
    PopCoalescingState &= ~1u;
    PopCurrentCoalescingSpindownTimeout = 0;
    KeCancelTimer(&PopCoalescingTimer);
    PopCheckResiliencyScenarios();
    PopUpdateDiskIdleTimeoutSetting();
    return PopDiagTraceIoCoalescingOff();
  }
}
