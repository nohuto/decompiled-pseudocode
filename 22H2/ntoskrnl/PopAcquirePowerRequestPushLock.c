/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x1407A73E4
 * Callers:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14032B928 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x14032B9D0 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestCreateCommon @ 0x14032BB98 (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestDelete @ 0x1407A6CA0 (PopPowerRequestDelete.c)
 *     PopUpdatePdcSystemIdleState @ 0x1407A750C (PopUpdatePdcSystemIdleState.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x1407A7B64 (PopPowerRequestHandleRequestUpdate.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1408561F0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopWnfAudioCallback @ 0x1408562B0 (PopWnfAudioCallback.c)
 *     PopDiagTraceControlCallback @ 0x140862C00 (PopDiagTraceControlCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x1408630C4 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140981610 (PopPowerRequestDebounceTimerWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x1409816C0 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotificationsBegin @ 0x1409816F4 (PopPowerRequestNotificationsBegin.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1409817B8 (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140981800 (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x14098187C (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x1409818C4 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x140981980 (PopPowerRequestRevokeRequestsForSleep.c)
 *     PopPowerRequestSpecialRequestClear @ 0x1409819B0 (PopPowerRequestSpecialRequestClear.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140981A8C (PopPowerRequestSpecialRequestSet.c)
 *     PopGetPowerRequestListInfo @ 0x140984300 (PopGetPowerRequestListInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *__fastcall PopAcquirePowerRequestPushLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 )
    return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerRequestLock);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return (struct _KTHREAD *)ExAcquirePushLockSharedEx((ULONG_PTR)&PopPowerRequestLock, 0LL);
}
