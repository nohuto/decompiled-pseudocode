/*
 * XREFs of KeSetCoalescableTimer @ 0x140252440
 * Callers:
 *     EtwpRequestFlushTimer @ 0x140227AE0 (EtwpRequestFlushTimer.c)
 *     CmpArmLazyWriter @ 0x1402E7294 (CmpArmLazyWriter.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x1403109FC (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x140311B08 (PopFxEnableWorkOrderWatchdog.c)
 *     ExpSetTimerObject @ 0x14032E684 (ExpSetTimerObject.c)
 *     PopFxArmResidentTimer @ 0x14034BEF4 (PopFxArmResidentTimer.c)
 *     PopPepArmIdleTimer @ 0x140354EF4 (PopPepArmIdleTimer.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x140357068 (CcRescheduleLazyWriteScanOnVolume.c)
 *     CmpCompleteLazyWrite @ 0x140366034 (CmpCompleteLazyWrite.c)
 *     ExpTimerDpcRoutine @ 0x140369870 (ExpTimerDpcRoutine.c)
 *     ExpTimerResume @ 0x14036AA50 (ExpTimerResume.c)
 *     CcBcbProfiler @ 0x1403E2CE0 (CcBcbProfiler.c)
 *     CcRescheduleLazyWriteScan @ 0x1405373D8 (CcRescheduleLazyWriteScan.c)
 *     IopEnableTimer @ 0x140555478 (IopEnableTimer.c)
 *     ExpTimerAdjust @ 0x14060BDCC (ExpTimerAdjust.c)
 *     sub_14067E010 @ 0x14067E010 (sub_14067E010.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x1407E18EC (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     ExpWorkQueueManagerThread @ 0x14083A910 (ExpWorkQueueManagerThread.c)
 *     PiDrvDbUnloadNode @ 0x14086BF44 (PiDrvDbUnloadNode.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140875C44 (CcSetTelemetryPeriodicTimer.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x140881090 (CcTelemetryPeriodicTimerCallback.c)
 *     IopErrorLogQueueRequest @ 0x140951674 (IopErrorLogQueueRequest.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140AED07C (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayFade @ 0x140AED9AC (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AEE558 (AnFwDisplayProgressIndicator.c)
 *     AnFwProgressIndicatorTransition @ 0x140AF3174 (AnFwProgressIndicatorTransition.c)
 *     CcInitializeBcbProfiler @ 0x140B18354 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140B75A74 (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
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
