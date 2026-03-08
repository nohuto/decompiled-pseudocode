/*
 * XREFs of KeSetCoalescableTimer @ 0x140250440
 * Callers:
 *     EtwpRequestFlushTimer @ 0x140205EDC (EtwpRequestFlushTimer.c)
 *     ExpSetTimerObject @ 0x1402CDE34 (ExpSetTimerObject.c)
 *     PopFxArmResidentTimer @ 0x1402E0624 (PopFxArmResidentTimer.c)
 *     PopPepArmIdleTimer @ 0x1402E9704 (PopPepArmIdleTimer.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x1402EB4A8 (CcRescheduleLazyWriteScanOnVolume.c)
 *     CmpCompleteLazyWrite @ 0x1402FADA4 (CmpCompleteLazyWrite.c)
 *     ExpTimerDpcRoutine @ 0x1402FE790 (ExpTimerDpcRoutine.c)
 *     ExpTimerResume @ 0x1402FF9C0 (ExpTimerResume.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140304FDC (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x140305580 (PopFxEnableWorkOrderWatchdog.c)
 *     CmpArmLazyWriter @ 0x140349EA4 (CmpArmLazyWriter.c)
 *     CcBcbProfiler @ 0x1403DD7C0 (CcBcbProfiler.c)
 *     CcRescheduleLazyWriteScan @ 0x140534F08 (CcRescheduleLazyWriteScan.c)
 *     IopEnableTimer @ 0x140552FD8 (IopEnableTimer.c)
 *     ExpTimerAdjust @ 0x140609980 (ExpTimerAdjust.c)
 *     sub_14067C010 @ 0x14067C010 (sub_14067C010.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x140792310 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     ExpWorkQueueManagerThread @ 0x140839860 (ExpWorkQueueManagerThread.c)
 *     PiDrvDbUnloadNode @ 0x140869314 (PiDrvDbUnloadNode.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140872D84 (CcSetTelemetryPeriodicTimer.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x14087C260 (CcTelemetryPeriodicTimerCallback.c)
 *     IopErrorLogQueueRequest @ 0x14094E654 (IopErrorLogQueueRequest.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AE90B8 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayFade @ 0x140AE99E8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AEA598 (AnFwDisplayProgressIndicator.c)
 *     AnFwProgressIndicatorTransition @ 0x140AEF174 (AnFwProgressIndicatorTransition.c)
 *     CcInitializeBcbProfiler @ 0x140B14354 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140B717E4 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  char v5; // r10
  unsigned __int64 v7; // r9
  unsigned __int64 v9; // r9
  ULONG v10; // r8d
  ULONG v11; // eax

  v5 = 0;
  if ( TolerableDelay )
  {
    v7 = 10000LL * TolerableDelay;
    if ( v7 > 0xFC0000 )
    {
      v9 = v7 - 16515072;
      if ( DueTime.QuadPart >= 0 )
      {
        v10 = v9 + DueTime.LowPart;
        if ( (__int64)(v9 + DueTime.QuadPart) < DueTime.QuadPart )
          v10 = -1;
      }
      else
      {
        v10 = DueTime.LowPart - v9;
        if ( (__int64)(DueTime.QuadPart - v9) > DueTime.QuadPart )
          v10 = 0;
      }
      if ( Period )
      {
        v11 = -1;
        if ( Period + (int)v9 / 10000 >= Period )
          v11 = Period + (int)v9 / 10000;
        Period = v11;
      }
      LODWORD(v7) = 16515072;
      DueTime.LowPart = v10;
    }
    TolerableDelay = (unsigned int)v7 >> 18;
    if ( TolerableDelay > 0x3F )
      TolerableDelay = 63;
    v5 = 4 * TolerableDelay;
  }
  LOBYTE(TolerableDelay) = v5;
  return KiSetTimerEx((_DWORD)Timer, DueTime.LowPart, Period, TolerableDelay, (__int64)Dpc);
}
