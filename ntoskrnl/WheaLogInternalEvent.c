/*
 * XREFs of WheaLogInternalEvent @ 0x14037D610
 * Callers:
 *     HalpCmcLogPollingTimeoutEvent @ 0x140500654 (HalpCmcLogPollingTimeoutEvent.c)
 *     HalpCmciHandler @ 0x14050376C (HalpCmciHandler.c)
 *     IoSaveBugCheckProgress @ 0x14054E5E0 (IoSaveBugCheckProgress.c)
 *     IoSaveBugCheckRecoveryStatus @ 0x14054E6BC (IoSaveBugCheckRecoveryStatus.c)
 *     KiBugCheckProgressCpusFrozen @ 0x140567580 (KiBugCheckProgressCpusFrozen.c)
 *     KiMcheckAlternateReturn @ 0x14057DEF0 (KiMcheckAlternateReturn.c)
 *     WheaReportHwError @ 0x14060E280 (WheaReportHwError.c)
 *     WheapInitErrorReportDeviceDriver @ 0x14060F578 (WheapInitErrorReportDeviceDriver.c)
 *     WheaPersistBadPageToRegistry @ 0x14060FBA0 (WheaPersistBadPageToRegistry.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x1406104A8 (WheapCreateRecordFromGenericErrorData.c)
 *     WheapProcessOfflineList @ 0x1406120C0 (WheapProcessOfflineList.c)
 *     HalpCmcWorkerRoutine @ 0x14080C020 (HalpCmcWorkerRoutine.c)
 *     WheaAddErrorSource @ 0x14080C450 (WheaAddErrorSource.c)
 *     WheapLogInitEvent @ 0x14085337C (WheapLogInitEvent.c)
 *     WheapProcessWaitingETWEvents @ 0x14085D1A0 (WheapProcessWaitingETWEvents.c)
 *     WheaRemoveErrorSource @ 0x140A04C80 (WheaRemoveErrorSource.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A04E60 (WheaRemoveErrorSourceDeviceDriver.c)
 *     WheapAttemptPhysicalPageOffline @ 0x140A0555C (WheapAttemptPhysicalPageOffline.c)
 *     WheapClearPoison @ 0x140A05870 (WheapClearPoison.c)
 *     WheapLogAddToDefectListFail @ 0x140A059F0 (WheapLogAddToDefectListFail.c)
 *     WheapExecuteRowFailureCheck @ 0x140A05D80 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x140A05FE0 (WheapPfaLogPageMonitorRemoval.c)
 *     WheapLogPolicyTelemetry @ 0x140A06CB4 (WheapLogPolicyTelemetry.c)
 *     WheapTrackPendingPage @ 0x140A06FC8 (WheapTrackPendingPage.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140A88304 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140A93104 (HalpInitGenericErrorSourceEntryV2.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     WheaIsCriticalState @ 0x14037D730 (WheaIsCriticalState.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     WheaSelLogEvent @ 0x14060DD48 (WheaSelLogEvent.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 */

LONG __fastcall WheaLogInternalEvent(_DWORD *Src)
{
  LONG *v1; // rbx
  LONG result; // eax
  unsigned int *v3; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // esi
  ULONG **v8; // rbx
  ULONG ***v9; // rax
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
                 (REGHANDLE)WheapDispatchPtr.Queue.Wcb.DeviceRoutine,
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
        v8 = (ULONG **)((char *)&WheapDeferredEventBuffer + (unsigned int)WheapDeferredEventTotalBytes);
        memmove(v8 + 2, Src, v6 + 32);
        v9 = *(ULONG ****)&WheapDispatchPtr.DeviceQueue.Type;
        WheapDeferredEventTotalBytes = v7;
        if ( **(struct _DEVICE_OBJECT ***)&WheapDispatchPtr.DeviceQueue.Type != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.AlignmentRequirement )
          __fastfail(3u);
        *v8 = &WheapDispatchPtr.AlignmentRequirement;
        v8[1] = (ULONG *)v9;
        *v9 = v8;
        *(_QWORD *)&WheapDispatchPtr.DeviceQueue.Type = v8;
      }
      return KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    }
  }
  return result;
}
