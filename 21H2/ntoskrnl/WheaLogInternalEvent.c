/*
 * XREFs of WheaLogInternalEvent @ 0x1403D2A90
 * Callers:
 *     HalpCmcLogPollingTimeoutEvent @ 0x14050634C (HalpCmcLogPollingTimeoutEvent.c)
 *     HalpCmciHandler @ 0x140509620 (HalpCmciHandler.c)
 *     IoSaveBugCheckProgress @ 0x140552B40 (IoSaveBugCheckProgress.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x140552C20 (IoSaveBugCheckRecoveryStatus.c)
 *     KiMcheckAlternateReturn @ 0x14057C3C0 (KiMcheckAlternateReturn.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 *     WheapInitErrorReportDeviceDriver @ 0x140644930 (WheapInitErrorReportDeviceDriver.c)
 *     WheaPersistBadPageToRegistry @ 0x140644EEC (WheaPersistBadPageToRegistry.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x140645708 (WheapCreateRecordFromGenericErrorData.c)
 *     WheapGenerateETWEvents @ 0x140645F80 (WheapGenerateETWEvents.c)
 *     WheapProcessOfflineList @ 0x140646C90 (WheapProcessOfflineList.c)
 *     WheaAddErrorSource @ 0x14084E510 (WheaAddErrorSource.c)
 *     WheapLogInitEvent @ 0x14084E760 (WheapLogInitEvent.c)
 *     WheapProcessWaitingETWEvents @ 0x140860F60 (WheapProcessWaitingETWEvents.c)
 *     HalpCmcWorkerRoutine @ 0x140908680 (HalpCmcWorkerRoutine.c)
 *     WheaRemoveErrorSource @ 0x140A08880 (WheaRemoveErrorSource.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A08A50 (WheaRemoveErrorSourceDeviceDriver.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140A08FFC (WheapAttemptPhysicalPageOffline.c)
 *     WheapClearPoison @ 0x140A092FC (WheapClearPoison.c)
 *     WheapLogPolicyTelemetry @ 0x140A09A80 (WheapLogPolicyTelemetry.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x140A09F1C (WheapPfaLogPageMonitorRemoval.c)
 *     WheapTrackPendingPage @ 0x140A0A490 (WheapTrackPendingPage.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140A5AEB0 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140A61D50 (HalpInitGenericErrorSourceEntryV2.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     WheaIsCriticalState @ 0x1403D2BA0 (WheaIsCriticalState.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     WheaSelLogEvent @ 0x140643064 (WheaSelLogEvent.c)
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 */

LONG __fastcall WheaLogInternalEvent(_DWORD *Src)
{
  LONG *v2; // rdi
  LONG result; // eax
  __int64 v4; // rax
  unsigned int v5; // esi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rax
  _QWORD InputBuffer[4]; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  char *v11; // [rsp+70h] [rbp-19h]
  __int64 v12; // [rsp+78h] [rbp-11h]
  char *v13; // [rsp+80h] [rbp-9h]
  __int64 v14; // [rsp+88h] [rbp-1h]
  LONG *v15; // [rsp+90h] [rbp+7h]
  __int64 v16; // [rsp+98h] [rbp+Fh]
  char *v17; // [rsp+A0h] [rbp+17h]
  __int64 v18; // [rsp+A8h] [rbp+1Fh]
  _DWORD *v19; // [rsp+B0h] [rbp+27h]
  int v20; // [rsp+B8h] [rbp+2Fh]
  int v21; // [rsp+BCh] [rbp+33h]

  if ( WheapEventingInitialized )
  {
    v2 = Src + 6;
    if ( (Src[6] & 2) != 0 && !(unsigned __int8)WheaIsCriticalState() )
    {
      UserData.Ptr = (ULONGLONG)(Src + 3);
      *(_QWORD *)&UserData.Size = 4LL;
      v11 = (char *)(Src + 4);
      v12 = 4LL;
      v13 = (char *)(Src + 5);
      v14 = 4LL;
      v17 = (char *)(Src + 2);
      v20 = Src[2];
      v15 = v2;
      v16 = 4LL;
      v18 = 4LL;
      v19 = Src;
      v21 = 0;
      EtwWriteEx(
        (REGHANDLE)WheapDispatchPtr.Queue.Wcb.DeviceRoutine,
        &EVENT_WHEA_LOG_ENTRY,
        0LL,
        0,
        0LL,
        0LL,
        6u,
        &UserData);
    }
    result = *v2;
    if ( (*v2 & 4) != 0 )
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
        v7 = (_QWORD *)qword_140C0FA48;
        WheapDeferredEventTotalBytes = v5;
        if ( *(__int64 **)qword_140C0FA48 != &WheapDeferredInternalLogs )
          __fastfail(3u);
        *v6 = &WheapDeferredInternalLogs;
        v6[1] = v7;
        *v7 = v6;
        qword_140C0FA48 = (__int64)v6;
      }
      return KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    }
  }
  return result;
}
