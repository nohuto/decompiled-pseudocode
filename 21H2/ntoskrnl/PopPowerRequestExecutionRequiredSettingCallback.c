/*
 * XREFs of PopPowerRequestExecutionRequiredSettingCallback @ 0x1408630F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     PopAcquirePowerRequestPushLock @ 0x140753094 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1407EE888 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x14086318C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 */

__int64 __fastcall PopPowerRequestExecutionRequiredSettingCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9

  v6 = -1073741811;
  PopAcquirePowerRequestPushLock(1);
  v7 = *(_QWORD *)&GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data1 == *a1 )
    v7 = *(_QWORD *)GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data4 - a1[1];
  if ( !v7 && a3 == 4 && a2 )
  {
    KeCancelTimer2((__int64)&PopPowerRequestExecutionRequiredTimeoutTimer);
    PopExecutionRequiredTimeout = *a2;
    PopPowerRequestSetExecutionRequiredTimeoutTimer();
    PopPowerRequestHandleExecutionEnablementUpdate();
    v6 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return v6;
}
