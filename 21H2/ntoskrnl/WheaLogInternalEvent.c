/*
 * XREFs of WheaLogInternalEvent @ 0x1403BAEC0
 * Callers:
 *     HalpCmcLogPollingTimeoutEvent @ 0x1404B9C6C (HalpCmcLogPollingTimeoutEvent.c)
 *     HalpCmciHandler @ 0x1404BCCE8 (HalpCmciHandler.c)
 *     IoSaveBugCheckProgress @ 0x140502700 (IoSaveBugCheckProgress.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x1405027E0 (IoSaveBugCheckRecoveryStatus.c)
 *     IopWriteBugCheckSelEntries @ 0x140504B1C (IopWriteBugCheckSelEntries.c)
 *     WheaReportHwError @ 0x1405BB360 (WheaReportHwError.c)
 *     WheapInitErrorReportDeviceDriver @ 0x1405BC6B0 (WheapInitErrorReportDeviceDriver.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x1405BCF20 (WheapCreateRecordFromGenericErrorData.c)
 *     WheapGenerateETWEvents @ 0x1405BD640 (WheapGenerateETWEvents.c)
 *     WheaAddErrorSource @ 0x1407AF4C0 (WheaAddErrorSource.c)
 *     WheapLogInitEvent @ 0x1407AF75C (WheapLogInitEvent.c)
 *     WheapEtwEnableCallback @ 0x1407D3740 (WheapEtwEnableCallback.c)
 *     HalpCmcWorkerRoutine @ 0x1408645A0 (HalpCmcWorkerRoutine.c)
 *     WheaRemoveErrorSource @ 0x14095D100 (WheaRemoveErrorSource.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x14095D2F0 (WheaRemoveErrorSourceDeviceDriver.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14095D87C (WheapAttemptPhysicalPageOffline.c)
 *     WheapClearPoison @ 0x14095DB34 (WheapClearPoison.c)
 *     WheapLogPolicyTelemetry @ 0x14095E15C (WheapLogPolicyTelemetry.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x14095E55C (WheapPfaLogPageMonitorRemoval.c)
 *     HalpInitGenericErrorSourceEntry @ 0x1409A8610 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x1409A88A8 (HalpInitGenericErrorSourceEntryV2.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     WheaSelLogEvent @ 0x1405BE3B8 (WheaSelLogEvent.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 */

LONG __fastcall WheaLogInternalEvent(_DWORD *Src)
{
  LONG *v2; // rcx
  LONG result; // eax
  __int64 v4; // rax
  unsigned int v5; // esi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rax
  _QWORD InputBuffer[4]; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  char *v11; // [rsp+78h] [rbp-9h]
  __int64 v12; // [rsp+80h] [rbp-1h]
  char *v13; // [rsp+88h] [rbp+7h]
  __int64 v14; // [rsp+90h] [rbp+Fh]
  LONG *v15; // [rsp+98h] [rbp+17h]
  __int64 v16; // [rsp+A0h] [rbp+1Fh]
  char *v17; // [rsp+A8h] [rbp+27h]
  __int64 v18; // [rsp+B0h] [rbp+2Fh]
  _DWORD *v19; // [rsp+B8h] [rbp+37h]
  int v20; // [rsp+C0h] [rbp+3Fh]
  int v21; // [rsp+C4h] [rbp+43h]

  if ( WheapEventingInitialized )
  {
    v2 = Src + 6;
    result = *v2;
    if ( (*v2 & 2) != 0 )
    {
      v15 = v2;
      UserData.Ptr = (ULONGLONG)(Src + 3);
      *(_QWORD *)&UserData.Size = 4LL;
      v11 = (char *)(Src + 4);
      v12 = 4LL;
      v13 = (char *)(Src + 5);
      v17 = (char *)(Src + 2);
      v20 = Src[2];
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v19 = Src;
      v21 = 0;
      EtwWriteEx(
        (REGHANDLE)WheapDispatchPtr.Queue.Wcb.DeviceObject,
        &EVENT_WHEA_LOG_ENTRY,
        0LL,
        0,
        0LL,
        0LL,
        6u,
        &UserData);
      result = Src[6];
    }
    if ( (result & 4) != 0 )
    {
      v8 = (unsigned int)Src[2];
      InputBuffer[2] = 0LL;
      InputBuffer[3] = 15LL;
      InputBuffer[0] = Src;
      InputBuffer[1] = v8;
      NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
      result = Src[6];
    }
    if ( (result & 8) != 0 )
      return WheaSelLogEvent(Src);
  }
  else
  {
    result = KeGetCurrentIrql();
    if ( (unsigned __int8)result < 2u )
    {
      KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
      v4 = (unsigned int)Src[7];
      v5 = v4 + WheapDeferredEventTotalBytes + 48;
      if ( v5 < 0x1000 )
      {
        v6 = (_QWORD *)((char *)&WheapDeferredEventBuffer + (unsigned int)WheapDeferredEventTotalBytes);
        memmove(v6 + 2, Src, v4 + 32);
        v7 = (_QWORD *)qword_140C14F88;
        WheapDeferredEventTotalBytes = v5;
        if ( *(__int64 **)qword_140C14F88 != &WheapDeferredInternalLogs )
          __fastfail(3u);
        *v6 = &WheapDeferredInternalLogs;
        v6[1] = v7;
        *v7 = v6;
        qword_140C14F88 = (__int64)v6;
      }
      return KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    }
  }
  return result;
}
