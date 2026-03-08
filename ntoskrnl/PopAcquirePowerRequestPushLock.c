/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x14073B7D4
 * Callers:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x1402BC0D8 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x1402BC180 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestCreateCommon @ 0x1402BC348 (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestDelete @ 0x14073B0E0 (PopPowerRequestDelete.c)
 *     PopUpdatePdcSystemIdleState @ 0x14073B8FC (PopUpdatePdcSystemIdleState.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x14073BF54 (PopPowerRequestHandleRequestUpdate.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1408523C0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopWnfAudioCallback @ 0x140852480 (PopWnfAudioCallback.c)
 *     PopDiagTraceControlCallback @ 0x14085EC40 (PopDiagTraceControlCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x14085F104 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x14097E560 (PopPowerRequestDebounceTimerWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x14097E610 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotificationsBegin @ 0x14097E644 (PopPowerRequestNotificationsBegin.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x14097E708 (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x14097E750 (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x14097E7CC (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x14097E814 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x14097E8D0 (PopPowerRequestRevokeRequestsForSleep.c)
 *     PopPowerRequestSpecialRequestClear @ 0x14097E900 (PopPowerRequestSpecialRequestClear.c)
 *     PopPowerRequestSpecialRequestSet @ 0x14097E9DC (PopPowerRequestSpecialRequestSet.c)
 *     PopGetPowerRequestListInfo @ 0x140981250 (PopGetPowerRequestListInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
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
