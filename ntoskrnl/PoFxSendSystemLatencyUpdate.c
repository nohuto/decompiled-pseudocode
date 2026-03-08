/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x1402D1FF0
 * Callers:
 *     PoNotifyVSyncChange @ 0x1402D1CA0 (PoNotifyVSyncChange.c)
 *     PopDeepSleepEvaluateCallback @ 0x140595FC0 (PopDeepSleepEvaluateCallback.c)
 *     PopCheckResiliencyScenarios @ 0x14073AF4C (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x140981610 (PopWnfFullscreenVideoCallback.c)
 *     PopEnforceResiliencyScenarios @ 0x140991238 (PopEnforceResiliencyScenarios.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1402373CC (KeFlushProcessWriteBuffers.c)
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x1402D207C (PopFxGetLatencyLimitWithoutResiliency.c)
 *     PpmGetExitSamplingCountdown @ 0x1402D20B4 (PpmGetExitSamplingCountdown.c)
 *     PpmIdleUsingStateSelection @ 0x1402D20E0 (PpmIdleUsingStateSelection.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1402D2140 (PopDiagTraceSystemLatencyUpdate.c)
 *     PoFxSystemLatencyNotify @ 0x1402D21B4 (PoFxSystemLatencyNotify.c)
 */

__int64 PoFxSendSystemLatencyUpdate()
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  char v2; // di
  char v3; // si
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( byte_140C3D6F4 && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || PopDeepSleepIsEngaged) )
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
