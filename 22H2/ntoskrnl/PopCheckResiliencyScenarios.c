/*
 * XREFs of PopCheckResiliencyScenarios @ 0x140700F30
 * Callers:
 *     PopCoalescingSetActiveState @ 0x14058D97C (PopCoalescingSetActiveState.c)
 *     PopPowerRequestCallbackExecutionRequired @ 0x1407A6BE0 (PopPowerRequestCallbackExecutionRequired.c)
 *     PopDeepSleepPowerSettingCallback @ 0x140863AA0 (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1408640A0 (PopCoalescingPowerSettingCallback.c)
 *     PopUpdateConsoleDisplayState @ 0x140873D64 (PopUpdateConsoleDisplayState.c)
 *     PdcPoResiliencyClient @ 0x140997BA0 (PdcPoResiliencyClient.c)
 *     PopPdcIdleResiliencyCallback @ 0x14099812C (PopPdcIdleResiliencyCallback.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepEnabled @ 0x14028E628 (PopDeepSleepEnabled.c)
 *     PopDeepSleepClearDisengageReason @ 0x14028E63C (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x14028E728 (PopDeepSleepSetDisengageReason.c)
 *     PpmReleaseLock @ 0x14032C0A0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C0F0 (PpmAcquireLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14032C150 (PoFxSendSystemLatencyUpdate.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x14058426C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x14058DA90 (PopEnsureCoalescingWorkerWillRun.c)
 */

void PopCheckResiliencyScenarios()
{
  char v0; // si
  char v1; // bl
  char v2; // di
  bool v3; // al
  char v4; // cl

  v0 = PopCurrentCoalescingSpindownTimeout != 0;
  if ( !PopDeepSleepEnforced && !PopCoalescingEnforced )
  {
    v1 = 1;
    if ( byte_140C3DAD4 )
    {
      v2 = PopPdcIdleResiliency;
      if ( PopDeepSleepEnabled() )
      {
        if ( v2 )
          PpmDripsStateIndex = PpmGetDeepSleepPlatformStateIndex();
        else
          PpmDripsStateIndex = -1;
      }
    }
    else
    {
      v2 = 0;
    }
    v3 = PopDeepSleepEnabled();
    if ( !v4 || !PopDppeCoalescingSpindownTimeout )
      v1 = 0;
    if ( v2 && v3 )
    {
      PopDeepSleepClearDisengageReason(0);
    }
    else
    {
      PopDeepSleepSetDisengageReason(0);
      if ( byte_140C3DAD4 && !PopDeepSleepEnabled() )
      {
        PpmAcquireLock(&PopFxSystemLatencyLock);
        if ( PopIdleResiliencyIsEngagedWithoutDeepSleep != v2 )
        {
          PopIdleResiliencyIsEngagedWithoutDeepSleep = v2;
          PoFxSendSystemLatencyUpdate();
        }
        PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
      }
    }
    if ( v1 != v0 )
    {
      PopCoalescingState = (2 * v1) | PopCoalescingState & 0xFD;
      PopEnsureCoalescingWorkerWillRun();
    }
  }
}
