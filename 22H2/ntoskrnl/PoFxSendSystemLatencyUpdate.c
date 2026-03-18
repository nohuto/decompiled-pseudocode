/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x14032C150
 * Callers:
 *     PoNotifyVSyncChange @ 0x14032BE00 (PoNotifyVSyncChange.c)
 *     PopDeepSleepEvaluateCallback @ 0x1405984E0 (PopDeepSleepEvaluateCallback.c)
 *     PopCheckResiliencyScenarios @ 0x140700F30 (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x1409846C0 (PopWnfFullscreenVideoCallback.c)
 *     PopEnforceResiliencyScenarios @ 0x1409942E8 (PopEnforceResiliencyScenarios.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1402C000C (KeFlushProcessWriteBuffers.c)
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x14032C1DC (PopFxGetLatencyLimitWithoutResiliency.c)
 *     PpmGetExitSamplingCountdown @ 0x14032C214 (PpmGetExitSamplingCountdown.c)
 *     PpmIdleUsingStateSelection @ 0x14032C240 (PpmIdleUsingStateSelection.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14032C2CC (PopDiagTraceSystemLatencyUpdate.c)
 *     PoFxSystemLatencyNotify @ 0x14032C340 (PoFxSystemLatencyNotify.c)
 */

__int64 PoFxSendSystemLatencyUpdate()
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  char v2; // di
  char v3; // si
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( byte_140C3DAD4 && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || PopDeepSleepIsEngaged) )
    LatencyLimitWithoutResiliency = dword_140D1D3F4;
  else
    LatencyLimitWithoutResiliency = PopFxGetLatencyLimitWithoutResiliency();
  result = (unsigned int)PopFxSystemLatencyLimit;
  if ( LatencyLimitWithoutResiliency != PopFxSystemLatencyLimit )
  {
    if ( (unsigned int)PpmGetExitSamplingCountdown() )
    {
      v2 = 1;
      if ( LatencyLimitWithoutResiliency > PopFxSystemLatencyLimit )
      {
        PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
        _InterlockedOr(v4, 0);
      }
    }
    else
    {
      v2 = 0;
    }
    PopDiagTraceSystemLatencyUpdate(0LL, LatencyLimitWithoutResiliency);
    PopFxSystemLatencyHint = LatencyLimitWithoutResiliency;
    v3 = PoFxSystemLatencyNotify(LatencyLimitWithoutResiliency);
    result = PpmIdleUsingStateSelection();
    if ( (_BYTE)result || v3 )
    {
      if ( v2 )
        result = KeFlushProcessWriteBuffers(1);
    }
    PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
  }
  return result;
}
