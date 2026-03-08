/*
 * XREFs of PopPowerRequestExecutionRequiredSettingCallback @ 0x1408523C0
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x140204390 (KeCancelTimer2.c)
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14073B7D4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x14085245C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408525A4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

__int64 __fastcall PopPowerRequestExecutionRequiredSettingCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9

  v6 = -1073741811;
  PopAcquirePowerRequestPushLock(1);
  v8 = *(_QWORD *)&GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data1 == *a1 )
    v8 = *(_QWORD *)GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT.Data4 - a1[1];
  if ( !v8 && a3 == 4 && a2 )
  {
    KeCancelTimer2((__int64)&PopPowerRequestExecutionRequiredTimeoutTimer, 0LL, v7, 0LL);
    PopExecutionRequiredTimeout = *a2;
    PopPowerRequestSetExecutionRequiredTimeoutTimer();
    PopPowerRequestHandleExecutionEnablementUpdate();
    v6 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return v6;
}
