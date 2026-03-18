/*
 * XREFs of WheaLogInternalEvent @ 0x1403810A0
 * Callers:
 *     HalpCmcLogPollingTimeoutEvent @ 0x140502734 (HalpCmcLogPollingTimeoutEvent.c)
 *     HalpCmciHandler @ 0x14050584C (HalpCmciHandler.c)
 *     IoSaveBugCheckProgress @ 0x140550A80 (IoSaveBugCheckProgress.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x140550B5C (IoSaveBugCheckRecoveryStatus.c)
 *     KiBugCheckProgressCpusFrozen @ 0x140569A20 (KiBugCheckProgressCpusFrozen.c)
 *     KiMcheckAlternateReturn @ 0x140580420 (KiMcheckAlternateReturn.c)
 *     WheaReportHwError @ 0x1406106A0 (WheaReportHwError.c)
 *     WheapInitErrorReportDeviceDriver @ 0x140611998 (WheapInitErrorReportDeviceDriver.c)
 *     WheaPersistBadPageToRegistry @ 0x140611FC0 (WheaPersistBadPageToRegistry.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x1406128C8 (WheapCreateRecordFromGenericErrorData.c)
 *     WheapProcessOfflineList @ 0x1406144E0 (WheapProcessOfflineList.c)
 *     HalpCmcWorkerRoutine @ 0x140820C70 (HalpCmcWorkerRoutine.c)
 *     WheaAddErrorSource @ 0x1408210A0 (WheaAddErrorSource.c)
 *     WheapLogInitEvent @ 0x1408575AC (WheapLogInitEvent.c)
 *     WheapProcessWaitingETWEvents @ 0x140861010 (WheapProcessWaitingETWEvents.c)
 *     WheaRemoveErrorSource @ 0x140A07970 (WheaRemoveErrorSource.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A07B50 (WheaRemoveErrorSourceDeviceDriver.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140A0824C (WheapAttemptPhysicalPageOffline.c)
 *     WheapClearPoison @ 0x140A08560 (WheapClearPoison.c)
 *     WheapLogAddToDefectListFail @ 0x140A086E0 (WheapLogAddToDefectListFail.c)
 *     WheapExecuteRowFailureCheck @ 0x140A08A70 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x140A08CD0 (WheapPfaLogPageMonitorRemoval.c)
 *     WheapLogPolicyTelemetry @ 0x140A099A4 (WheapLogPolicyTelemetry.c)
 *     WheapTrackPendingPage @ 0x140A09CB8 (WheapTrackPendingPage.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140A8B914 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140A96244 (HalpInitGenericErrorSourceEntryV2.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     EtwWriteEx @ 0x1402580C0 (EtwWriteEx.c)
 *     WheaIsCriticalState @ 0x1403811C0 (WheaIsCriticalState.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     WheaSelLogEvent @ 0x140610168 (WheaSelLogEvent.c)
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 */

LONG __fastcall WheaLogInternalEvent(_DWORD *Src)
{
  LONG *v1; // rbx
  LONG result; // eax
  unsigned int *v3; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // esi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _QWORD InputBuffer[4]; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  char *v12; // [rsp+78h] [rbp-19h]
  __int64 v13; // [rsp+80h] [rbp-11h]
  char *v14; // [rsp+88h] [rbp-9h]
  __int64 v15; // [rsp+90h] [rbp-1h]
  LONG *v16; // [rsp+98h] [rbp+7h]
  __int64 v17; // [rsp+A0h] [rbp+Fh]
  unsigned int *v18; // [rsp+A8h] [rbp+17h]
  __int64 v19; // [rsp+B0h] [rbp+1Fh]
  _DWORD *v20; // [rsp+B8h] [rbp+27h]
  unsigned int v21; // [rsp+C0h] [rbp+2Fh]
  int v22; // [rsp+C4h] [rbp+33h]

  v1 = Src + 6;
  result = Src[6];
  v3 = Src + 2;
  if ( (result & 4) != 0 )
  {
    v5 = *v3;
    InputBuffer[2] = 0LL;
    InputBuffer[3] = 15LL;
    InputBuffer[0] = Src;
    InputBuffer[1] = v5;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
    *v1 &= ~4u;
    result = *v1;
  }
  if ( (result & 8) != 0 )
  {
    WheaSelLogEvent(Src);
    *v1 &= ~8u;
    result = *v1;
  }
  if ( WheapEventingInitialized )
  {
    if ( (result & 2) != 0 )
    {
      result = WheaIsCriticalState();
      if ( !(_BYTE)result )
      {
        UserData.Ptr = (ULONGLONG)(Src + 3);
        *(_QWORD *)&UserData.Size = 4LL;
        v12 = (char *)(Src + 4);
        v13 = 4LL;
        v14 = (char *)(Src + 5);
        v21 = *v3;
        v15 = 4LL;
        v16 = v1;
        v17 = 4LL;
        v18 = v3;
        v19 = 4LL;
        v20 = Src;
        v22 = 0;
        return EtwWriteEx(
                 (REGHANDLE)WheapDispatchPtr.Queue.ListEntry.Flink,
                 &EVENT_WHEA_LOG_ENTRY,
                 0LL,
                 0,
                 0LL,
                 0LL,
                 6u,
                 &UserData);
      }
    }
  }
  else
  {
    result = KeGetCurrentIrql();
    if ( (unsigned __int8)result < 2u )
    {
      KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
      v6 = (unsigned int)Src[7];
      v7 = v6 + WheapDeferredEventTotalBytes + 48;
      if ( v7 < 0x1000 )
      {
        v8 = (_QWORD *)((char *)&WheapDeferredEventBuffer + (unsigned int)WheapDeferredEventTotalBytes);
        memmove(v8 + 2, Src, v6 + 32);
        v9 = (_QWORD *)qword_140C2B9C8;
        WheapDeferredEventTotalBytes = v7;
        if ( *(__int64 **)qword_140C2B9C8 != &WheapDeferredInternalLogs )
          __fastfail(3u);
        *v8 = &WheapDeferredInternalLogs;
        v8[1] = v9;
        *v9 = v8;
        qword_140C2B9C8 = (__int64)v8;
      }
      return KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    }
  }
  return result;
}
