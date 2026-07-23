/*
 * XREFs of PopEvaluateInputSuppressionAction @ 0x1408EEBC4
 * Callers:
 *     PopBroadcastInputSuppressionCallback @ 0x140781AB0 (PopBroadcastInputSuppressionCallback.c)
 *     PopExternalMonitorUpdatedWorker @ 0x1407D56B0 (PopExternalMonitorUpdatedWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     PopBroadcastSessionInfo @ 0x140791634 (PopBroadcastSessionInfo.c)
 *     PopTraceInputSuppressionActionUpdate @ 0x1408EC430 (PopTraceInputSuppressionActionUpdate.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 */

void __fastcall PopEvaluateInputSuppressionAction(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // bp
  bool v4; // di
  bool v5; // si
  char v6; // r14
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  WNF_CHANGE_STAMP MatchingChangeStamp; // [rsp+28h] [rbp-60h]
  BOOL Buffer; // [rsp+40h] [rbp-48h] BYREF
  GUID v14; // [rsp+48h] [rbp-40h] BYREF
  BOOL v15; // [rsp+58h] [rbp-30h]

  v15 = 0;
  Buffer = 0;
  v14 = 0LL;
  PopAcquirePolicyLock(a1);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopInputSuppressionLock);
  v3 = PopConsoleExternalDisplayConnected;
  v4 = PopLidOpened == 0;
  v5 = dword_140C2334C == 1;
  v6 = PopConsoleDisplayState == 0;
  if ( PopErrataReportingIncorrectLidState
    || !PopIgnoreLidStateForInputSuppression && PopLidOpened
    || dword_140C2334C != 1
    || PopConsoleExternalDisplayConnected
    || (v7 = 1, PopConsoleDisplayState) )
  {
    v7 = 0;
  }
  if ( !PopEnableInputSuppression && v7 == 1 )
    v7 = 2;
  PopReleasePolicyLock(v2, v1);
  if ( PopInputSuppressionRequired != v7 )
  {
    LOBYTE(v11) = v3;
    LOBYTE(v10) = v5;
    LOBYTE(v8) = v4;
    PopInputSuppressionRequired = v7;
    PopTraceInputSuppressionActionUpdate(v9, v8, v10, v11, v6, MatchingChangeStamp, v7);
    ZwUpdateWnfStateData(&WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX, &PopInputSuppressionRequired, 4u, 0LL, 0LL, 0, 0);
    if ( PopEnableInputSuppression )
    {
      if ( (unsigned int)PopInputSuppressionRequired <= 1 )
        _InterlockedIncrement(&PopInputSuppressionActionCount);
      Buffer = PopInputSuppressionRequired == 1;
      ZwUpdateWnfStateData(&WNF_PO_INPUT_SUPPRESS_NOTIFICATION, &Buffer, 4u, 0LL, 0LL, 0, 0);
      v15 = Buffer;
      v14 = GUID_INPUT_SUPPRESS_REQUESTED;
      PopBroadcastSessionInfo(0, 20, (__int64)&v14);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopInputSuppressionLock);
}
