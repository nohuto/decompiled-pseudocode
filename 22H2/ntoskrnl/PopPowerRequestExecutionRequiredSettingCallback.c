/*
 * XREFs of PopPowerRequestExecutionRequiredSettingCallback @ 0x1408561F0
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x14031DD00 (KeCancelTimer2.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A73E4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x14085628C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408563D4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
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
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
  return v6;
}
